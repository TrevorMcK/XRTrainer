using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
//using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

public class GraphSaveUtility 
{
    private QuestGraphView questGraphView;
    private QuestObject objectCache;

    private List<Edge> edges => questGraphView.edges.ToList();
    private List<QuestNode> nodes => questGraphView.nodes.ToList().Cast<QuestNode>().ToList();

    public static GraphSaveUtility GetInstance(QuestGraphView targetGraph)
    {
        return new GraphSaveUtility
        {
            questGraphView = targetGraph,
        };
    }

    public void SaveGraph(string fileName)
    {
        if (!edges.Any()) return;

        var questContainer = ScriptableObject.CreateInstance<QuestObject>();

        var connectedPorts = edges.Where(x => x.input.node != null).ToArray();

        foreach (var connectedPort in connectedPorts)
        {
            var outputNode = connectedPort.output.node as QuestNode;
            var inputNode = connectedPort.input.node as QuestNode;

            questContainer.nodeLinks.Add(new NodeLinkData
            {
                BaseNodeGuid = outputNode.GUID,
                PortName = connectedPort.output.portName,
                TargetNodeGuid = inputNode.GUID
            });
        }

        foreach (var questNode in nodes.Where(node=>!node.EntryPoint))
        {
            questContainer.questNodeData.Add(new QuestNodeData
            {
                guid = questNode.GUID,
                NodeName = questNode.NodeName,
                position = questNode.GetPosition().position,
                description = questNode.description,
                //step = questNode.step,

            });
        }

        if (!AssetDatabase.IsValidFolder("Assets/Resources"))
        {
            AssetDatabase.CreateFolder("Assets", "Resources");
        }

        AssetDatabase.CreateAsset(questContainer,$"Assets/Resources/{fileName}.asset");
        AssetDatabase.SaveAssets();
    } 
    public void LoadGraph(string fileName)
    {
        objectCache = Resources.Load<QuestObject>(fileName);
        if (objectCache == null)
        {
            EditorUtility.DisplayDialog("File Not Found","Target quest graph file does not exist.","OK");
            return;
        }

        ClearGraph();
        CreateNodes();
        ConnectNodes();

    }

    private void ConnectNodes()
    {
        for (int i = 0; i < nodes.Count; i++)
        {
            var connections = objectCache.nodeLinks.Where(x => x.BaseNodeGuid == nodes[i].GUID).ToList();
            for(int j = 0; j < connections.Count; j++)
            {
                var targetNodeGuid = connections[j].TargetNodeGuid;
                var targetNode = nodes.First(x => x.GUID == targetNodeGuid);
                LinkNodes(nodes[i].outputContainer[j].Q<Port>(), (Port)targetNode.inputContainer[0]);

                targetNode.SetPosition(new Rect(
                    objectCache.questNodeData.First(x => x.guid == targetNodeGuid).position,
                    questGraphView.defaultNodeSize));
            }
        }
    }

    private void LinkNodes(Port output, Port input)
    {
        var temp = new Edge
        {
            output = output,
            input = input
        };
        temp?.input.Connect(temp);
        temp?.output.Connect(temp);
        questGraphView.Add(temp);
    }

    private void CreateNodes()
    {
        foreach (var nodeData in objectCache.questNodeData)
        {
            var tempNode = questGraphView.CreateQuestNode(nodeData.NodeName, new QuestNode { description = nodeData.description/*, step = nodeData.step*/});
            tempNode.GUID = nodeData.guid;
            questGraphView.AddElement(tempNode);
            
            var nodePorts = objectCache.nodeLinks.Where(x => x.BaseNodeGuid == nodeData.guid).ToList();
            nodePorts.ForEach(x => questGraphView.AddChoicePort(tempNode, x.PortName));
        }
    }

    private void ClearGraph()
    {
        nodes.Find(x => x.EntryPoint).GUID = objectCache.nodeLinks[0].BaseNodeGuid;

        foreach(var node in nodes)
        {
            if (node.EntryPoint) continue;
            edges.Where(x=>x.input.node==node).ToList().ForEach(edge=>questGraphView.RemoveElement(edge));
        
            questGraphView.RemoveElement(node);
        }

    }
}

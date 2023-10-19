using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEditor.Search;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UIElements;

public class QuestGraphView : GraphView
{
    public Vector2 defaultNodeSize = new Vector2(200, 150);
  
    public QuestGraphView() 
    {

        //EditorStyles.textField.wordWrap = false;
        styleSheets.Add(Resources.Load<StyleSheet>("QuestStyle"));
        SetupZoom(ContentZoomer.DefaultMinScale, ContentZoomer.DefaultMaxScale);

        this.AddManipulator(new ContentDragger());
        this.AddManipulator(new SelectionDragger());
        this.AddManipulator(new RectangleSelector());

        var grid = new GridBackground();
        Insert(0, grid);
        grid.StretchToParentSize();

        AddElement(GenerateEntryPointNode());
    }

    private Port GeneratePort(QuestNode node, Direction direction, Port.Capacity capacity = Port.Capacity.Single)
    {
        return node.InstantiatePort(Orientation.Horizontal, direction, capacity, typeof(float));
    }

    private QuestNode GenerateEntryPointNode()
    {
        var node = new QuestNode
        {
            title = "Start",
            GUID = Guid.NewGuid().ToString(),
            EntryPoint = true
        };

        var genratePort = GeneratePort(node,Direction.Output);
        genratePort.portName = "Start";
        node.outputContainer.Add(genratePort);

        node.RefreshExpandedState();

        node.RefreshPorts();

        node.SetPosition(new Rect(100,200,100,150));
        return node;
    }

    public void CreateNode(string nodeName)
    {
        AddElement(CreateQuestNode(nodeName));
    }

    public QuestNode CreateQuestNode(string nodeName, QuestNode giveNode = null)
    {


        var questNode = new QuestNode
        {
            title = nodeName,
            NodeName = nodeName,
            GUID = Guid.NewGuid().ToString(),
        };

        if (giveNode != null)
        {
            questNode = giveNode;
        }

        var inputPort = GeneratePort(questNode,Direction.Input,Port.Capacity.Multi);
        inputPort.portName = "Input";

        questNode.inputContainer.Add(inputPort); 

        var button = new Button(() => 
        {
            AddChoicePort(questNode);

        });
        button.text = "New Choice";
        questNode.titleContainer.Add(button);

        var textFieldDescription = new TextField(string.Empty);
        textFieldDescription.RegisterValueChangedCallback(evt =>
        {
            questNode.description = evt.newValue;
        });
        textFieldDescription.SetValueWithoutNotify(questNode.description);
        questNode.mainContainer.Add(textFieldDescription);

        questNode.RefreshExpandedState();
        questNode.RefreshPorts();
        questNode.SetPosition(new Rect(Vector2.zero, defaultNodeSize));
        return questNode;

    }

    public void AddChoicePort(QuestNode questNode, string newName = "")
    {
        var generatedPort = GeneratePort(questNode, Direction.Output);

        var outputPortCount = questNode.outputContainer.Query("connector").ToList().Count();
        var choicePortName = string.IsNullOrEmpty(newName) ? $"Choice {outputPortCount + 1}" : newName;

        questNode.outputContainer.Add(generatedPort);
        var textField = new TextField
        {
            name = string.Empty,
            value = choicePortName,
            style =
            {
                maxWidth = 100
            }
        };

        textField.RegisterValueChangedCallback(value => generatedPort.portName = value.newValue);
        generatedPort.contentContainer.Add(new Label(" "));
        generatedPort.contentContainer.Add(textField);
        var deleteButton = new Button(() => RemovePort(questNode, generatedPort))
        {
            text = "X"
        };

        generatedPort.contentContainer.Add(deleteButton);
        generatedPort.portName = choicePortName;

        questNode.RefreshPorts();
        questNode.RefreshExpandedState();
    }

    private void RemovePort(QuestNode questNode, Port generatedPort)
    {
        var targetEdge = edges.ToList().Where(x => x.output.portName == generatedPort.portName && x.output.node == generatedPort.node);
        if (targetEdge.Any())
        {
            var edge = targetEdge.First();
            edge.input.Disconnect(edge);
            RemoveElement(targetEdge.First());

        }
        questNode.outputContainer.Remove(generatedPort);
        questNode.RefreshPorts() ;
        questNode.RefreshExpandedState();
    }

    public override List<Port> GetCompatiblePorts(Port startPort, NodeAdapter nodeAdapter)
    {
        var compatiblePorts = new List<Port>();

        ports.ForEach(port =>
        {
            if(startPort!=port && startPort.node != port.node)
            {
                compatiblePorts.Add(port);
            }
        });

        return compatiblePorts;
    }

}

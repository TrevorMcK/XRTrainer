using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class Quest
{
    [SerializeField]private QuestObject questObject;

    //[SerializeField]private Dictionary<QuestNodeData, QuestStep> questGroup = new Dictionary<QuestNodeData, QuestStep>();

    public UnityEvent<bool> onSwitch;

    public UnityEvent<bool> onObjectInteration;

    public QuestState state;

    public List<QuestNodeData> activeQuestNodes = new List<QuestNodeData>();

    private Dictionary<string, QuestNodeData> linkNodeByName = new Dictionary<string, QuestNodeData>();
    [SerializeField] private List<QuestStep> steps = new List<QuestStep>();


    public void OnIntialize(int choiceStep = 1)
    {

        foreach (QuestNodeData nodeData in questObject.questNodeData)
        {
            linkNodeByName.Add(nodeData.guid, nodeData);
            
        }
        IterateQuestStep(questObject.questNodeData[choiceStep].guid);
    }

#if UNITY_EDITOR
    public void SetupSteps()
    {
        foreach (var step in questObject.questNodeData)
        {
            steps.Add(new QuestStep());
        }
    }
#endif

    public void IterateQuestStep(string nodePicked)
    {
        foreach (NodeLinkData nodeLink in questObject.nodeLinks)
        {
            if (nodeLink.BaseNodeGuid == nodePicked)
            {
                activeQuestNodes.Add(linkNodeByName[nodeLink.TargetNodeGuid]);
            }
        }
    }
}
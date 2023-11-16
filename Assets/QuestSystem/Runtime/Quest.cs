using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class Quest
{
    [SerializeField] private QuestObject questObject;

    //[SerializeField]private Dictionary<QuestNodeData, QuestStep> questGroup = new Dictionary<QuestNodeData, QuestStep>();

    public UnityEvent<bool> OnSwitch;

    public UnityEvent<bool> OnObjectInteration;

    public QuestState state;

    public List<QuestNodeData> activeQuestNodes = new List<QuestNodeData>();

    private Dictionary<string, QuestNodeData> linkNodeByName = new Dictionary<string, QuestNodeData>();
    private Dictionary<string, QuestStep> linkStepByName = new Dictionary<string, QuestStep>();

    [SerializeField] private List<QuestStep> steps = new List<QuestStep>();

    public static UnityAction<string> OnChange;

    public void OnIntialize(int choiceStep = 0)
    {

        int count = 0;
        foreach (QuestNodeData nodeData in questObject.questNodeData)
        {
            var tempPath = GameObject.Find(nodeData.locationOfObject);
            steps.Add(tempPath.GetComponent<QuestStep>());
            linkNodeByName.Add(nodeData.guid, nodeData);
            linkStepByName.Add(nodeData.guid, steps[count]);
            steps[count].STEPID = nodeData.guid;
            count++;
        }
        IterateQuestStep(questObject.questNodeData[choiceStep].guid);
    }

#if UNITY_EDITOR
    public void SetupSteps()
    {
        QuestObject tempQuestObject = questObject;
        //questObject = null;
        foreach (var step in tempQuestObject.questNodeData)
        {
            //steps.Add(new QuestStep());
        }
        questObject = tempQuestObject;
    }
#endif

    public void IterateQuestStep(string nodePicked)
    {
        string temp = "";
        foreach (NodeLinkData nodeLink in questObject.nodeLinks)
        {
            if (nodeLink.BaseNodeGuid == nodePicked)
            {
                activeQuestNodes.Add(linkNodeByName[nodeLink.TargetNodeGuid]);
                
            }
        }

        foreach (var step in activeQuestNodes)
        {
            temp = temp + "Choice: " + step.description + "\n";
        }

        OnChange?.Invoke(temp);
    }
}
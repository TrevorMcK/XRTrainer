using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class QuestController : MonoBehaviour
{
    public List<Quest> questObjects = new List<Quest>();

    [SerializeField] private List<TMP_Text> title;
    [SerializeField] private List<TMP_Text> description;

    public int currentQuestObject = 0;

    public static QuestController instance;

    private List<int> completedIndex = new List<int>();

    private void Start()
    {

        foreach (Quest quest in questObjects)
        {
            quest.OnIntialize();
        }

        instance = this;
    }

    public Quest AddQuest(Quest quest)
    {
        questObjects.Add(quest);

        return null;
    }

    public void SetCurrentQuest(int choice)
    {
        currentQuestObject = choice;

    }

    public void OnFinishQuest(int questCompleteIndex)
    {
        completedIndex.Add(questCompleteIndex);

        if (questObjects.Count != 0)
        {
            SetCurrentQuest(0);
        }
    }

    public void SetupSteps()
    {
        var tempQuestObject = questObjects;
        foreach (Quest quest in tempQuestObject)
        {
            quest.SetupSteps();
        }
        questObjects = tempQuestObject;
    }
}


#if UNITY_EDITOR
[CustomEditor(typeof(QuestController))]
public class CustomEditorQuest : Editor
{
    public override void OnInspectorGUI()
    {
        QuestController item = (QuestController)target;

        base.OnInspectorGUI();

        if (GUILayout.Button("Link Quest Steps"))
        {
            item.SetupSteps();
        }

    }
}
#endif
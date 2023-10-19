using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

public class QuestGraph : EditorWindow
{
    private QuestGraphView questGraphView;
    private string fileName = "New Quest";

    [MenuItem("Graph/Quest Graph")]
    public static void OpenQuestGraphWindow()
    {
        var window = GetWindow<QuestGraph>();
        window.titleContent = new GUIContent("Quest Graph");
    }

    private void OnEnable()
    {
        ConstructGraph();
        GenerateToolBar();
    }

    private void OnDisable()
    {
        rootVisualElement.Remove(questGraphView);
    }

    private void GenerateToolBar()
    {
        var toolbar = new Toolbar();

        var fileNameTextField = new TextField("File Name:");
        fileNameTextField.SetValueWithoutNotify(fileName);
        fileNameTextField.MarkDirtyRepaint();
        fileNameTextField.RegisterValueChangedCallback((evt) => 
        {
            fileName = evt.newValue;
        });

        toolbar.Add(fileNameTextField);

        toolbar.Add(new Button(() =>
        {
            RequestDataOperation(true);
        })
        {
            text = "Save Data" 
        });

        toolbar.Add(new Button(() => 
        {
            RequestDataOperation(false);
        })
        {
            text = "Load Data"
        });

        var nodeCreateButton = new Button(() => 
        {
            questGraphView.CreateNode("Quest Node");


        });
        nodeCreateButton.text = "Create Node";
        toolbar.Add(nodeCreateButton); 
        rootVisualElement.Add(toolbar);
    }

    private void RequestDataOperation(bool save)
    {
        if (string.IsNullOrEmpty(fileName))
        {
            EditorUtility.DisplayDialog("Invalid file name!","Please enter a valid file name.","OK");
        }

        var saveUtility = GraphSaveUtility.GetInstance(questGraphView);

        if (save)
        {
            saveUtility.SaveGraph(fileName);
        }
        else
        {
            saveUtility.LoadGraph(fileName);
        }
    }

    private void ConstructGraph()
    {
        questGraphView = new QuestGraphView
        {
            name = "Quest Graph"
        };

        questGraphView.StretchToParentSize();
        rootVisualElement.Add(questGraphView);
    }
}
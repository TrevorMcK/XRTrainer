using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class QuestNode : Node
{
    public string GUID;
    public bool EntryPoint;
    public string NodeName;
    public string description;
    public string locationOfObject;
}
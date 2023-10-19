using System;
using System.Collections;
using System.Collections.Generic;
using System.Xml.Serialization;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UIElements;

[Serializable]
public class QuestObject : ScriptableObject
{
    public List<NodeLinkData> nodeLinks = new List<NodeLinkData>();
    public List<QuestNodeData> questNodeData = new List<QuestNodeData>();

    public string QUESTID;
    public bool active;


    private void Awake()
    {
        QUESTID = name;
    }
}
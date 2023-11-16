using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class QuestNodeData
{
    public string guid;
    public string NodeName;
    public Vector2 position;

    public string locationOfObject;

    public GameObject step;
    public string description;
}

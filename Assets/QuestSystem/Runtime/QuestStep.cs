using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class QuestStep : MonoBehaviour
{


    public bool startHere;

    public bool active;

    public string STEPID;

    public UnityEvent onStart;
    public UnityEvent onFinish;


}

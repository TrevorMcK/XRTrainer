using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public abstract class QuestStep : MonoBehaviour
{
    public bool startHere;

    public bool active;

    public string STEPID;

    public UnityEvent onStart;
    public UnityEvent onFinish;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Y) && active)
        {
            
            OnCompletion();
        }
    }

    public void OnCompletion()
    {
        active = false;
        InstructionController.Singleton.Iterate(STEPID);

        onFinish?.Invoke();
    }
}
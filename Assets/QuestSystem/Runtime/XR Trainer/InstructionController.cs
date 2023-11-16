using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InstructionController : MonoBehaviour
{

    public Quest instructionSet = new Quest();
    public static InstructionController Singleton;
    private void Start()
    {
        Singleton = this;
        instructionSet.OnIntialize();
    }

    public void Iterate(string target)
    {
        instructionSet.IterateQuestStep(target);
    }
}

using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Netcode; //added
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

//public class InstructionController : MonoBehaviour
public class InstructionController : NetworkBehaviour  //inherit from networkbehavior to use rpcs
{

    public Quest instructionSet = new Quest();
    public static InstructionController Singleton;

    [SerializeField] string instructionTitle;

    [SerializeField] private TMP_Text instructionTitleLocation;
    [SerializeField] private TMP_Text instructionTextLocation;

    private void Start()
    {
        Quest.OnChange += DisplayCurrentStep;

        Singleton = this;
        instructionSet.OnIntialize();

        if(instructionTitleLocation != null) instructionTitleLocation.text = instructionTitle;
    }

    public void Iterate(string target)
    {
        IterateServerRpc(target); //call the rpc //did this so it didn't break any function calls
    }

    //anytime a client interacts with the Instruction controller singleton, it will execute the serverRPC, iterating the quest for everything that uses it //I think
    [ServerRpc(RequireOwnership = false)]
    private void IterateServerRpc(string target)
    {
        instructionSet.IterateQuestStep(target);
    }

    private void DisplayCurrentStep(string text)
    {
        instructionTextLocation.text = text;
    }

    
}


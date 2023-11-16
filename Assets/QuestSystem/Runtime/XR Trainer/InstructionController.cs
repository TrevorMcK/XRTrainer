using System.Collections;
using System.Collections.Generic;
using Unity.Netcode; //added
using UnityEngine;

//public class InstructionController : MonoBehaviour
public class InstructionController : NetworkBehavior  //inherit from networkbehavior to use rpcs
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
        IterateRpc(string target); //call the rpc //did this so it didn't break any function calls
    }

    //anytime a client interacts with the Instruction controller singleton, it will execute the serverRPC, iterating the quest for everything that uses it //I think
    [ServerRpc]
    private void IterateRpc(string target)
    {
        instructionSet.IterateQuestStep(target);
    }
}

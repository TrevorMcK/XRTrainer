using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

public class TraineeController : MonoBehaviour
{
    public SteamVR_Action_Boolean menuOnOff;

    public SteamVR_Input_Sources handType;

    [SerializeField] private GameObject menu;

    private void Start()
    {
        menuOnOff.AddOnStateDownListener(menuButtonUp,handType);
        menuOnOff.AddOnStateUpListener(menuButtonDown,handType);
    }

    public void menuButtonUp(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource)
    {
        menu.SetActive(false);
    }
    public void menuButtonDown(SteamVR_Action_Boolean fromAction, SteamVR_Input_Sources fromSource)
    {
        menu.SetActive(true);
    }

}

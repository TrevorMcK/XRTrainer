using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.SceneManagement;

public class ModeSelectionScript: MonoBehaviour
{
    public void OnVRButtonClick()
    {
        XRSettings.LoadDeviceByName("OpenVR");
        XRSettings.enabled = true;
        SceneManager.LoadScene(0); //launch main menu
    }

    public void OnFlatScreenButtonClick()
    {
        XRSettings.LoadDeviceByName("None");
        XRSettings.enabled = false;
        SceneManager.LoadScene(0); //launch main menu
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}

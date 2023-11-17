using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Management;
using Valve.VR;

public class SteamVRInitializer : MonoBehaviour
{
    public UnityEvent OnSteamVRInitialized;

    private void OnEnable()
    {
        StartCoroutine(InitRoutine());
        Application.quitting += () =>
        {
            XRGeneralSettings.Instance.Manager.StopSubsystems();
            XRGeneralSettings.Instance.Manager.DeinitializeLoader();
        };
    }

    private IEnumerator InitRoutine()
    {
        
        

        yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
        Debug.Log("TEST: " + XRGeneralSettings.Instance.Manager.isInitializationComplete);

        if (XRGeneralSettings.Instance.Manager.activeLoader == null)
        {
            Debug.LogError("XR initialization failed!");
        }
        else
        {
            Debug.Log("Starting XR...");
            XRGeneralSettings.Instance.Manager.StartSubsystems();
        }

        yield return null;
        yield return null;

        SteamVR.Initialize();


        yield return new WaitWhile(() => SteamVR.initializedState == SteamVR.InitializedStates.Initializing);
        yield return null;

        OnSteamVRInitialized?.Invoke();
    }
}
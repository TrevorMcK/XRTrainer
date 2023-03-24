using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
public class infomanager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (!XRSettings.isDeviceActive)
        {
            Debug.Log("No headset connected");
        }
        else if (XRSettings.isDeviceActive && XRSettings.loadedDeviceName == "Mock HMD Loader")
        {
            Debug.Log("Using Mock HMD Loader");
        }
        else
        {
            Debug.Log("We have a headset connected " + XRSettings.loadedDeviceName);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using Unity.Netcode;
using UnityEngine;

public class NetworkMenuManagerScript: MonoBehaviour
{ 

    public void OnClickHost()
    {
        if (NetworkManager.Singleton == null)
        {
            Debug.Log("No Network manager present, cannot start as host");
            return;
        }
        NetworkManager.Singleton.StartHost();
    }

    public void OnClickJoin()
    {
        if (NetworkManager.Singleton == null)
        {
            Debug.Log("No Network manager present, cannot start as client");
            return;
        }
        NetworkManager.Singleton.StartClient();

    }
}

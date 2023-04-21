using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.Netcode.Components;

public class NetworkMenuManagerScript : MonoBehaviour
{
    [SerializeField] private GameObject MainCamera; //the MainCamera
    [SerializeField] private GameObject PlayerVRTrainee;
    [SerializeField] private GameObject PlayerFPSTrainer;
    [SerializeField] private TMP_Dropdown playerChoice;

    private void Start()
    {
        MainCamera = GameObject.Find("Main Camera");//set the reference to the main camera
    }

    public void OnClickHost()
    {
        if (NetworkManager.Singleton == null) //if a network manager does not exist
        {
            Debug.Log("No Network manager present, cannot start as host");
            return;
        }
        
        NetworkManager.Singleton.NetworkConfig.PlayerPrefab = (player());
        NetworkManager.Singleton.StartHost(); //start the host
        GameObject.Find("Canvas").GetComponent<CanvasGroup>().alpha = 0; //hide the canvas with the menu on it
        MainCamera.SetActive(false); //hide the main camera, switching us to the player prefab camera

    }

    public void OnClickJoin()
    {
        if (NetworkManager.Singleton == null)
        {
            Debug.Log("No Network manager present, cannot start as client");
            return;
        }
        NetworkManager.Singleton.NetworkConfig.PlayerPrefab = (player());
        NetworkManager.Singleton.StartClient();
        GameObject.Find("Canvas").GetComponent<CanvasGroup>().alpha = 0; //hide the canvas with the menu on it
        MainCamera.SetActive(false); //hide the main camera, switching us to the player prefab camera

    }

    private GameObject player()
    {
        switch (playerChoice.value)
        {
            case 0:
                return PlayerVRTrainee;
                
            case 1:
                return PlayerFPSTrainer;
        }
        return null;

    }
}

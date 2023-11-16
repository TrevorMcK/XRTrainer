using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.Netcode.Components;
using System;
using System.Text;

public class NetworkMenuManagerScript : MonoBehaviour
{
    [SerializeField] private GameObject MainCamera; //the MainCamera
    [SerializeField] private GameObject PlayerVRTrainee;
    [SerializeField] private GameObject PlayerFPSTrainer;
    [SerializeField] private TMP_Dropdown playerChoice;

    private void Start()
    {
        MainCamera = GameObject.Find("Main Camera");//set the reference to the main
        NetworkManager.Singleton.ConnectionApprovalCallback = ApprovalCheck;
        NetworkManager.Singleton.NetworkConfig.ConnectionApproval = true;

        
        Cursor.visible = true;
    }

    public void OnClickHost()
    {
        if (NetworkManager.Singleton == null) //if a network manager does not exist
        {
            Debug.Log("No Network manager present, cannot start as host");
            return;
        }

        //NetworkManager.Singleton.NetworkConfig.PlayerPrefab = player(playerChoice.value);
        NetworkManager.Singleton.NetworkConfig.ConnectionData = BitConverter.GetBytes(0);
        NetworkManager.Singleton.StartHost();

        GameObject.Find("Canvas").GetComponent<CanvasGroup>().alpha = 0; //hide the canvas with the menu on it
        MainCamera.SetActive(false); //hide the main camera, switching us to the player prefab camera

    }

    private void ApprovalCheck(NetworkManager.ConnectionApprovalRequest request, NetworkManager.ConnectionApprovalResponse response)
    {
        // The client identifier to be authenticated
        var clientId = request.ClientNetworkId;

        // Additional connection data defined by user code
        var connectionData = request.Payload;

        int prefabChoice = BitConverter.ToInt32(connectionData);

        NetworkLog.LogInfo(string.Format("ClientID {0} has requested prefab at index '{1}'", clientId, prefabChoice));
        NetworkLog.LogInfoServer(string.Format("ClientID {0} has requested prefab at index '{1}'", clientId, prefabChoice));

        // Your approval logic determines the following values
        response.Approved = true;
        response.CreatePlayerObject = true;

        var netPrefab = NetworkManager.Singleton.NetworkConfig.Prefabs.NetworkPrefabsLists[0].PrefabList[prefabChoice];

        NetworkLog.LogInfo(string.Format("Selected prefab/hash is '{0}' - {1}", netPrefab.Prefab.name, netPrefab.SourcePrefabGlobalObjectIdHash));
        NetworkLog.LogInfoServer(string.Format("Selected prefab/hash is '{0}' - {1}", netPrefab.Prefab.name, netPrefab.SourcePrefabGlobalObjectIdHash));

        // The Prefab hash value of the NetworkPrefab, if null the default NetworkManager player Prefab is used
        response.PlayerPrefabHash = netPrefab.SourcePrefabGlobalObjectIdHash;

        // Position to spawn the player object (if null it uses default of Vector3.zero)
        response.Position = Vector3.zero;

        // Rotation to spawn the player object (if null it uses the default of Quaternion.identity)
        response.Rotation = Quaternion.identity;

        // If response.Approved is false, you can provide a message that explains the reason why via ConnectionApprovalResponse.Reason
        // On the client-side, NetworkManager.DisconnectReason will be populated with this message via DisconnectReasonMessage
        response.Reason = "Some reason for not approving the client";

        // If additional approval steps are needed, set this to true until the additional steps are complete
        // once it transitions from true to false the connection approval response will be processed.
        response.Pending = false;
    }

    public void OnClickJoin()
    {
        if (NetworkManager.Singleton == null)
        {
            Debug.Log("No Network manager present, cannot start as client");
            return;
        }
        NetworkManager.Singleton.NetworkConfig.ConnectionData = BitConverter.GetBytes(1);
        NetworkManager.Singleton.StartClient();
        GameObject.Find("Canvas").GetComponent<CanvasGroup>().alpha = 0; //hide the canvas with the menu on it
        MainCamera.SetActive(false); //hide the main camera, switching us to the player prefab camera

    }

    private GameObject player(int choice)
    {
        switch (choice)
        {
            case 0:
                return PlayerVRTrainee;

            case 1:
                return PlayerFPSTrainer;
        }
        return null;

    }
}


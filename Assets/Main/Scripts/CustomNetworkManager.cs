using Unity.Netcode;
using Unity.Networking.Transport;
using UnityEngine;

public class CustomNetworkManager : NetworkManager
{
    //public GameObject[] playerPrefabs;

    //public override void OnServerAddPlayer(NetworkConnection conn, AddPlayerMessage extraMessage)
    //{
    //    // Choose a random player prefab
    //    int playerIndex = Random.Range(0, playerPrefabs.Length);
    //    GameObject playerPrefab = playerPrefabs[playerIndex];

    //    // Get a random spawn point
    //    Transform spawnPoint = GetStartPosition();

    //    // Spawn the player prefab at the spawn point
    //    GameObject player = Instantiate(playerPrefab, spawnPoint.position, spawnPoint.rotation);
    //    NetworkServer.AddPlayerForConnection(conn, player);
    //}
}
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class FlatScreenTrainerNetworkScript : NetworkBehaviour
{
    private void Update()
    {
        if (!IsOwner) return;

        Vector3 moveDir = new Vector3(0, 0, 0);
        float rotationSpeed = 100f;
        float verticalSpeed = 1f;

        // Move player forward and backward
        if (Input.GetKey(KeyCode.W)) moveDir.z = +1f;
        if (Input.GetKey(KeyCode.S)) moveDir.z = -1f;

        // Move player left and right
        if (Input.GetKey(KeyCode.A)) moveDir.x = -1f;
        if (Input.GetKey(KeyCode.D)) moveDir.x = +1f;

        // Rotate player left and right
        if (Input.GetKey(KeyCode.LeftArrow)) transform.Rotate(Vector3.up, -rotationSpeed * Time.deltaTime);
        if (Input.GetKey(KeyCode.RightArrow)) transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);

        // Rotate player up and down
        if (Input.GetKey(KeyCode.UpArrow)) transform.Rotate(Vector3.right, -rotationSpeed * Time.deltaTime);
        if (Input.GetKey(KeyCode.DownArrow)) transform.Rotate(Vector3.right, rotationSpeed * Time.deltaTime);

        // Move player vertically up and down
        if (Input.GetKey(KeyCode.Space)) moveDir.y = +1f;
        if (Input.GetKey(KeyCode.LeftControl)) moveDir.y = -1f;

        float moveSpeed = 3f;
        transform.position += moveDir * moveSpeed * Time.deltaTime;
    }

}

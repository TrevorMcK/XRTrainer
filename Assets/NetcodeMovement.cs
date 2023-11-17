using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class NetcodeMovement : NetworkBehaviour
{
    public Transform transformLocal;

    // Start is called before the first frame update
    void Start()
    {
        transformLocal = GetComponent<Transform>();

    }

    private void Update()
    {
        if (IsOwner)
        {
            transformLocal.position = FirstPlayerContoller.instance.transform.position;
            transformLocal.rotation = FirstPlayerContoller.instance.transform.rotation;

        }
    }
}

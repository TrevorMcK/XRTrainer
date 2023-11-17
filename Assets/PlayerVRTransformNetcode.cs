using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class PlayerVRTransformNetcode : NetworkBehaviour
{

    [SerializeField] Transform head;
    [SerializeField] Transform rHand;
    [SerializeField] Transform lHand;
    [SerializeField] Transform root;

    private void Update()
    {
        if (IsOwner)
        {
            head.position = PlayerVRTransform.instance.Head.position;
            head.rotation = PlayerVRTransform.instance.Head.rotation;

            rHand.position = PlayerVRTransform.instance.Head.position;
            rHand.rotation = PlayerVRTransform.instance.Head.rotation;

            lHand.position = PlayerVRTransform.instance.lHand.position;
            lHand.rotation = PlayerVRTransform.instance.rHand.rotation;

            root.position = PlayerVRTransform.instance.root.position;
            root.rotation = PlayerVRTransform.instance.root.rotation;
        }
    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerVRTransform : MonoBehaviour
{
    public static PlayerVRTransform instance;

    [SerializeField] public Transform Head;
    [SerializeField] public Transform rHand;
    [SerializeField] public Transform lHand;
    [SerializeField] public Transform root;

    private void Awake()
    {
        instance = this;
    }
}

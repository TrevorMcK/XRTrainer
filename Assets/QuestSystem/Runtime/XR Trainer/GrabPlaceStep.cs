using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;

public class GrabPlaceStep : QuestStep
{
    [SerializeField] private Transform targetLocation;
    private Throwable throwable;

    // Start is called before the first frame update
    void Start()
    {
        throwable = GetComponent<Throwable>();
        throwable.onDetachFromHand.AddListener(LetGo);
    }

    void LetGo()
    {
        Debug.Log(Vector3.Distance(targetLocation.position, this.transform.position));
        if (2 > Vector3.Distance(targetLocation.position, this.transform.position))
        {
            this.transform.position = targetLocation.position;
            OnCompletion();
        }
    }
}
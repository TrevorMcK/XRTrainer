using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using Valve.VR.InteractionSystem;

public class GrabPlaceStep : QuestStep
{
    [SerializeField] private Transform targetLocation;
    private Throwable throwable;

    [SerializeField] private GameObject highlighter;
    [SerializeField] private GameObject highlightHolder;

    // Start is called before the first frame update
    void Start()
    {
        throwable = GetComponent<Throwable>();
        throwable.onDetachFromHand.AddListener(LetGo);

        highlightHolder = Instantiate(highlighter);
        highlightHolder.SetActive(false);
    }

    void LetGo()
    {
        Debug.Log(Vector3.Distance(targetLocation.position, this.transform.position));
        if (2 > Vector3.Distance(targetLocation.position, this.transform.position) && active)
        {
            this.transform.position = targetLocation.position;
            OnCompletion();
        }
    }

    private void Update()
    {
        if (active)
        {
            if(!highlightHolder.activeSelf) highlightHolder.SetActive(true);

            highlightHolder.transform.position = this.transform.position;
            
        }
    }
}
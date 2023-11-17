using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PluseIndicators : MonoBehaviour
{
    private Transform transformLocal;

    // Start is called before the first frame update
    void Start()
    {
        transformLocal = GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        transform.localScale = transformLocal.localScale;
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR.InteractionSystem;

public class teleportOptions : MonoBehaviour
{
    // Start is called before the first frame update
    public void DisableTeleport()
    {
            Teleport.instance.CancelTeleportHint();
    }
}

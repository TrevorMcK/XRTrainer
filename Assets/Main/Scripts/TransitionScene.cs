using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// Transition Scene Function.
/// </summary>
[System.Serializable]
public class TransitionScene : MonoBehaviour
{
    /// <summary>
    /// Changes between base on Scene index from scene list.
    /// </summary>
    /// <param name="index">Index of the next Scene</param>
    public void ChangeScene(int index)
    {
        SceneManager.LoadScene(index);
    }
}

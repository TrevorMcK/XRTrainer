using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TransitionScene : MonoBehaviour
{
    public List<Scene> scene = new List<Scene>();

    /// <summary>
    /// Changes between base on Scene index from scene list
    /// </summary>
    /// <param name="index">Index of the Scene</param>
    public void ChangeScene(int index)
    {
        SceneManager.LoadScene(scene[index].name);
    }
}

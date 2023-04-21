using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TrainingController : MonoBehaviour
{
    [SerializeField] private TextAsset taskJson;
    [SerializeField] private Text steps;
    [SerializeField] private Text title;
    [SerializeField] private Button next;
    [SerializeField] private Button back;


    private Tasklist myTasks = new Tasklist();
    private int indexTasklist = 0;
    public static TrainingController Singleton;

    // Start is called before the first frame update
    void Start()
    {
        myTasks = JsonConvert.DeserializeObject<Tasklist>(taskJson.ToString());
        setupTasks();
        Singleton = this;

    }

    private void setupTasks()
    {
        title.text = myTasks.task[indexTasklist].name;
        steps.text = myTasks.task[indexTasklist].name;
        greyOutButton(next, back);
    }
    public void gothroughTasks(bool nextBack = false)
    {
        indexTasklist = indexTasklist + (nextBack ? +1 : -1);
        title.text = myTasks.task[indexTasklist].name;
        steps.text = myTasks.task[indexTasklist].name;

        greyOutButton(next, back);
    }

    private void greyOutButton(Button btnNext, Button btnBack)
    {
        if (indexTasklist <= 0)
        {
            btnBack.enabled = false;
        }
        else
        {
            btnBack.enabled = true;
        }

        if (indexTasklist >= myTasks.task.Length - 1)
        {
            btnNext.enabled = false;
        }
        else
        {
            btnNext.enabled = true;
        }

    }
}

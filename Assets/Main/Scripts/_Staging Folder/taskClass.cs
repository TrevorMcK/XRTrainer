[System.Serializable]
public class Task
{
    public string name { get; set; }
    public string description { get; set; }
    public string taskType { get; set; }
    public bool completed { get; set; }
}
public class Tasklist
{
    public Task[] task { get; set; }
}
using UnityEngine;
using System.Collections;

public class TimeOut : MonoBehaviour
{
    public GameObject boxmanager;
    public GameObject timepoint;

    private int count = 7;
    private float time;
    private bool Begin=false;
	// Use this for initialization
	void Start () 
    {
        count = 7;
        time = Time.time;
        Begin = true;
	}
	public void initialize()
    {
        Start();
        count -= count > 3 ? Random.Range(0, 2) : count;
    }
	// Update is called once per frame
	void Update ()
    {
        if (time <= Time.time - 1f && !boxmanager.GetComponent<BoxManager>().GameOver&&Begin)
        {
            count--;
            time = Time.time;
        }
        if (count == 0 && !boxmanager.GetComponent<BoxManager>().GameOver)
        {
            boxmanager.GetComponent<BoxManager>().SetGameover();
            Begin = false;
        }
	}
    void OnGUI()
    {
        GUI.Label(new Rect(Screen.width/2,40,50,100),count.ToString(),this.GetComponent<UserInterface>().font);
    }
}

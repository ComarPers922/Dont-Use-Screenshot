using UnityEngine;
using System.Collections;

public class The14TimeOut : MonoBehaviour 
{
    public The14BoxManager boxmanager;
    public GameObject timepoint;

    private int count = 14;
    private float time;
    // Use this for initialization
    void Start()
    {
        time = Time.time;
    }
    public void initialize()
    {
        Start();
    }
    // Update is called once per frame
    void Update()
    {
        if (time <= Time.time - 1f && !boxmanager.GetComponent<The14BoxManager>().GameOver)
        {
            count--;
            time = Time.time;
        }
        if (count == 0 && !boxmanager.GetComponent<The14BoxManager>().GameOver)
        {
            boxmanager.GetComponent<The14BoxManager>().SetGameover();
            boxmanager.gameObject.GetComponent<AudioSource>().clip = boxmanager.sounds[1];
            boxmanager.gameObject.GetComponent<AudioSource>().Play();
        }
    }
    void OnGUI()
    {
        GUI.Label(new Rect(Screen.width / 2, 40, 50, 100), count.ToString(), this.GetComponent<UserInterface>().font);
    }
}

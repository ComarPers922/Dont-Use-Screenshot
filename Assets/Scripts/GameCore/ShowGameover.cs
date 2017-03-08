using UnityEngine;
using System.Collections;

public class ShowGameover : MonoBehaviour 
{
    private float time;
	// Use this for initialization
	void Start ()
    {
        time = Time.time;
        this.GetComponent<SpriteRenderer>().color = new Color(1,1,1,0);
	}
	
	// Update is called once per frame
	void Update () 
    {
        if (time <= Time.time - 0.07f && this.GetComponent<SpriteRenderer>().color.a<1)
        {
            this.GetComponent<SpriteRenderer>().color = new Color(1, 1, 1,this.GetComponent<SpriteRenderer>().color.a + 0.1f);
            time = Time.time;
        }
	}
}

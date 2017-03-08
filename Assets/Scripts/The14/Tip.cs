using UnityEngine;
using System.Collections;

public class Tip : MonoBehaviour 
{
    void OnMouseDown()
    {
        Time.timeScale = 1;
        GameObject.Destroy(this.gameObject);
    }
	// Use this for initialization
	void Start () 
    {
        Time.timeScale = 0;
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}
}

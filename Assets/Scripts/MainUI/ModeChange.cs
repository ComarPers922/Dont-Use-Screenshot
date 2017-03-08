using UnityEngine;
using System.Collections;

public class ModeChange : MonoBehaviour 
{
    private int count = 0;
    private bool IsMouseDown = false;
    private float previousX = 0;

    public int GetCount
    {
        get
        {
            return count;
        }
    }
    void OnMouseDown()
    {
        IsMouseDown = true;
        previousX = Input.mousePosition.x;
    }
    void OnMouseUp()
    {
        IsMouseDown = false;
    }
	// Use this for initialization
	void Start ()
    {
	    
	}
	
	// Update is called once per frame
	void Update () 
    {
	    if(IsMouseDown)
        {
            if(previousX-Input.mousePosition.x<0)
            {
                GameObject.FindGameObjectWithTag("ButtonManager").GetComponent<Sliding>().UpdatePosition();
                if (count > 0)
                {
                    count--;
                }
                IsMouseDown = false;
            }
            else if (previousX - Input.mousePosition.x > 0)
            {
                GameObject.FindGameObjectWithTag("ButtonManager").GetComponent<Sliding>().UpdatePosition();
                if (count < publicRescource.ModeLibrary) 
                {
                    count++;
                }
                IsMouseDown = false;
            }
        }
	}
}

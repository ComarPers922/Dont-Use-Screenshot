using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Sliding : MonoBehaviour
{
    private int count = 0;
    private GameObject modeManager;
    private Vector3 temp;
    public void UpdatePosition()
    {
        temp = this.GetComponent<RectTransform>().localPosition;
    }
	// Use this for initialization
	void Start () 
    {
        modeManager = GameObject.FindGameObjectWithTag(publicRescource.Slider); 
        this.count = this.modeManager.GetComponent<ModeChange>().GetCount;
        UpdatePosition();
	}
	
	// Update is called once per frame
	void Update ()
    {
        this.GetComponent<RectTransform>().localPosition = new Vector3(Mathf.Lerp(this.GetComponent<RectTransform>().localPosition.x, temp.x, 0.5f), temp.y, temp.z);
        if (modeManager.GetComponent<ModeChange>().GetCount - count > 0)
        {
            //this.GetComponent<RectTransform>().localPosition = new Vector3(temp.x-695,temp.y,temp.z);
            //this.GetComponent<RectTransform>().localPosition = new Vector3(Mathf.Lerp(temp.x, temp.x - 695, 0.9f), temp.y, temp.z);//Vector3.Lerp(temp, new Vector3(temp.x - 695, temp.y, temp.z),0.7f);
            temp = new Vector3(temp.x - 695, temp.y, temp.z);
            count = modeManager.GetComponent<ModeChange>().GetCount;
        }
        else if(modeManager.GetComponent<ModeChange>().GetCount - count < 0)
        {
            temp = new Vector3(temp.x + 695, temp.y, temp.z);
            //this.GetComponent<RectTransform>().localPosition = new Vector3(Mathf.Lerp(temp.x, temp.x + 695, 0.9f),temp.y,temp.z);//Vector3.Lerp(temp, new Vector3(temp.x + 695, temp.y, temp.z), 0.7f);
            count = modeManager.GetComponent<ModeChange>().GetCount;
        }
	}
}

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShowRecord : MonoBehaviour
{
    public Sprite[] numbers = new Sprite[10];
    public GameObject[] imageboxes=new GameObject [7];//Must Left To Right!
    public float Duration;
    public float offsetX=1.2f;
    public RecordPosition recordposition = RecordPosition.Top;
    //public Level level=Level.Classic;

    private int[] temp = null;
    void Start()
    {
        //PlayerPrefs.DeleteAll();
        //PlayerPrefs.SetInt("Record",123456);
        //PlayerPrefs.SetInt("DynamicRecord", 123456);
        //PlayerPrefs.SetInt("The14Record", 123456);
        //PlayerPrefs.SetInt("TwinkleRecord", 108);
        if (temp == null) { return; }
        int i = 0;
        int j = 0;
        foreach (var item in imageboxes)
        {
            item.GetComponent<Image>().enabled = true;
        }
        //if (level==Level.Classic)
        //{
        //   temp = NumberSpliter(PlayerPrefs.GetInt("Record", 0));
        //}
        //else if (level == Level.Dynamic)
        //{
        //    temp = NumberSpliter(PlayerPrefs.GetInt("DynamicRecord", 0));
        //}
        for (i = temp.Length-1; i >=0; i--)
        {
            imageboxes[temp.Length-1-i].GetComponent<Image>().sprite = numbers[temp[i]];
            j++;
        }
        for (; j < imageboxes.Length;j++ )
        {
            imageboxes[j].GetComponent<Image>().enabled = false;
        }
    }
    private int [] NumberSpliter(int number)
    {
        int temp = number;
        System.Collections.Generic.List<int> list = new System.Collections.Generic.List<int>();
        if (number==0)
        {
            list.Add(0);
            return list.ToArray() ;
        }
        while (temp > 0)
        {
            list.Add(temp%10);
            temp /= 10;
        }
        return list.ToArray();
    }
    void Update()
    {
        switch (recordposition)
        {
            case RecordPosition.Top:
                switch (GameObject.FindGameObjectWithTag(publicRescource.Slider).GetComponent<ModeChange>().GetCount)
                {
                    case 0: temp = NumberSpliter(PlayerPrefs.GetInt("Record", 0)); break;
                    case 1: temp = NumberSpliter(PlayerPrefs.GetInt("The14Record", 0)); break;
                }
                break;
            case RecordPosition.Bottom:
                switch (GameObject.FindGameObjectWithTag(publicRescource.Slider).GetComponent<ModeChange>().GetCount)
                {
                    case 0: temp = NumberSpliter(PlayerPrefs.GetInt("DynamicRecord", 0)); break;
                    case 1: temp = NumberSpliter(PlayerPrefs.GetInt("TwinkleRecord", 0)); break;
                }
                break;
        }
        Start();
    }
}

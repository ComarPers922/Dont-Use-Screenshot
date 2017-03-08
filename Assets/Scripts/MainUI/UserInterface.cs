using UnityEngine;
using UnityEngine.UI;

public class UserInterface:MonoBehaviour
{
    private int score = 0;
    public GUIStyle font;
    void Update()
    {
        
    }
    public int Score
    {
        get
        {
            return score;
        }
    }
    public void GetScore()
    {
        score++;
    }
    void OnGUI()
    {
        GUI.Label(new Rect(0,0,100,50),"Score:"+score.ToString(),font);
    }
}

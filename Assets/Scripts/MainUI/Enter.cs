using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Enter : MonoBehaviour 
{
    private Level level = Level.Classic;
    public void Help()
    {
				SceneManager.LoadScene(5);
    }
    public void EnterToThe14()
    {
        level = Level.The14;
        publicRescource.LoadedLevel = level;
        OnClick();
    }
    public void EnterToTwinkle()
    {
        level = Level.Twinkle;
        publicRescource.LoadedLevel = level;
        OnClick();
    }
    public void EnterToClassic()
    {
        level = Level.Classic;
        publicRescource.LoadedLevel = level;
        OnClick();
    }
    public void EnterToDynamic()
    {
        level = Level.Dynamic;
        publicRescource.LoadedLevel = level;
        OnClick();
    }
    private void OnClick()
    {
        switch(level)
        {
				case Level.Classic: SceneManager.LoadScene(1); break;
				case Level.Dynamic: SceneManager.LoadScene(2); break;
				case Level.The14: SceneManager.LoadScene(3); break;
				case Level.Twinkle: SceneManager.LoadScene(4); break;
        }
				sharedProperties.currentLevel = (int)level + 1;
    }
	// Use this for initialization
	void Start () {
	 
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}

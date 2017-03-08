using UnityEngine;
using System.Collections;

public class BoxManager : MonoBehaviour 
{
    public GameObject box;
    public GameObject ScoreBoard;
    public GameObject GameOverTitle;
    public AudioClip[] sounds = new AudioClip[3];//Click Gameover Bomb
    //public GameObject timeCounter;

    private int previousNumber = -1; 
    private int Difficulty = 1;
    private bool gameover = false;
    private int Done;
    private float hidetime = 4.7f;

    public float HideTime
    {
        get
        {
            return hidetime;
        }
    }
    #region Gameover
    public bool GameOver
    {
        get
        {
            return gameover;
        }
    }
    #endregion

    #region initialize
    private void Generate()
    {
        previousNumber = -1;
        Done = 0;
        for (int i = 0; i < Difficulty; i++)
        {
            if (i < 10)
            {
                box.GetComponent<Box>().SetType((TypeDef)i);

            }
            else
            {
                box.GetComponent<Box>().SetType((TypeDef)Random.Range((int)TypeDef.Bomb, (int)TypeDef.Empty + 1));
            }
            GameObject.Instantiate(box, new Vector3(Random.Range(-2.7f, 1.35f), Random.Range(-4.5f, 3.5f), 0), new Quaternion());
        }
    }
	// Use this for initialization
	void Start ()
    {
        Generate();
	}
    #endregion
    // Update is called once per frame
	void Update () 
    {
	    
	}    
    public void SetGameover()
    {
        this.gameover = true;
        GameOverTitle.gameObject.SetActive(true);
#if UNITY_IOS
        switch(publicRescource.LoadedLevel)
        { 
            case Level.Classic:PlayerPrefs.SetInt("Record", this.ScoreBoard.GetComponent<UserInterface>().Score>PlayerPrefs.GetInt("Record", 0)?this.ScoreBoard.GetComponent<UserInterface>().Score:PlayerPrefs.GetInt("Record", 0));
			Social.ReportScore(PlayerPrefs.GetInt("Record"),"DUS01",success=>{});
			break;

            case Level.Dynamic: PlayerPrefs.SetInt("DynamicRecord", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("DynamicRecord", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("DynamicRecord", 0)); 
			 Social.ReportScore(PlayerPrefs.GetInt("DynamicRecord"),"DUS02",success=>{});
			break;

            case Level.Twinkle: PlayerPrefs.SetInt("TwinkleRecord", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("TwinkleRecord", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("TwinkleRecord", 0)); 
			 Social.ReportScore(PlayerPrefs.GetInt("TwinkleRecord"),"DUS04",success=>{});
            break;
        }
#else
        switch (publicRescource.LoadedLevel)
        {
            case Level.Classic:
                PlayerPrefs.SetInt("Record", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("Record", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("Record", 0));
                break;

            case Level.Dynamic:
                PlayerPrefs.SetInt("DynamicRecord", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("DynamicRecord", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("DynamicRecord", 0));
                break;

            case Level.Twinkle:
                PlayerPrefs.SetInt("TwinkleRecord", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("TwinkleRecord", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("TwinkleRecord", 0));
                break;
        }
#endif
    }
    public void Check(TypeDef type)
    {
        if(type==TypeDef.Empty)
        {
            return;
        }
        if ((int)type == ++previousNumber)
        {
            if(++Done==(Difficulty>=10?10:Difficulty))
            {
                previousNumber = -1;
                foreach (var item in GameObject.FindGameObjectsWithTag(publicRescource.boxTag))
                {
                    GameObject.Destroy(item);
                }
                this.Difficulty = Difficulty >= 17 ? publicRescource.maxlevel : Difficulty+Random.Range(0,3);
                if (ScoreBoard.GetComponent<UserInterface>().Score >= 63)
                {
                    hidetime = hidetime >= 0.5f ? hidetime - Random.Range(0.2f, 0.7f) : 0.5f;
                }
                else
                {
                    hidetime += 0.2f;
                }
                
                Generate();
                this.GetComponent<TimeOut>().enabled = false;
            }
            this.ScoreBoard.GetComponent<UserInterface>().GetScore();
            this.GetComponent<AudioSource>().clip = sounds[0];
        }
        else
        {
            SetGameover();
            this.GetComponent<AudioSource>().clip = type == TypeDef.Bomb ? this.GetComponent<AudioSource>().clip = sounds[2] : this.GetComponent<AudioSource>().clip = sounds[1];
        }
        this.GetComponent<AudioSource>().Play();
    }
}

using UnityEngine;
using System.Collections;

public class The14BoxManager : MonoBehaviour 
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
                box.GetComponent<The14Box>().SetType((TypeDef)i);
            }
            else
            {
                box.GetComponent<The14Box>().SetType((TypeDef)Random.Range((int)TypeDef.Bomb, (int)TypeDef.Empty + 1));
            }
            GameObject.Instantiate(box, new Vector3(Random.Range(-1.0f, 0.7f), Random.Range(-3.7f, 2.8f), -0.1f), new Quaternion());
        }
    }
    // Use this for initialization
    void Start()
    {
        Generate();
    }
    #endregion
    // Update is called once per frame
    void Update()
    {

    }
    public void SetGameover()
    {
        this.gameover = true;
        GameOverTitle.gameObject.SetActive(true);
        PlayerPrefs.SetInt("The14Record", this.ScoreBoard.GetComponent<UserInterface>().Score > PlayerPrefs.GetInt("The14Record", 0) ? this.ScoreBoard.GetComponent<UserInterface>().Score : PlayerPrefs.GetInt("The14Record", 0));
#if UNITY_IOS
        Social.ReportScore(PlayerPrefs.GetInt("The14Record"),"DUS03",success=>{});
#endif
    }
    public void Check(TypeDef type)
    {
        if (type == TypeDef.Empty)
        {
            return;
        }
        if ((int)type == ++previousNumber)
        {
            if (++Done == (Difficulty >= 10 ? 10 : Difficulty))
            {
                previousNumber = -1;
                foreach (var item in GameObject.FindGameObjectsWithTag(publicRescource.boxTag))
                {
                    GameObject.Destroy(item);
                }
                this.Difficulty = Difficulty >= 21 ? publicRescource.maxlevel : Difficulty + Random.Range(0, 3);

                Generate();
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

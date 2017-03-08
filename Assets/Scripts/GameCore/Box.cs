using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour
{
    public Sprite[] Sprites=new Sprite[12];
    public TypeDef type = TypeDef.None;

    private GameObject boxmanager;

    private bool hide = false;
    private bool hided = false;
    private float Blink = 0;
    private bool Blinking = false;

    private float time = 0f;
    private float velocitychange = 0f;

    void OnCollisionEnter2D(Collision2D collider)
    {
        if(collider.gameObject.tag==publicRescource.Border)
        {
            //this.rigidbody2D.velocity *= -1;
            this.myvelocity *= -1;
            this.transform.Translate(myvelocity*Time.deltaTime*2);
        }
    }
    public void SetType(TypeDef type)
    {
        this.type = type;
    }
	// Use this for initialization
	void Start ()
    {
        boxmanager = GameObject.FindGameObjectWithTag(publicRescource.MainCamera);
        time = Time.time;
        velocitychange = Time.time;
        boxmanager.GetComponent<TimeOut>().enabled = false;
        Blink = Time.time;
	}
	void OnMouseDown()
    {
        if (hide&&!boxmanager.GetComponent<BoxManager>().GameOver)
        {
            this.hide = false;
            boxmanager.GetComponent<BoxManager>().Check(type);
        }       
    }
    private Vector3 myvelocity;
	// Update is called once per frame
	void Update () 
    {
        if(Blink<=Time.time-0.5f&&publicRescource.LoadedLevel==Level.Twinkle&&!boxmanager.GetComponent<BoxManager>().GameOver&&hide)
        {
            Debug.Log("Blink");
            Blinking = Random.Range(0, 2) == 1 ? true : false;
            Blink = Time.time;
        }
        if (!boxmanager.GetComponent<BoxManager>().GameOver)
        {
            this.transform.Translate(myvelocity * Time.deltaTime);
            if (publicRescource.LoadedLevel == Level.Dynamic && velocitychange < Time.time - 1.5f)
            {
                float speed = Random.Range(2.7f-1f, 4.7f-1.7f);
                speed *= Random.Range(-1, 2);
                //this.rigidbody2D.velocity = new Vector2(speed * Random.Range(1f, 1.5f), speed * Random.Range(1f, 1.5f));
                myvelocity = new Vector3(speed * Random.Range(0f, 1.5f), speed * Random.Range(0f, 1.5f), 0);
                velocitychange = Time.time;
            }
            else
            {
                this.GetComponent<Rigidbody2D>().velocity *= 0;
            }
        }
        if(time+boxmanager.GetComponent<BoxManager>().HideTime<Time.time&&!hided)
        {
            this.hide = true;
            this.hided = true;
            boxmanager.gameObject.GetComponent<TimeOut>().enabled = true;
            boxmanager.gameObject.GetComponent<TimeOut>().initialize();
        }
        if (hide)
        {
            this.GetComponent<SpriteRenderer>().sprite = Sprites[11];
        }
        else
        {
            this.GetComponent<SpriteRenderer>().sprite = Sprites[(int)type];
        }
        if(publicRescource.LoadedLevel==Level.Twinkle&&Blinking)
        {
            this.GetComponent<SpriteRenderer>().sprite = Sprites[(int)type];
        }
	}
}

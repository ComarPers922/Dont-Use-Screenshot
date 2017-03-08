using UnityEngine;
using System.Collections;

public class The14Box : MonoBehaviour 
{
    public Sprite[] Sprites = new Sprite[12];
    public GameObject boxmanager;

    public TypeDef type;
    private float velocitychange = 0f;
    private Vector3 myvelocity=new Vector3 (0,0,0);
    void OnCollisionEnter2D(Collision2D collider)
    {
        if (collider.gameObject.tag == publicRescource.Border)
        {
            //this.rigidbody2D.velocity *= -1;
            this.myvelocity *= -1;
            this.transform.Translate(myvelocity * Time.deltaTime * 2);
        }
    }
	// Use this for initialization
    public void SetType(TypeDef type)
    {
        this.type = type;
        this.GetComponent<SpriteRenderer>().sprite=Sprites[(int)type];
    }

    void OnMouseDown()
    {
        if (!boxmanager.GetComponent<The14BoxManager>().GameOver)
        {
            boxmanager.GetComponent<The14BoxManager>().Check(this.type);
            GameObject.Destroy(this.gameObject);
        }
    }
	void Start ()
    {
        boxmanager = GameObject.FindGameObjectWithTag(publicRescource.MainCamera);
        velocitychange = Time.deltaTime;
	}
	
	// Update is called once per frame
	void Update () 
    {
        if (!boxmanager.GetComponent<The14BoxManager>().GameOver)
        {
            this.transform.Translate(myvelocity * Time.deltaTime);
            if (velocitychange < Time.time - 2.0f)
            {
                float speed = Random.Range(2.7f - 2f, 4.7f - 2.7f);
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
	}
}

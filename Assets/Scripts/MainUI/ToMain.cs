using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ToMain : MonoBehaviour
{
    void OnMouseUp()
    {
				SceneManager.LoadScene(0);
    }
}

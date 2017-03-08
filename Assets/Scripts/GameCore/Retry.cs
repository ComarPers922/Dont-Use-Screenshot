using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Retry : MonoBehaviour
{
    void OnMouseDown()
    {
				SceneManager.LoadScene ((int)sharedProperties.currentLevel);
    }
}

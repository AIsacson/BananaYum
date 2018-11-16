using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuController : MonoBehaviour {

    public Button restart;
    public Button home;
    public Text gameOverText;

    // Use this for initialization
    void Start()
    {
        gameOverText.text = "";
        restart.gameObject.SetActive(false);
        restart.onClick.AddListener(Restart);
        home.gameObject.SetActive(false);
    }

    public void GameOver(int highscore)
    {
        restart.gameObject.SetActive(true);
        home.gameObject.SetActive(true);
        gameOverText.text = "Best: " + highscore;

    }

    void Restart()
    {
        SceneManager.LoadScene("Game scene");
    }

    public void BackHome(){
        SceneManager.LoadScene("StartScene");
    } 
}

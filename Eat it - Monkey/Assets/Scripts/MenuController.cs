using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuController : MonoBehaviour {

    public Button restart;
    public Text gameOverText;
    public Canvas panel;

    void Start()
    {
        gameOverText.text = "";
        panel.gameObject.SetActive(false);
        restart.onClick.AddListener(Restart);
    }

    public void GameOver(int highscore)
    {
        panel.gameObject.SetActive(true);
        gameOverText.text = "HIGH SCORE: " + highscore;

    }

    void Restart()
    {
        SceneManager.LoadScene("Game scene");
    }

    public void BackHome(){
        SceneManager.LoadScene("StartScene");
    } 
}

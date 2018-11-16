using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//Background music made by Andrea Baroni (andreabaroni.com)

public class GameController : MonoBehaviour {

    public Text scoreBoard;
    public float spawnTime;
    public GameObject banana;
    public Transform[] bananaSpawnPoints;

    private int score = 0;
    private float count = 0f;
    private float countSpeed = 0f;
    private float countTo = 1.0f;
    private float speedUp = 10.0f;
    private MenuController menuController;
    private IEnumerator coroutine;
    private bool gameOver = false;

    private void Awake()
    {
        //Invoke("BananaSpawn", 1.0f);
        GameObject menuControllerObject = GameObject.FindWithTag("MenuController");
        if (menuControllerObject != null)
        {
            menuController = menuControllerObject.GetComponent<MenuController>();
        }
        if (menuController == null)
        {
            Debug.Log("Cannot find GameController script");
        }
    }

    private void Update()
    {
        if(!gameOver){
            Counter();
        }
    }

    void Counter() {
        count += Time.deltaTime;
        countSpeed += Time.deltaTime;
        if (count >= countTo)
        {
            BananaSpawn();
            count = 0f;
            if(countSpeed >= speedUp) {
                if(countTo > 0){
                    countTo = countTo - 0.1f;
                }
                countSpeed = 0f;
            }
        }
    }


    void BananaSpawn()
    {
        int spawnPointIndex = Random.Range(0, bananaSpawnPoints.Length);
        if (GameObject.FindGameObjectsWithTag("Spawn").Length < 20)
        {
            Instantiate(banana, bananaSpawnPoints[spawnPointIndex].position, bananaSpawnPoints[spawnPointIndex].rotation);
        }
    }

    public void AddScore(int newScore)
    {
        score = newScore;
        UpdateScore();
    }

    public void GameOver()
    {
        gameOver = true;
        if(score > PlayerPrefs.GetInt("Highscore", 0)){
            PlayerPrefs.SetInt("Highscore", score);
        }
        menuController.GameOver(PlayerPrefs.GetInt("Highscore", 0));
    }

    void UpdateScore()
    {
        scoreBoard.text = score.ToString();
    }
}

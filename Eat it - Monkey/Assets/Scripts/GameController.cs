
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

// Background music made by Andrea Baroni (andreabaroni.com)

public class GameController : MonoBehaviour {

    public float spawnTime;
    public GameObject banana;
    public GameObject stone;
    public Transform[] bananaSpawnPoints;
    public Transform[] obstacleSpawnPoints;
    public event System.Action<int> OnAddedScore;

    private int score;
    private float count;
    private float countSpeed;
    private float countTo = 1.0f;
    private float speedUp = 10.0f;
    private float time;
    private float minTime = 1.0f;
    private float maxTime = 5.0f;
    private MenuController menuController;
    private IEnumerator coroutine;
    private bool gameOver;

    private void Awake()
    {
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

    private void Start()
    {
        time = 0f;
        SetRandomTime();
    }

    private void Update()
    {
        if(!gameOver){
            Counter();
        }
    }

    private void FixedUpdate()
    {
        if(!gameOver) {
            time += Time.deltaTime;
            if (time >= spawnTime)
            {
                StoneSpawn();
                SetRandomTime();
                time = 0f;
            }
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

    // Sets the random time between minTime and maxTime
    void SetRandomTime() {
        spawnTime = Random.Range(minTime, maxTime);
    }


    void BananaSpawn()
    {
        int spawnPointIndex = Random.Range(0, bananaSpawnPoints.Length);
        if (GameObject.FindGameObjectsWithTag("Spawn").Length < 15)
        {
            Instantiate(banana, bananaSpawnPoints[spawnPointIndex].position, bananaSpawnPoints[spawnPointIndex].rotation);
        }
    }

    void StoneSpawn() {
        int spawnPointIndex = Random.Range(0, obstacleSpawnPoints.Length);
        if(GameObject.FindGameObjectsWithTag("Stone").Length < 4) {
            Instantiate(stone, obstacleSpawnPoints[spawnPointIndex].position, obstacleSpawnPoints[spawnPointIndex].rotation);
        }
    }

    public void AddScore()
    {
        score++;
        OnAddedScore(score);
    }

    public void GameOver()
    {
        gameOver = true;
        if(score > PlayerPrefs.GetInt("Highscore", 0)){
            PlayerPrefs.SetInt("Highscore", score);
        }
        menuController.GameOver(PlayerPrefs.GetInt("Highscore", 0));
    }
}

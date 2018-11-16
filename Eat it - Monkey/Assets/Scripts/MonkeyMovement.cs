using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonkeyMovement : MonoBehaviour {

    public Vector2 start;
    public int score;
    public Transform monkidefault;
    public bool running;
    public GroundDrop groundDrop;
    public float positionMonkeyHeight = -3.8f;


    private GameController gameController;
    private Animator anim;
    private AudioSource eatSound;

    void Start() {
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();
        }
        if (gameController == null)
        {
            Debug.Log("Cannot find GameController script");
        }

        anim = GetComponent<Animator>();
        eatSound = GetComponent<AudioSource>();

        running = true;
    }

    void Update() {
        Vector2 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);

        //checks if mouse is over the sprite
        bool overSprite = this.GetComponent<SpriteRenderer>().bounds.Contains(mousePosition);

        if (overSprite)
        {
            if (Input.GetMouseButton(0))
            {
                // set the position to the mouse position
                this.transform.position = new Vector3(Camera.main.ScreenToWorldPoint(Input.mousePosition).x, positionMonkeyHeight, 0.0f);
            }
            if (Input.GetMouseButtonUp(0))
            {
                this.transform.position = Vector2.MoveTowards(new Vector2(this.transform.position.x, this.transform.position.y), new Vector2(monkidefault.position.x, monkidefault.position.y), 5f);
            }
        }
        running = groundDrop.going;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Banana")
        {
            if (running)
            {
                anim.SetTrigger("Eat");
                eatSound.Play();
                gameController.AddScore(++score);
                Destroy(other.gameObject);
            }
        }
    }
}

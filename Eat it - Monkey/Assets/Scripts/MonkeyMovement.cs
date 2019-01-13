using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MonkeyMovement : MonoBehaviour {

    public Vector2 start;
    public int score;
    public Transform monkidefault;
    public bool alive;
    public GroundDrop groundDrop;
    public float positionMonkeyHeight = -2.8f;
    public AudioClip monkeySlap;

    private GameController gameController;
    private Animator anim;
    private AudioSource eatSound;
    private bool stonefree = true;

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

        alive = true;
    }

    void LateUpdate()
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

    void OnTriggerEnter2D(Collider2D other)
    {
        alive = groundDrop.bananaDropped;
        if (other.tag == "Banana")
        {
            if (alive && stonefree)
            {
                anim.SetTrigger("Eat");
                eatSound.Play();
                gameController.AddScore();
                Destroy(other.gameObject);
            }
        }
        if(other.tag == "Stone" && alive) {
            stonefree = false;
            eatSound.PlayOneShot(monkeySlap, 1f);
            anim.SetBool("hurt", true);
            gameController.GameOver();
            Destroy(other.gameObject);
        }
    }
}

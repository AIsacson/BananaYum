using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundDrop : MonoBehaviour {

    public bool bananaDropped = true;
    public Animator anim;
    private GameController gameController;

    void Start()
    {
        GameObject gameControllerObject = GameObject.FindWithTag("GameController");
        if (gameControllerObject != null)
        {
            gameController = gameControllerObject.GetComponent<GameController>();
        }
        if (gameController == null)
        {
            Debug.Log("Cannot find GameController script");
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Banana")
        {
            gameController.GameOver();
            bananaDropped = false;
            anim.SetBool("sad", true);
        }

        if(other.tag == "Stone") {
            Destroy(other.gameObject);
        }
    }
}

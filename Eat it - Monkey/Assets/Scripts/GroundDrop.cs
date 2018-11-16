using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundDrop : MonoBehaviour {

    private GameController gameController;
    public bool going = true;

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
            going = false;
            Destroy(other.gameObject);
        }
    }
}

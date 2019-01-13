using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BananaDrop : MonoBehaviour {

    private Rigidbody2D rb;
    private SpriteRenderer banana;
    private AudioSource bananaSound;

    public float speed;
    public Sprite bananaSplatSprite;
    public Sprite bananaDefault;
    public AudioClip bananaSplat;

    private void Awake() 
    {
        rb = GetComponent<Rigidbody2D>();
        banana = GetComponent<SpriteRenderer>();
        bananaSound = GetComponent<AudioSource>();
    }

    private void Update() 
    {
        rb.velocity = new Vector2(0f, speed);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.tag == "Ground") 
        {
            if(banana.sprite == bananaDefault) 
            {
                banana.sprite = bananaSplatSprite;
                rb.velocity = Vector2.zero;
                speed = 0.1f;
                bananaSound.PlayOneShot(bananaSplat, 0.2f);
            }
        }
    }
}

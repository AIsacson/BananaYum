using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StickDrop : MonoBehaviour
{
    private Rigidbody2D rb;
    public float speed;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        rb.velocity = new Vector2(0f, speed);
    }
}

using UnityEngine;
using System.Collections;

public class Character : MonoBehaviour
{
    public Rigidbody2D rb;

    public float moveSpeed;
    public float jumpPower;
    public float jumpCount;
    private float remainingJumps;

    // Use this for initialization
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        remainingJumps = jumpCount;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        jump();
        move();
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.gameObject.tag == "ground")
            remainingJumps = jumpCount;

    }
    public virtual void jump()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow) && remainingJumps > 0)
        {
            rb.AddForce(transform.up * jumpPower);
            remainingJumps--;
        }

    }

    public virtual void move()
    {
        float moveHorizontal = Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed;
        transform.Translate(moveHorizontal, 0, 0);
    }
}
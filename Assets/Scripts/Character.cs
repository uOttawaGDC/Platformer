using UnityEngine;
using System.Collections;

public class Character : MonoBehaviour {
    public int speed;
    private Rigidbody2D rb;
    private float startTime;
    public int jumpPower;

	// Use this for initialization
	void Start () {
        rb = GetComponentInChildren<Rigidbody2D>();
        startTime = Time.time;

	}

    // Update is called once per frame
    void FixedUpdate()
    {

        jump();
        move();

        

        
        
    }

    public virtual void jump(){
        Vector2 verticalMovement = Vector2.zero;
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            verticalMovement = Vector2.up;
        }
        rb.AddForce(verticalMovement * jumpPower);
    }

    public virtual void move()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        Vector2 horizontalMovement = new Vector2(moveHorizontal, 0.0f);
        rb.AddForce(horizontalMovement * speed);
    }
}

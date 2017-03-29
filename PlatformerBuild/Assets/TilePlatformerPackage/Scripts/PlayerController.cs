using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float jumpForce; // how strong the player can jump
	public float moveForce; // how fast player moves

	private bool canJump;

	private Rigidbody2D rb2d; // ref to players rigid body

	// Use this for initialization
	void Start () {
		canJump = false;
		rb2d = GetComponent<Rigidbody2D> ();
	}
		
	public void OnTriggerEnter2D(Collider2D other){

		if (other.tag == "Stone") {
			canJump = true;
		}

		if(other.tag == "Wood" && false){ // if you touch wood when you're the beaver, eat it
			Destroy (other.gameObject);
		}
	}

	public void OnTriggerExit2D(Collider2D other){
		
	}

	// Update is called once per frame
	void Update () {

		//
		// Determine what the player is over top of
		//
		Collider2D hit = Physics2D.OverlapPoint(new Vector2(transform.position.x, transform.position.y));
		if (hit) {
			
			if (hit.tag == "Water") {
				rb2d.gravityScale = 4;

			} else if (hit.tag == "Vine") {
				rb2d.gravityScale = 0;

			} else { // default player attributes
				rb2d.drag = 8;
				rb2d.gravityScale = 15;
			}
				
		} else { // player is not over a tile 
			rb2d.drag = 8;
			rb2d.gravityScale = 15;
		}
			

		//
		// react to left right movement
		//
		if(Input.GetKey("left")){
			rb2d.AddForce (new Vector2 (-1f * moveForce, 0f));

		} else if(Input.GetKey("right")){
			rb2d.AddForce (new Vector2 (moveForce, 0f));

		}

		//
		// React to up and down movement
		// 
		//
		if(hit && (hit.tag == "Vine" || hit.tag == "Water")){			
			if(Input.GetKey("up")){
				rb2d.AddForce (new Vector2 (0f, 1f * moveForce));

			} else if(Input.GetKey("down")){
				rb2d.AddForce (new Vector2 (0f, -1f * moveForce));

			}
		}

		//
		// react to jumping
		//
		if(Input.GetKeyDown("space") && canJump){
			canJump = false;
			rb2d.velocity = rb2d.velocity + new Vector2 (0f, jumpForce);
		}
			
		//
		// change character
		//
		if(Input.GetKeyDown("c")){

		}
	}
}

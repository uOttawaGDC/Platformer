using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float jumpForce; // how strong the player can jump
	public float moveForce; // how fast player moves

	private Rigidbody2D rb2d; // ref to players rigid body

	private bool free; // true if player is in water or on vines
	private string animal;

	private int refCounterWater; // if zero player is not over a special tile type  
	private int refCounterVine;

	// Use this for initialization
	void Start () {
		animal = "human"; // player starts as human 
		refCounterVine = 0;
		refCounterWater = 0;
		free = false;
		rb2d = GetComponent<Rigidbody2D> ();
	}
		
	public void OnTriggerEnter2D(Collider2D other){
		
		//
		// increment ref counters 
		//
		if( other.tag == "Vine"){
			refCounterVine += 1;

		}else if(other.tag == "Water"){
			refCounterWater += 1;

		}

		//
		// set properties
		//
		if(other.tag == "Vine"){ // vine has priority over other tiles
			rb2d.gravityScale = 0;
			free = true;

		}
		if(refCounterVine == 0){ // vine ref counter must be zero to have water effects
			if(other.tag == "Water"){
				rb2d.gravityScale = 4;
				free = true;

			}
		}
			
		if(other.tag == "Wood" && animal == "beaver"){ // if you touch wood when you're the beaver, eat it
			Destroy (other.gameObject);
		}
	}

	public void OnTriggerExit2D(Collider2D other){

		//
		// decrement counters
		//
		if( other.tag == "Vine"){
			refCounterVine -= 1;

		}else if(other.tag == "Water"){
			refCounterWater -= 1;

		}

		if( refCounterVine == 0 && refCounterWater == 0 ){ // revert to normal	
			free = false;
			rb2d.drag = 8;
			rb2d.gravityScale = 15;
		}
	}

	// Update is called once per frame
	void Update () {

		//
		// react to left right movement
		//
		if(Input.GetKey("left")){
			rb2d.AddForce (new Vector2 (-1f * moveForce, 0f));

		} else if(Input.GetKey("right")){
			rb2d.AddForce (new Vector2 (moveForce, 0f));

		}

		//
		// if free, react to up down movement 
		// "free" means player is on vine or under water
		//
		if(free){			
			if(Input.GetKey("up")){
				rb2d.AddForce (new Vector2 (0f, 1f * moveForce));

			} else if(Input.GetKey("down")){
				rb2d.AddForce (new Vector2 (0f, -1f * moveForce));

			}
		}

		//
		// reach to jumping
		//
		if(Input.GetKeyDown("space")){			
			rb2d.velocity = rb2d.velocity + new Vector2 (0f, jumpForce);
		}
			
		//
		// change character
		//
		if(Input.GetKeyDown("c")){
			if(animal == "human"){
				animal = "beaver";

			}else if(animal == "beaver"){
				animal = "human";
			}
		}

	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bounce : MonoBehaviour {


	Vector2 fallingPosition ;





	void OnCollisionEnter2D(Collision2D bounce){

		if (bounce.gameObject.tag == "Player") {

			Rigidbody2D PlayerController = bounce.gameObject.GetComponent<Rigidbody2D> ();

			fallingPosition = PlayerController.position;

			fallingPosition = Vector2.Reflect (fallingPosition, fallingPosition.normalized)*4;

			//fallingPosition.y *= -5;
			//fallingPosition.x = fallingPosition.x +5.0f;


			PlayerController.velocity = fallingPosition;
		}
				
	}
}

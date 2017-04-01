using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class snowmanController : MonoBehaviour {

	public GameObject player;
	public GameObject snowball;
	public float resetTime;
	public float throwSpeed;

	private bool inRange;
	private float coolDown;

	// Use this for initialization
	void Start () {		
		inRange = false;
		coolDown = 0f;
	}

	public void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			inRange = true;
		}
	}

	public void OnTriggerExit2D(Collider2D other){
		if (other.tag == "Player") {			
			inRange = false;
		}
	}

	private void attackPlayer(){
		Debug.Log ("attack");
		GameObject clone = Instantiate(snowball, transform.position, transform.rotation);
		float x = player.transform.position.x - transform.position.x;
		float y = player.transform.position.y - transform.position.y;
		clone.GetComponent<Rigidbody2D>().velocity = new Vector2 (x, y).normalized * throwSpeed;

	}

	// Update is called once per frame
	void Update () {

		if (coolDown <= 0) {
			if( inRange == true ){
				coolDown = resetTime;
				attackPlayer ();
			}

		} else {
			coolDown -= Time.deltaTime;

		}
	}
}

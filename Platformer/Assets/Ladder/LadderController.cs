using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LadderController : MonoBehaviour {

	//
	// required refs
	//
	public GameObject zone1;
	public GameObject zone2;

	//
	// instance variables
	//
	public float distance;

	// Use this for initialization
	void Start () {
	}

	// when player hits zone one go to zone two
	public void hitZoneOne(GameObject player){

		player.transform.position = zone2.transform.position + transform.right * distance;

	}

	// when player hits zone 2 go to zone one 
	public void hitZoneTwo(GameObject player){
		
		player.transform.position = zone1.transform.position - transform.right * distance;


	}
				
	// Update is called once per frame
	void Update () {
		
	}
}

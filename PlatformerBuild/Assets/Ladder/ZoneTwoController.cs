using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoneTwoController : MonoBehaviour {

	//
	// required references
	//
	public GameObject ladder;

	// Use this for initialization
	void Start () {

	}

	public void OnTriggerEnter2D(Collider2D other){

		if(other.tag == "Player" || true)
			ladder.GetComponent<LadderController> ().hitZoneTwo (other.gameObject);

	}
		
	// Update is called once per frame
	void Update () {

	}
}

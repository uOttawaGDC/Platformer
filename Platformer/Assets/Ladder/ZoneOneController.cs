using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoneOneController : MonoBehaviour {

	//
	// required references
	//
	public GameObject ladder;

	// Use this for initialization
	void Start () {
		
	}

	public void OnTriggerEnter2D(Collider2D other){

		if(other.tag == "Player" || true)
			ladder.GetComponent<LadderController> ().hitZoneOne (other.gameObject);

	}
		
	// Update is called once per frame
	void Update () {
		
	}
}

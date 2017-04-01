using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class snowballController : MonoBehaviour {

	public GameObject explosion;
	private int deathCount;

	// Use this for initialization
	void Start () {
		deathCount = 1;
	}

	public void OnTriggerEnter2D(Collider2D other){

		if(deathCount == 0){
			GameObject exp = Instantiate(explosion, transform.position, transform.rotation);
			exp.GetComponent<ParticleSystem> ().Play ();
			Destroy (exp, 1f);
			Destroy (this.gameObject);
		}
		deathCount -= 1;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

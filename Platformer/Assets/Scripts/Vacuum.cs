using UnityEngine;
using System.Collections;

public class Vacuum : MonoBehaviour {
	
    public float gravityScale;
    public GameObject character;
    private Rigidbody2D rb;
    private bool activated;

	// Use this for initialization
	void Start () {
		
	}
		
    public void OnTriggerEnter2D(Collider2D other)
    {
		other.GetComponent<Bird> ().setGravityPower (gravityScale);

    }
	public void OnTriggerExit2D(Collider2D other){
		other.GetComponent<Bird> ().setGravityPower (-2f);
	}
}

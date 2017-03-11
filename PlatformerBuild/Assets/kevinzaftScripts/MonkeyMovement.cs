using UnityEngine;
using System.Collections;

public class MonkeyMovement : MonoBehaviour {
    public float xSpeed = 5f;
    public float jumpPower = 10f;
    public float numberOfJumps = 2f;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        // making sure it doesnt more in the z axix
        Vector3 pos = transform.position;
        pos.z = 0;
        transform.position = pos;

        movement();

    }

    private void movement()
    {
        //moving
        var xMovement = Input.GetAxis("Horizontal") * Time.deltaTime * xSpeed;
        transform.Translate(xMovement, 0, 0);
    }

    private void jump()
    {

    }



}

using UnityEngine;
using System.Collections;

public class Bird : Character {
    // Use this for initialization INHERITED
    //void Start () {
    //}
    public float flyPower = 10f;
	public float gravityPower;

	// Update is called once per frame
	void Update () {
        fly();

        gravityEffect();
    }

	public void setGravityPower(float newPower){
		gravityPower = newPower;

	}

    public virtual void fly()
    {
        float moveVertical = Input.GetAxis("Vertical") * Time.deltaTime * flyPower;
        transform.Translate(0, moveVertical, 0);
    }

    public virtual void gravityEffect()
    {
		float gravity = Time.deltaTime * gravityPower;
        transform.Translate(0, gravity, 0);
    }
}

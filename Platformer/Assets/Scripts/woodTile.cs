using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class woodTile : MonoBehaviour {

	private bool isDestroyable;


	void Update () {
		if (Input.GetButtonDown ("Fire1")) {
			isDestroyable = true;
		}
		//isDestroyable = destroyObject.destroy;
		if (isDestroyable) {

			Destroy(gameObject);
		}
	}
}

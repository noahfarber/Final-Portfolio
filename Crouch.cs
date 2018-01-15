using UnityEngine;
using System.Collections;

public class Crouch : MonoBehaviour {

	public GameObject Player;
	public float scale;
	// Use this for initialization
	void Start () {
	
	}


	void Update()
	{
		if (Input.GetKey (KeyCode.LeftShift)) {
			transform.position = new Vector3 (transform.localPosition.x, transform.localPosition.y - 1, transform.localPosition.y);

		} else {

		}
		
}
}

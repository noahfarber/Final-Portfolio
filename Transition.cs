using UnityEngine;
using System.Collections;

public class Transition : MonoBehaviour {


	public GameObject password;
	public GameObject safe;
	public GameObject cursor;
	public float lastPressed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Downdate is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.Alpha2)) {
			lastPressed = 1;
		}
		if (Input.GetKeyDown (KeyCode.Alpha5) && lastPressed == 1) {
			lastPressed = 2;
		}
		if (Input.GetKeyDown (KeyCode.Alpha1) && lastPressed == 2) {
			lastPressed = 3;
		}
		if (Input.GetKeyDown (KeyCode.Alpha9) && lastPressed == 3) {
			lastPressed = 4;
		}


		if(password.activeSelf == true)
		{
			if (lastPressed == 4)
			{
				password.SetActive (false);
				safe.transform.rotation = Quaternion.Euler(0, 90, 0);
				cursor.SetActive (true);

			}
		}
	
	}
}

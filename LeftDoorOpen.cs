using UnityEngine;
using System.Collections;

public class LeftDoorOpen : MonoBehaviour {
	GameObject mainCamera;
	public GameObject player;
	public GameObject LeftDoor1;
	public GameObject RightDoor1;
	public GameObject LeftDoor;
	public GameObject RightDoor;


	// Use this for initialization
	void Start () {
		mainCamera = GameObject.FindWithTag("MainCamera");
		player = GameObject.FindWithTag ("Player");
	
	}
	
	// Update is called once per frame
	void Update () {
	
		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera> ().ScreenPointToRay (new Vector3 (x, y));
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				LeftOpenable p = hit.collider.GetComponent<LeftOpenable> ();
				if (p != null) {
					//do whatever I want
					LeftDoor1.transform.localRotation = Quaternion.Euler(0, 90, 0);

				
				}
			}

		}

		//buffer

		if (Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera> ().ScreenPointToRay (new Vector3 (x, y));
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				RightOpenable p = hit.collider.GetComponent<RightOpenable> ();
				if (p != null) {
					//do whatever I want
					RightDoor1.transform.localRotation = Quaternion.Euler(0, 90, 0);
				}
			}

		}
	}
}

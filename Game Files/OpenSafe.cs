using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class OpenSafe : MonoBehaviour {
	GameObject mainCamera;
	public GameObject player;
	public GameObject cursor;
	public GameObject background;



	// Use this for initialization
	void Start () {
		mainCamera = GameObject.FindWithTag("MainCamera");
		player = GameObject.FindWithTag ("Player");

	}

	// Update is called once per frame
	void Update () {
		if(background.activeSelf == true)
		{
			if (Input.GetKeyDown (KeyCode.Escape)) {
				background.SetActive (false);
				cursor.SetActive (true);
			}
		}

	if (Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera> ().ScreenPointToRay (new Vector3 (x, y));
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				CanOpen p = hit.collider.GetComponent<CanOpen> ();
				if (p != null) {
					background.SetActive (true);
					cursor.SetActive (false);



					if (Input.GetKeyDown (KeyCode.Mouse1)) {
						background.SetActive (false);
						cursor.SetActive (true);
					}
				}
			}
		
		}



	}




}
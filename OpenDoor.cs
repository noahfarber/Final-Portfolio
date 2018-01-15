using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class OpenDoor : MonoBehaviour {


	public GameObject mainCamera;
	public GameObject Player;
	public Slider slider;
	// Use this for initialization
	void Start () {
		mainCamera = GameObject.FindWithTag("MainCamera");
		Player = GameObject.Find ("FPSController");
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera>().ScreenPointToRay(new Vector3(x,y));
			RaycastHit hit;
			if(Physics.Raycast(ray, out hit)) {
				Door p = hit.collider.GetComponent<Door>();
				if(p != null) {
					Player.transform.position = new Vector3(900, 340, 650);

				}
			}

			if(Physics.Raycast(ray, out hit)) {
				Door2 p = hit.collider.GetComponent<Door2>();
				if(p != null) {
					Player.transform.position = new Vector3(900, 340, 590);
				}
			}

			if(Physics.Raycast(ray, out hit)) {
				Door3 p = hit.collider.GetComponent<Door3>();
				if(p != null) {
					Player.transform.position = new Vector3(900, 340, 526);
				}
			}

			if(Physics.Raycast(ray, out hit)) {
				Door4 p = hit.collider.GetComponent<Door4>();
				if(p != null) {
					Player.transform.position = new Vector3(900, 340, 467);
				}
			}

			if(Physics.Raycast(ray, out hit)) {
				Door5 p = hit.collider.GetComponent<Door5>();
				if(p != null) {
					Player.transform.position = new Vector3(900, 340, 409);
				}
			}
		}

		if(Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera>().ScreenPointToRay(new Vector3(x,y));
			RaycastHit hit;
			if(Physics.Raycast(ray, out hit)) {
				CTC p = hit.collider.GetComponent<CTC>();
				if(p != null) {
					Player.transform.position = new Vector3(802, 310, 1018);
					slider.value = slider.value + 1;
				}
			}
		}

		if (slider.value == 6)
		{
			Application.LoadLevel("MainMenu");
		}
	}
}

using UnityEngine;
using System.Collections;

public class PickupObject : MonoBehaviour {
	GameObject mainCamera;
	public bool carrying;
	GameObject carriedObject;
	public float distance;
	public float smooth;
	public GameObject OrangeFuse;
	// Use this for initialization
	void Start () {
		mainCamera = GameObject.FindWithTag("MainCamera");
		OrangeFuse = GameObject.Find ("OrangeFuse");
	}

	// Update is called once per frame
	void Update () {

			if (carrying) {
				carry (carriedObject);
				checkDrop ();
				//rotateObject();
			} else {
				pickup ();

			}

	}

	void rotateObject() {
		carriedObject.transform.Rotate(carriedObject.transform.rotation.x,carriedObject.transform.rotation.y,carriedObject.transform.rotation.z);
	}


	void carry(GameObject o) {
		if (carriedObject != null) {
			o.transform.position = Vector3.Lerp (o.transform.position, mainCamera.transform.position + mainCamera.transform.forward * distance, Time.deltaTime * smooth);
		}
	}

	void pickup() {
		if(Input.GetKeyDown (KeyCode.Mouse0)) {
			int x = Screen.width / 2;
			int y = Screen.height / 2;

			Ray ray = mainCamera.GetComponent<Camera>().ScreenPointToRay(new Vector3(x,y));
			RaycastHit hit;
			if(Physics.Raycast(ray, out hit)) {
				Pickupable p = hit.collider.GetComponent<Pickupable>();
				if(p != null) {
					carrying = true;
					carriedObject = p.gameObject;
					//p.gameObject.rigidbody.isKinematic = true;
					p.gameObject.GetComponent<Rigidbody>().useGravity = false;
				}
			}
		}
	}

	void checkDrop() {
		if(Input.GetKeyDown (KeyCode.Mouse0)) {
			dropObject();
		}
	}

	void dropObject() {
		carrying = false;
		//carriedObject.gameObject.rigidbody.isKinematic = false;
		carriedObject.gameObject.GetComponent<Rigidbody>().useGravity = true;
		carriedObject = null;
	}

	void dropObject2() {
		carrying = false;
		carriedObject = null;
	}
}
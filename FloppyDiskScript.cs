using UnityEngine;
using System.Collections;

public class FloppyDiskScript : MonoBehaviour {
	public GameObject FloppyDisk;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter (Collision col)
	{
		if(col.gameObject.name == "Computer")
		{
			Destroy (FloppyDisk);
			Application.LoadLevel ("MainMenu");
		}
	}

}

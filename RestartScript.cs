using UnityEngine;
using System.Collections;

public class RestartScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter (Collision col)
	{
		if(col.gameObject.tag == "meteor")
		{
			Application.LoadLevel ("OnSpaceShip");
		}
		if(col.gameObject.tag == "moon")
		{
			Application.LoadLevel ("MainMenu");
		}
	}
}

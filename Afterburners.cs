using UnityEngine;
using System.Collections;

public class Afterburners : MonoBehaviour {
	public GameObject afterburner1;
	public GameObject afterburner2;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.W))
		{
			afterburner1.SetActive (true);
			afterburner2.SetActive (true);
	}

		if(Input.GetKeyUp(KeyCode.W))
		{
			afterburner1.SetActive (false);
			afterburner2.SetActive (false);
		}
}

}

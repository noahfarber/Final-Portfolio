using UnityEngine;
using System.Collections;

public class TimeScript : MonoBehaviour {
	public GameObject Objective;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.timeSinceLevelLoad >= 3) {
			Objective.SetActive (false);

		}

	}
}

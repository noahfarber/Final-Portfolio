using UnityEngine;
using System.Collections;

public class FollowScript : MonoBehaviour {
	public GameObject Ship;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = Vector3.MoveTowards(transform.position, Ship.transform.position, 10F);
	}
}

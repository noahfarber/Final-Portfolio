using UnityEngine;
using System.Collections;

public class FuseSnapOrange : MonoBehaviour {

	public GameObject OrangeFuse;
	public GameObject Blank2Orange;
	bool ReadyToDestroy;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	

			
		}

	void OnTriggerStay(Collider OrangeClamp)
	{
		Destroy (OrangeFuse);

	}

}

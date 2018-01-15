using UnityEngine;
using System.Collections;

public class BarrelRolls : MonoBehaviour {

	public Animator anim;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator>();

	}
	
	// Update is called once per frame
	void Update () {

		if (!this.anim.GetCurrentAnimatorStateInfo (0).IsName ("LeftBarrel")) {
			
			anim.enabled = false;
		}

			
		if (Input.GetKeyDown (KeyCode.A)) {
			if (!this.anim.GetCurrentAnimatorStateInfo (0).IsName ("LeftBarrel")) {
				anim.enabled = true;
				anim.Play ("LeftBarrel");

			}
		}


		/*
		if (!this.anim.GetCurrentAnimatorStateInfo (0).IsName ("RightBarrel")) {

			anim.enabled = false;
		}


		if (Input.GetKeyDown (KeyCode.D)) {
			if (!this.anim.GetCurrentAnimatorStateInfo (0).IsName ("RightBarrel")) {
				anim.enabled = true;
				anim.Play ("RightBarrel");

			}
		}
	
*/
	}
}

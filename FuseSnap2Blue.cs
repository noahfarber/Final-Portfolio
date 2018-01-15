using UnityEngine;
using System.Collections;

public class FuseSnap2Blue : MonoBehaviour {

	public GameObject BlueFuse;
	public GameObject Blank2Blue;
	public GameObject Password;
	public bool FuseSize;
	// Use this for initialization
	void Start () {
		FuseSize = true;
	}

	// Update is called once per frame
	void Update () {
		
		if(!GameObject.Find("BlueFuse")){
		transform.localScale = new Vector3(.184F, .2F, .20057F);
		}
		if(!GameObject.Find("BlueFuse") && FuseSize == true){
			Password.transform.localScale = new Vector3(.1198F, Password.transform.localScale.y + .5F, 3.1741F);
			FuseSize = false;
		}
	}
	/*
	void OnTriggerStay(Collider BlueFuse)
	{
		transform.localScale = new Vector3(.184F, .2F, .20057F);

	}*/

}

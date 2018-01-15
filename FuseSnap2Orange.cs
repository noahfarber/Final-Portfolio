using UnityEngine;
using System.Collections;

public class FuseSnap2Orange : MonoBehaviour {

	public GameObject OrangeFuse;
	public GameObject Blank2Orange;
	public GameObject Password;
	public bool FuseSize;

	// Use this for initialization
	void Start () {
		FuseSize = true;
	}

	// Update is called once per frame
	void Update () {
		if(!GameObject.Find("OrangeFuse")){
			transform.localScale = new Vector3(.184F, .2F, .20057F);
		}
		if(!GameObject.Find("OrangeFuse") && FuseSize == true){
			Password.transform.localScale = new Vector3(.1198F, Password.transform.localScale.y + .5F, 3.1741F);
			FuseSize = false;
		}
	}
}

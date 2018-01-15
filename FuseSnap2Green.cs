using UnityEngine;
using System.Collections;

public class FuseSnap2Green : MonoBehaviour {

	public GameObject GreenFuse;
	public GameObject Blank2Green;
	public GameObject Password;
	public bool FuseSize;

	// Use this for initialization
	void Start () {
		FuseSize = true;
	}

	// Update is called once per frame
	void Update () {
		if(!GameObject.Find("GreenFuse")){
			transform.localScale = new Vector3(.184F, .2F, .20057F);
		}
		if(!GameObject.Find("GreenFuse") && FuseSize == true){
			Password.transform.localScale = new Vector3(.1198F, Password.transform.localScale.y + .5F, 3.1741F);
			FuseSize = false;
		}
	}

}

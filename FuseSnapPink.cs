using UnityEngine;
using System.Collections;

public class FuseSnapPink : MonoBehaviour {

	public GameObject PinkFuse;
	public GameObject Blank2Pink;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerStay(Collider PinkClamp)
	{
		Destroy(PinkFuse);

	}

}

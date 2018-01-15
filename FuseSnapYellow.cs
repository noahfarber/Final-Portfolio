using UnityEngine;
using System.Collections;

public class FuseSnapYellow : MonoBehaviour {

	public GameObject YellowFuse;
	public GameObject Blank2Yellow;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerStay(Collider YellowClamp)
	{
		Destroy(YellowFuse);

	}

}

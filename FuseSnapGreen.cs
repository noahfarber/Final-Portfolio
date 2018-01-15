using UnityEngine;
using System.Collections;

public class FuseSnapGreen : MonoBehaviour {

	public GameObject GreenFuse;
	public GameObject Blank2Green;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerStay(Collider GreenClamp)
	{
		Destroy(GreenFuse);

	}

}

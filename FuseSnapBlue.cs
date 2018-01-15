using UnityEngine;
using System.Collections;

public class FuseSnapBlue : MonoBehaviour {

	public GameObject BlueFuse;
	public GameObject Blank2Blue;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	void OnTriggerStay(Collider BlueClamp)
	{
		Destroy(BlueFuse);

	}

}

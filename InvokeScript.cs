using UnityEngine;
using System.Collections;

public class InvokeScript : MonoBehaviour 
{
	public GameObject target;


	void Start()
	{
		Invoke ("SpawnObject", 8);
	}

	void SpawnObject()
	{
		Application.LoadLevel ("OnSpaceShip");
	}
}
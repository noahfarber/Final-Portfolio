using UnityEngine;
using System.Collections;

public class ComputerOn : MonoBehaviour {

	public GameObject GreenFuseHolder;
	public GameObject OrangeFuseHolder;
	public GameObject PinkFuseHolder;
	public GameObject YellowFuseHolder;
	public GameObject BlueFuseHolder;
	public float GreenSize;
	public float OrangeSize;
	public float PinkSize;
	public float YellowSize;
	public float BlueSize;
	public GameObject Password;

	public GameObject ComputerScreen;
	public GameObject light;

	// Use this for initialization
	void Start () {
		
		GreenFuseHolder = GameObject.Find ("Blank1Green");
		OrangeFuseHolder = GameObject.Find ("Blank2Orange");
		PinkFuseHolder = GameObject.Find ("Blank3Pink");
		YellowFuseHolder = GameObject.Find ("Blank4Yellow");
		BlueFuseHolder = GameObject.Find ("Blank5Blue");
		BlueSize = 2.5F;
		MeshRenderer m = ComputerScreen.GetComponent<MeshRenderer>();
		m.enabled = false;
	}
	
	// Update is called once per frame
	void Update () {
		/*if (Password.transform.localScale.y == 2.5F) {
			Debug.Log ("turning on");
			ComputerScreen.SetActive (true);
		} */
		if (!GameObject.Find ("BlueFuse") && !GameObject.Find ("GreenFuse") && !GameObject.Find ("YellowFuse") && !GameObject.Find ("PinkFuse") && !GameObject.Find ("OrangeFuse"))
		{
			MeshRenderer m = ComputerScreen.GetComponent<MeshRenderer>();
			m.enabled = true;
		}

	}

	void TurnOn(){
		ComputerScreen.SetActive (true);
	}
}

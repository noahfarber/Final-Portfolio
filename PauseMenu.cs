using UnityEngine;
using System.Collections;

public class PauseMenu : MonoBehaviour {

	public GameObject pauseScreen;
	public GameObject Player;
	public GameObject Password;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		/*
		if (pauseScreen.activeInHierarchy == true) {
			if (Input.GetKeyDown (KeyCode.Alpha1)) {
				pauseScreen.SetActive (false);
				Time.timeScale = 1;
			}
		}
		*/

		if (pauseScreen.activeInHierarchy == true) {
			if (Input.GetKeyDown (KeyCode.Alpha3)) {
				Application.LoadLevel ("MainMenu");
				Time.timeScale = 1;
			}
		}


		if(Input.GetKeyDown(KeyCode.Escape) && Password.activeInHierarchy == false)
		{
			Pause ();

	}

		if (Time.timeScale == 0) {
			if (Input.GetKeyDown(KeyCode.P)) {
				Application.LoadLevel ("MainMenu");
			}
		}
	}

	public void Pause()
	{
		if (pauseScreen.activeInHierarchy == false) {
			pauseScreen.SetActive (true);
			Time.timeScale = 0;
			Player.GetComponent<FirstPersonController>().enabled = false;


		} else {
			pauseScreen.SetActive (false);
			Time.timeScale = 1;
			Player.GetComponent<FirstPersonController> ().enabled = true;
		}
	}
}

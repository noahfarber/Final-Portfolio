using UnityEngine;
using System.Collections;



public class newPassword: MonoBehaviour {

	public Texture2D icon;
	public string SetPassword = "12345";
	public string PlayerPassword = "";
	void OnGUI () {
		GUI.Box (new Rect ((Screen.width / 2) - 150, (Screen.height / 2) - 150,300,300), new GUIContent(icon));
		PlayerPassword = GUI.PasswordField (new Rect((Screen.width / 2) - 100, (Screen.height / 2) - 18, 200, 36), PlayerPassword, "*"[0],4);



			if (PlayerPassword == SetPassword) {
				Debug.Log ("password was correct");
			} else {
				Debug.Log ("did not work");
			}



	}



}
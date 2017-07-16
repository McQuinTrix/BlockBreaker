using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaddleScript : MonoBehaviour {

	public AudioSource sound;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 paddlePos = new Vector3(0f , this.transform.position.y, this.transform.position.z);

		paddlePos.x = Mathf.Clamp (Input.mousePosition.x/50, 1.06f, (Screen.width/50 - 1.06f));

		this.transform.position = paddlePos;
	}
}

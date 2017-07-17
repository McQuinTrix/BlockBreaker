using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaddleScript : MonoBehaviour {

	public AudioSource sound;
	public bool autoPlay;
	private GameObject Ball;

	// Use this for initialization
	void Start () {
		Ball = GameObject.FindGameObjectWithTag ("ball");
		print (Ball);
	}
	
	// Update is called once per frame
	void Update () {
		if (!autoPlay) {
			mouseMove ();
		} else {
			RoboPlay ();
		}
	}

	void RoboPlay(){
		Vector3 paddlePos = new Vector3(0f , this.transform.position.y, this.transform.position.z);
		print (Ball.transform.position.x);
		paddlePos.x = Mathf.Clamp (Ball.transform.position.x, 1.06f, (Screen.width/50 - 1.06f));

		this.transform.position = paddlePos;
	}

	void mouseMove(){
		Vector3 paddlePos = new Vector3(0f , this.transform.position.y, this.transform.position.z);

		paddlePos.x = Mathf.Clamp (Input.mousePosition.x/50, 1.06f, (Screen.width/50 - 1.06f));

		this.transform.position = paddlePos;
	}
}

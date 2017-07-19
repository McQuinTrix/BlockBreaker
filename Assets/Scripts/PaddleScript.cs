using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaddleScript : MonoBehaviour {

	public AudioSource sound;
	public bool autoPlay = false;
	private GameObject Ball;

	// Use this for initialization
	void Start () {
		Ball = GameObject.FindGameObjectWithTag ("ball");
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
		RectTransform rt = (RectTransform) this.transform;
		paddlePos.x = Mathf.Clamp (Ball.transform.position.x, rt.rect.width/2, (Screen.width/50 - 1.06f));

		this.transform.position = paddlePos;
	}

	void mouseMove(){
		Vector3 paddlePos = new Vector3(0f , this.transform.position.y, this.transform.position.z);
		RectTransform rt = (RectTransform) this.transform;
		paddlePos.x = Mathf.Clamp (Input.mousePosition.x/50, rt.rect.width/2 , (Screen.width/50 - rt.rect.width/2));

		this.transform.position = paddlePos;
	}
}

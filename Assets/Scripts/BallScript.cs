using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallScript : MonoBehaviour {

	public GameObject p;
	private Vector3 paddleToBallVector;
	private bool launched = false;
	private Rigidbody2D rigi;

	// Use this for initialization
	void Start () {
		paddleToBallVector = this.transform.position - p.transform.position;
		rigi = GetComponent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void Update () {

		if (!launched) {
			this.transform.position = p.transform.position + paddleToBallVector;
			if (Input.GetMouseButtonDown(0)) {
				launched = true;
				rigi.velocity = new Vector2 (5f, 8f);
			}
		}
	}
}

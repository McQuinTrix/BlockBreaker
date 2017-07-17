using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class brickScript : MonoBehaviour {

	private int maxHits;
	private LevelManager lvl;
	public Sprite[] hitSprite;
	private int timesHit;
	private bool breakable;
	public static int brickCount = 0;

	// Use this for initialization
	void Start () {
		breakable = this.tag == "brick";
		if (breakable) {
			brickCount++;
		}
		timesHit = 0;
		maxHits = hitSprite.Length + 1;
		lvl = GameObject.FindObjectOfType<LevelManager>();
		print (lvl);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D(Collision2D coll){
		if (breakable) {
			HandleHits ();
		}
	}

	void HandleHits(){
		timesHit++;
		if (timesHit >= maxHits) {
			brickCount--;
			lvl.brickDestroyed ();
			Destroy (gameObject);
		} else {
			LoadSprites ();
		}
	}

	void LoadSprites(){
		int spIndex = timesHit - 1;
		if (hitSprite [spIndex]) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprite [spIndex];
		}
	}

	void completeLevel(){
		lvl.LoadNextLevel ();
	}
}

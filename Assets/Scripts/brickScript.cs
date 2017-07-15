using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class brickScript : MonoBehaviour {

	private int maxHits;
	public LevelManager lvl;
	public Sprite[] hitSprite;
	private int timesHit;

	// Use this for initialization
	void Start () {
		timesHit = 0;
		maxHits = hitSprite.Length + 1;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D(Collision2D coll){
		timesHit++;
		if (timesHit >= maxHits) {
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

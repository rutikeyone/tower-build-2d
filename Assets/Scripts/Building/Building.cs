using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.Tracing;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.Building
{
    public class Building : MonoBehaviour
    {
        private AudioSource Audio;
        public AudioClip FallClip;
        public AudioClip GameOverClip;
        private bool FellAlready = false;


        private void Start()
        {
            Audio = gameObject.GetComponent<AudioSource>();
        }

        private void OnCollisionEnter2D(Collision2D col)
        {
            if (col.gameObject.name.Equals("Crane"))
            {
                gameObject.transform.parent = col.transform;
            }

            if (col.gameObject.tag.Equals("Building"))
            {
                if (!FellAlready)
                {
                    Audio.PlayOneShot(FallClip);
                    FellAlready = true;
                }
            }
        }
        private void OnCollisionExit2D(Collision2D col)
        {
            if (col.gameObject.name.Equals("Crane"))
            {
                gameObject.transform.parent = null;
            }
        }
     
    }
}

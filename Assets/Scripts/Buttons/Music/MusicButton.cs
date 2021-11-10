using System.Collections;
using System.Collections.Generic;
using UnityEngine.Advertisements;
using UnityEngine;
using UnityEngine.UI;
using System;   

public class MusicButton: MonoBehaviour
{
    public Sprite TurnOff;
    public Sprite TurnOn;


    private void Start()
    {
        GetMusic();
    }

    public void MusicToggle()
    {
        if (Music.MusicInstance.MusicSource.volume > 0)
        {
            Music.MusicInstance.MusicSource.volume = 0;
            gameObject.GetComponent<Image>().sprite = TurnOff;
        }
        else
        {
            Music.MusicInstance.MusicSource.volume = 0.2f;
            gameObject.GetComponent<Image>().sprite = TurnOn;
        }
    }

    private void GetMusic()
    {
        if (Music.MusicInstance.MusicSource.volume > 0)
        {
            gameObject.GetComponent<Image>().sprite = TurnOn;
        }
        else
        {
            gameObject.GetComponent<Image>().sprite = TurnOff;
        }
    }
}

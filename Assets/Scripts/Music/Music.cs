using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Music : MonoBehaviour
{
    public AudioClip Music1;
    public AudioClip Music2;
    public AudioClip Music3;
    public AudioClip Music4;
    public AudioClip Music5;

    private AudioClip[] Musics;

    public static Music MusicInstance;

    public AudioSource MusicSource;

    private AudioClip LastClip;

    private void Start()
    {
        Musics = new AudioClip[5] {
        Music1,
        Music2,
        Music3,
        Music4,
        Music5
        };

        MusicSource = gameObject.GetComponent<AudioSource>();

        PlayRandomClip();
    }


    private void Awake()
    {

        if (MusicInstance != null && MusicInstance != this)
        {
            Destroy(this.gameObject);
            return;
        }

        MusicInstance = this;

        DontDestroyOnLoad(this);

    }
    private void PlayRandomClip()
    {
        int Attempts = 3;
        AudioClip NewClip = Musics[Random.Range(0, Musics.Length)]; // using Random = UnityEngine.Random

        while (NewClip == LastClip && Attempts > 0) //Логика по которой прошлый и следущий клип не должны совпадать
        {
            NewClip = Musics[Random.Range(0, Musics.Length)];
            Attempts--;
        }

        LastClip = NewClip;
        MusicSource.PlayOneShot(NewClip);
        Invoke("PlayRandomClip", NewClip.length);
    }
}

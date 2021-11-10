using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnClouds : MonoBehaviour
{
    public GameObject CloudObj;

    private void Start()
    {
        Spawn();
    }

    private void Spawn()
    {
        Instantiate(this.CloudObj, transform.position, transform.rotation);
        Invoke("Spawn", 8f);

    }
}

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseBuilding : MonoBehaviour
{
    public Sprite LightGray;
    public Sprite Gray;

    private void Start()
    {
        SetSprite();
    }

    public void SetSprite()
    {
        if (GetParity() != 0)
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = LightGray;
        }
        else
        {
            gameObject.GetComponent<SpriteRenderer>().sprite = Gray;
        }

        gameObject.AddComponent<BoxCollider2D>();
    }

    public int GetParity()
    {
        return (PlayerPrefs.GetInt("FirstRecord") + PlayerPrefs.GetInt("SecondRecord")) % 2;
    }
}

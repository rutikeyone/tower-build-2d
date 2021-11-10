using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Trigger : MonoBehaviour
{
    public UnityEvent EventUp;
    public UnityEvent EventStop;


    public void OnTriggerEnter2D(Collider2D col)
    {
        if (col.tag == "Building")
        {
            EventUp?.Invoke();
        }
    }

    private void OnTriggerExit2D(Collider2D col)
    {
        if(col.tag == "Building")
        {
            EventStop?.Invoke();
        }
    }

}
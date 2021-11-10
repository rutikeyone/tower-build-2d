using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetRecord : MonoBehaviour
{
    public Text Record;

    public string NameTextRecord;
    void Start()
    {
        Record = GetComponent<Text>();
        
        Record.text = PlayerPrefs.GetInt(NameTextRecord).ToString();
           
    }  
    
}

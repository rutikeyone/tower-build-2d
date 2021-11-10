using Assets.Scripts.Building;
using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class TextOfTheFloors : MonoBehaviour
{
    public Text TextFloors;
    public UnityEvent EventChangeText;
    private int Result;

    private int FirstRecord;
    private int SecondRecord;

    public UnityEvent<int> EventRecord;

    void Start()
    {
        FirstRecord = PlayerPrefs.GetInt("FirstRecord");
        SecondRecord = PlayerPrefs.GetInt("SecondRecord");

        TextFloors = GetComponent<Text>();
        TextFloors.text = Result.ToString();
    }

    public void ChangeText()
    {
        Result += 1;
        TextFloors.text = Result.ToString();
        EventChangeText?.Invoke();
    }

    public void SetRecort(int coef)
    {
        Result *= coef;

        if (Result < FirstRecord && Result > SecondRecord)
        {
            PlayerPrefs.SetInt("SecondRecord", Result);
        }

        if (Result > FirstRecord && Result > SecondRecord)
        {
            PlayerPrefs.SetInt("FirstRecord", Result);
            PlayerPrefs.SetInt("SecondRecord", FirstRecord);
        }


        TextFloors.text = Result.ToString();
        EventRecord?.Invoke(Result); 
    }
}

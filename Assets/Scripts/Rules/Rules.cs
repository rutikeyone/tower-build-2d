using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Rules : MonoBehaviour
{
    public UnityEvent EventFirstTime;
    public UnityEvent EventNextTime;
    private void Start()
    {
        CheckFirstTime();
    }
     
    //Проверка в начале игры, первый раз ли мы запускаем игру
    private void CheckFirstTime()
    {
        if (!PlayerPrefs.HasKey("IsFirstTime"))
        {
            PlayerPrefs.SetInt("IsFirstTime", 0);
            EventFirstTime?.Invoke();
        }
        else
        {
            gameObject.SetActive(false);
        }
    }

    //Метод для закрытия таблички с правилами, вызывается первый раз
    public void ChangeIsFirstTime()
    {
        gameObject.SetActive(false);
        PlayerPrefs.SetInt("IsFirstTime", 0);
        EventNextTime?.Invoke();
    }


    //Метод для преобразования числа в булевую переменную
    private bool ConvertToBool(int number)
    {
        return Convert.ToBoolean(number);
    }
}

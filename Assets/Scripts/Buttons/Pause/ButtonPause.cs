using Assets.Scripts.Building;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class ButtonPause : MonoBehaviour
{
    public Button Pause;
    public Sprite OnImage;
    public Sprite OffImage;

    public GameObject ButtonStopGame;
    public GameObject TablePause;
    public GameObject EventClick;
    public GameObject TableGameOver;

    public bool IsPause = false;

    void Start()
    {
        TableGameOver.SetActive(false);
        TablePause.SetActive(false);
        EventClick.SetActive(true);
        ButtonStopGame.GetComponent<Image>().sprite = OnImage;

    }
    public void StopOrContinueGame()
    {
        if (!IsPause)
        {
            TablePause.SetActive(true);
            EventClick.SetActive(false);
            ButtonStopGame.GetComponent<Image>().sprite = OffImage;
            IsPause = true;
            Time.timeScale = 0;
        }
        else
        {
            TablePause.SetActive(false);
            EventClick.SetActive(true);
            ButtonStopGame.GetComponent<Image>().sprite = OnImage;
            IsPause = false;
            Time.timeScale = 1;
        }
    }

    public void GameOver()
    {
        Pause.enabled = false;
        TableGameOver.SetActive(true);
        Time.timeScale = 0;

    }

}

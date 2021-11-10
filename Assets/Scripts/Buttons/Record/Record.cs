using AssemblyCSharp.Assets.Scripts.Buttons;
using UnityEngine;
using UnityEngine.UI;

class Record : ShowHidden
{
    public override void Show()
    {
        AboutMe.SetActive(false);
        Play.SetActive(false);
        Quit.SetActive(false);
        NameGame.SetActive(false);
        Data.SetActive(true);
    }
    public override void Hidden()
    {
        AboutMe.SetActive(true);
        Play.SetActive(true);
        Quit.SetActive(true);
        NameGame.SetActive(true);
        Data.SetActive(false);
    }
}  
 

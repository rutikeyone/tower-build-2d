using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class Ads : MonoBehaviour
{
    public Button X2;
    public Button X3;
    public Sprite SpriteX2;
    public Sprite SpriteX3;
    private void HideButton()
    {
        X2.GetComponent<Image>().sprite = SpriteX2;
        X2.interactable = false;
        X3.GetComponent<Image>().sprite = SpriteX3;
        X3.interactable = false;
    }
    public void ShowAds(string nameAds)
    {
        if (Advertisement.isInitialized)
        {
            Advertisement.Show(nameAds);
        }

        HideButton();

    }
}           

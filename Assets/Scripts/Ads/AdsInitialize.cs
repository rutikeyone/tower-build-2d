using AssemblyCSharp.Assets.Scripts.Levels;
using System;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.SceneManagement;

namespace AssemblyCSharp.Assets.Ads
{
    public class AdsInitialize : MonoBehaviour
    {
        private BaseLevel Base;
        public void Start()
        {
            if (!Advertisement.isInitialized)
            {
                Base = new BaseLevel();
                Advertisement.Initialize("3902229", false);
                Invoke("LoadMenu", 3f);
            }
        }
        
        public void LoadMenu()
        {
            Base.LoadMenu();
        }

        
    }
}

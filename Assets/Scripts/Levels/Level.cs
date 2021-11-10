using System;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace AssemblyCSharp.Assets.Scripts.Levels
{
    public class Level : MonoBehaviour
    {
        private BaseLevel Base;

        public void Start()
        {
            Base = new BaseLevel();
        }
        public void LoadInfinityLevel()
        {
            Base.LoadInfinity();
        }

        public void LoadMenu()
        {
            Base.LoadMenu();
        }
    }
}

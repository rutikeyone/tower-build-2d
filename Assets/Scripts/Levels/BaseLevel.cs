using UnityEngine;
using UnityEngine.SceneManagement;

namespace AssemblyCSharp.Assets.Scripts.Levels
{
    public class BaseLevel
    {
        public void LoadInfinity()
        {
            Time.timeScale = 1;
            SceneManager.LoadScene(2);
        }

        public void LoadMenu()
        {
            SceneManager.LoadScene(1);
        }
    }
}

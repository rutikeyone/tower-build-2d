using UnityEngine;

namespace AssemblyCSharp.Assets.Scripts.Buttons
{
    [SerializeField]
    abstract class ShowHidden : MonoBehaviour
    {
        public GameObject Play;

        public GameObject Quit;

        public GameObject NameGame;

        public GameObject Data;

        public GameObject AboutMe;

        public abstract void Show();
        public abstract void Hidden();
    }
}

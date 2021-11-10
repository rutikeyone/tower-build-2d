using System;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts
{
    class Score : MonoBehaviour
    {
        public Text Text;
        public Text ScoreText;

        private TextOfTheFloors TextFloor;
        public GameObject TextOfFloor;

        void Start()
        {
            TextFloor = TextOfFloor.GetComponent<TextOfTheFloors>();
            TextFloor.EventRecord.AddListener(GetMultiply);
            GetText();
        }

        private void GetText()
        {
            ScoreText.text = Text.text;
        }

        public void GetMultiply(int result)
        {
            ScoreText.text = result.ToString();
        }
    }
}

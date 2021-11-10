using AssemblyCSharp.Assets.Scripts.Crane;
using System;
using UnityEngine;

namespace Assets.Scripts.Crane
{
    class FullCrane : MonoBehaviour
    {
        public Camera Camera; 

        private int SpeedUp = 4;
        public void MoveUp()
        {
            Camera.transform.Translate(Vector2.up * SpeedUp * Time.deltaTime);
            transform.Translate(Vector2.up * SpeedUp * Time.deltaTime);
        }
    }
}

using System;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.Points
{
    class PointLeft : MonoBehaviour
    {
        public UnityEvent EventLeft;
        private void OnTriggerEnter2D(Collider2D col)
        {
            if (col.tag.Equals("Crane"))
            {
                EventLeft?.Invoke();
            }
        }
    }
}

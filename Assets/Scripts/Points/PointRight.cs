using System;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.Points
{
    class PointRight : MonoBehaviour
    {
        public UnityEvent EventRight;
        private Collider2D Collider;

        private void Start()
        {
           Collider = gameObject.GetComponent<BoxCollider2D>();
        }
        private void OnTriggerEnter2D(Collider2D col)
        {
            if (col.tag.Equals("Crane"))
            {
                EventRight?.Invoke();
            }
        }

        //Выключаем коллайдер
        public void TurnOff()
        {
            Collider.enabled = false;
        }
        //Включаем коллайдер
        public void TurnOn()
        {
            Collider.enabled = true;
        }
    }
}

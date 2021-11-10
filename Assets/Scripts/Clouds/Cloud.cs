using System;
using System.Drawing;
using UnityEngine;
using UnityEngine.Events;

namespace AssemblyCSharp.Assets.Scripts.Clouds
{
    //Данный класс будет отвечать за движение и уничтожение
    public class Cloud : MonoBehaviour
    {
        private float Speed = 1.5f;

        private void FixedUpdate()
        {
            Move();
        }

        public void Move()
        {
            transform.Translate(Vector2.left * Speed * Time.deltaTime); // Говнокодарь использующий transform
        }

        private void OnBecameInvisible()
        {
            Destroy(gameObject); 
        }


    }
}

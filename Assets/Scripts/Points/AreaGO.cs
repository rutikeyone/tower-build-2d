using Assets.Scripts.Building;
using System;
using UnityEngine;
using UnityEngine.Events;

namespace AssemblyCSharp.Assets.Scripts.Points
{
    //Класс который описывает точки которые решают закончилась ли игра
    public class AreaGO : MonoBehaviour
    {
        public UnityEvent EventGO;

        private void OnTriggerStay2D(Collider2D col)
        {
            if (col.gameObject.tag == "Building")
            {
                EventGO?.Invoke();
            }
        }

        public void ChangeHeightCollider()
        {
            gameObject.GetComponent<BoxCollider2D>().offset = new Vector2(0f, gameObject.GetComponent<BoxCollider2D>().offset.y - 1.5f);
            gameObject.GetComponent<BoxCollider2D>().size = new Vector2(1, gameObject.GetComponent<BoxCollider2D>().size.y + 3f);
        }
    }
}

using System;
using UnityEngine;
using UnityEngine.Events;

namespace Assets.Scripts.Points
{
    class PointSpawn : MonoBehaviour
    {
        public UnityEvent EventSpawn;
        private void OnTriggerEnter2D(Collider2D col)
        {
            if (col.tag.Equals("Crane"))
            {
                EventSpawn?.Invoke();
            }
        }
    }
}

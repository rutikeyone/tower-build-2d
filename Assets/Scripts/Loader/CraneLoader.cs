using AssemblyCSharp.Assets.Scripts.Crane;
using System;
using UnityEngine;
using UnityEngine.Events;

namespace AssemblyCSharp.Assets.Scripts.Loader
{
    public class CraneLoader : MonoBehaviour
    {
        private bool IsRight = true;
        private bool IsLeft = false;

        public UnityEvent MoveRight;
        public UnityEvent MoveLeft;

        public void Update()
        {
            ManagerMove();
        }


        public void ManagerMove()
        {
            if(IsRight && !IsLeft)
            {
                Move(StateCrane.Right);
            }

            if(!IsRight && IsLeft)
            {
                Move(StateCrane.Left);
            }
        }

        public void Move(StateCrane state)
        {
            switch (state)
            {
                case StateCrane.Left:
                    MoveLeft?.Invoke();
                    break;
                case StateCrane.Right:
                    MoveRight?.Invoke();
                    break;
            }
        }


        public void SetLeft()
        {
            IsRight = false;
            IsLeft = true;
        }

        public void SetRight()
        {
            IsRight = true;
            IsLeft = false;
        }
    }
}

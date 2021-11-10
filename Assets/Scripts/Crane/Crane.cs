using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace AssemblyCSharp.Assets.Scripts.Crane
{
    public enum StateCrane
    {
        Left,
        Right,
        Spawn,
        Up
    }

    public class Crane : MonoBehaviour
    {

        [SerializeField]
        //События
        public UnityEvent MoveRight; //Событие движение вправо
        public UnityEvent MoveLeft;//Событие движение влево
        public UnityEvent MoveSpawn; //Событие движение на спавн
        public UnityEvent MoveUp; //Событие движения вверх
        public UnityEvent ChangeSpeed; //Событие для изменения скорости крана

        //События для выключения коллайдера на точке справа
        public UnityEvent TurnOnPointRight;
        public UnityEvent TurnOffPointRight;



        //Состояния для определения в какую сторону двигаться крану
        private bool IsSpawnBuilding = false; //Заспавнен ли объект
        private bool IsLeft = true; //Двигается ли объект влево
        private bool IsRight = false; //Двигается ли объект вправо
        private bool IsUp = false; //Необходимо ли двигаться вверх
        private bool IsFirstTime = false; //Проверка первый раз ли запускатся игра

        public UnityEvent EventCollision;


        private void FixedUpdate()
        {
            ManagerMove();
        }

        //Метод для управления движением крана 
        private void ManagerMove()
        {
            if (!IsFirstTime)
            {
                if (!IsSpawnBuilding && (IsLeft || IsRight) && !IsUp) //Если объект не заспавнен и двигаемся влево или вправо то двигаемся в точку спавна 
                {
                    Move(StateCrane.Spawn);
                    TurnOffPointRight?.Invoke(); //Выключаем коллайдер
                }

                if (IsSpawnBuilding && !IsLeft && IsRight && !IsUp) //Если объект заспавнен то двигаемся вправо
                {
                    Move(StateCrane.Right);
                    TurnOnPointRight?.Invoke(); //Включаем коллайдер
                }

                if (IsSpawnBuilding && IsLeft && !IsRight && !IsUp) //Если объект заспавнен то двигаемся влево
                {
                    Move(StateCrane.Left);

                }

                if (IsUp && !IsSpawnBuilding)
                {
                    Move(StateCrane.Up);
                }
            }
        }

        public void Move(StateCrane state)
        {
            switch (state)
            {
                case StateCrane.Left:
                    MoveLeft.Invoke();
                    break;
                case StateCrane.Right:
                    MoveRight.Invoke();
                    break;
                case StateCrane.Spawn:
                    MoveSpawn.Invoke();
                    break;
                case StateCrane.Up:
                    MoveUp?.Invoke();
                    break;

            }
        }

        //Методы для манипуляций с состояниями
        public void SetSpawn()
        {
            IsSpawnBuilding = true;
            IsRight = false;
            IsLeft = true;
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

        public void SetTrueUp()
        {
            IsUp = true;
        }
        public void SetFalseUp()
        {
            IsUp = false;
        }

        //Отсоединение buiding от крана
        public void DetachmentBlock()
        {
            if (IsSpawnBuilding)
            {
                ChangeSpeed?.Invoke();
                IsUp = true;
                foreach (Transform Child in transform)
                {
                    Child.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                    Child.gameObject.tag = "Building";
                    IsSpawnBuilding = false;
                    EventCollision?.Invoke();
                }

            }
        }

        public void SetTrueFirstTime()
        {
            IsFirstTime = true;
        }

        public void SetFalseFirstTime()
        {
            IsFirstTime = false;
        }
    }
}

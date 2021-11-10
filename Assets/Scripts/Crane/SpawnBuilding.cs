using System;
using UnityEngine;

namespace AssemblyCSharp.Assets.Scripts.Crane
{
    public class SpawnBuilding : MonoBehaviour 
    {
        //Ссылки на префабы
        public GameObject BuildingOne;
        public GameObject BuildingTwo;
        public GameObject BuildingThree;
        public GameObject BuildingFour;
        public GameObject BuildingFive;
        public GameObject BuildingSix;
        public GameObject BuildingSeven;
        public GameObject BuildingEigth;
        public GameObject BuildingNine;
        public GameObject BuildingTen;
        public GameObject BuildingEleven;
        public GameObject BuildingTwelve;
        public GameObject BuildingThirteen;
        public GameObject BuildingFourteen;
        public GameObject BuildingFifteen;
        public GameObject BuildingSixteen;
        public GameObject BuildingSeventeen;
        public GameObject BuildingEighteen;
        //Массив из префабов где мы будем выбирать объекты
        private GameObject[,] ArrayBuildings;
        public Transform PointSpawn; //Точка для спавна building

        private Generator Generator; //Создаем объект генератора случайных чисел
        private int NumberArray; //Номер массива
        private int RandomNumber; //Будем получать случайное число 
        private int NumberOfFloors;

        public static event Action EventSpawn; //Событие для оповещения всех о спавне объекта, использую в UnlockRestartLevel

        private void Start()
        {
            NumberArray = (PlayerPrefs.GetInt("FirstRecord") + PlayerPrefs.GetInt("SecondRecord")) % 2;
            ArrayBuildings = new GameObject[2, 9] { { BuildingOne, BuildingTwo, BuildingThree, BuildingFour, BuildingFive, BuildingSix, BuildingSeven, BuildingEigth, BuildingNine }, { BuildingTen, BuildingEleven, BuildingTwelve, BuildingThirteen, BuildingFourteen, BuildingFifteen, BuildingSixteen, BuildingSeventeen, BuildingEighteen } };
            Generator = new Generator();
        }

        public void Spawn()
        {
            EventSpawn?.Invoke();
            RandomNumber = Generator.GenerateRandomNumber(NumberOfFloors);
            Instantiate(ArrayBuildings[NumberArray, RandomNumber], PointSpawn.transform.position, PointSpawn.transform.rotation);
        }

        public void SetNumberOfFloors()
        {
            NumberOfFloors += 1;
        }
    }
}

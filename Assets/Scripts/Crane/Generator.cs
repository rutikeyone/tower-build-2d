using System;


namespace AssemblyCSharp.Assets.Scripts.Crane
{
    class Generator
    {
        Random Random;

        public Generator()
        {
            Random = new Random();
        }
        public int GenerateRandomNumber(int numberOfFloors)
        {
            if (numberOfFloors < 10)
            {
                return Random.Next(0, 2);
            }
            else if (numberOfFloors > 10 && numberOfFloors <= 45)
            {
                return Random.Next(3, 5);
            }
            else if(numberOfFloors > 45)
            {
                return Random.Next(6, 8);
            }
            return 1; //Такое себе решение 
        }

    }
}

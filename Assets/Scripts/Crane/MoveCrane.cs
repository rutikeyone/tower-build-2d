using UnityEngine;

namespace AssemblyCSharp.Assets.Scripts.Crane
{
    public class MoveCrane : MonoBehaviour
    {
        private float Speed { get; set; } = 4f;
        public void MoveRight(float coef)
        {
            transform.Translate(Vector2.right * Speed * coef * Time.deltaTime);
        }

        public void MoveLeft(float coef)
        {
            transform.Translate(Vector2.left * Speed * coef * Time.deltaTime);
        }

        [SerializeField]
        public void ChangeSpeed()
        {
            if(Speed < 10)
            {
                Speed += 0.2f;
            }

        }
    }
}

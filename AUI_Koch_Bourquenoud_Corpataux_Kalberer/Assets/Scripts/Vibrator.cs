using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace RDG
{
    public class Vibrator : MonoBehaviour
    {
        private void OnEnable()
        {
            EventManager.instance.OnUserGetWrong += MakeVibration;
        }

        private void OnDisable()
        {
            EventManager.instance.OnUserGetWrong -= MakeVibration;
        }

        public void MakeVibration()
        {

            Vibration.VibratePredefined(1);

        }
    }
}

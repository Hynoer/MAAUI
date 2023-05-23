using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleDots : MonoBehaviour
{
    public void onToggleUpdate(bool a_isToggle){
        EventManager.instance.OnUserClickOnDots(a_isToggle);
    }
}

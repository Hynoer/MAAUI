using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleState : MonoBehaviour
{
    public void onToggleUpdate(bool a_isToggle){
        EventManager.instance.OnUserClickOnState(a_isToggle);
    }
}

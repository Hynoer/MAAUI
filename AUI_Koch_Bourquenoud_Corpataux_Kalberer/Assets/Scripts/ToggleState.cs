using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ToggleState : MonoBehaviour
{
    public void onToggleUpdate(bool a_isToggle){
        EventManager.instance.OnUserClickOnState(a_isToggle);
    }

    public void onToggleTouch()
    {
        this.GetComponent<Toggle>().isOn = !this.GetComponent<Toggle>().isOn;
    }
}

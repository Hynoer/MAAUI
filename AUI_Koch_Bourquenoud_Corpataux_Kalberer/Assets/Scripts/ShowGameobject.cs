using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowGameobject : MonoBehaviour
{

    private bool toggle = false;
    public void ShowGameObjectOnClick() {

        EventManager.instance.OnClickButton();


    }
}

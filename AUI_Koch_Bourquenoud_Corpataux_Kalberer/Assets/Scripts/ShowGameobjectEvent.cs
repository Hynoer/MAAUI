using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowGameobjectEvent : MonoBehaviour
{


    private bool toggle = false;

    private void OnEnable()
    {
        EventManager.instance.OnUserClickButton += ShowGameObjectOnClick;
    }

    private void OnDisable()
    {
        EventManager.instance.OnUserClickButton -= ShowGameObjectOnClick;

    }


    public void ShowGameObjectOnClick()
    {

        this.gameObject.GetComponent<Image>().enabled = toggle;
        toggle = !toggle;


    }
}

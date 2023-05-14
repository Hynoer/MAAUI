using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Env;

public class ChangeNumber : MonoBehaviour
{

    public int number = 0;
    public NumberMarker orderNumber;

    public void TapNumber() {
        number = (number + 1) % 10;
        this.GetComponentInChildren<TextMeshPro>().text = number.ToString();
        EventManager.instance.OnMarkerNumberUpdate(orderNumber,number);
    
    }
}

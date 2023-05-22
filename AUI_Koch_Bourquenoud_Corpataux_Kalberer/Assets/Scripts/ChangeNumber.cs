using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Env;

public class ChangeNumber : MonoBehaviour
{
    public GameObject[] List3DPrefabs;
    public GameObject[] List3DPrefabsDots;

    public int number = 0;
    public NumberMarker orderNumber;

    public void TapNumber() {
        List3DPrefabs[number].SetActive(false);
        number = (number + 1) % 19;
        List3DPrefabs[number].SetActive(true);
        EventManager.instance.OnMarkerNumberUpdate(orderNumber,number);
    
    }
}

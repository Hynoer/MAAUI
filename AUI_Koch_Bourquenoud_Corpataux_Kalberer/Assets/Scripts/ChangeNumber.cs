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

    public bool isDots = true;

    private void OnEnable()
    {
         EventManager.instance.OnUpdateDots += onDotUpdate;
    }

    private void OnDisable()
    {
        EventManager.instance.OnUpdateDots -= onDotUpdate;
    }

    public void TapNumber() {

        /*foreach (var nb in List3DPrefabs)
        {
            nb.SetActive(false);
        }

        foreach (var nb in List3DPrefabsDots)
        {
            nb.SetActive(false);
        }

        number = (number + 1) % 19;
        if (isDots)
        {
            List3DPrefabsDots[number].SetActive(true);
        }
        else {
            List3DPrefabs[number].SetActive(true);
        }

        EventManager.instance.OnMarkerNumberUpdate(orderNumber,number);*/

        foreach (var nb in List3DPrefabs)
        {
            nb.SetActive(false);
        }

        number = (number + 1) % 19;
        List3DPrefabs[number].SetActive(true);

        EventManager.instance.OnMarkerNumberUpdate(orderNumber,number);

    
    }


    public void onDotUpdate(bool a_isShow){
        foreach (var nb in List3DPrefabsDots)
        {
            nb.SetActive(a_isShow);
        }
    }
}

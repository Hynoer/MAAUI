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

    private Color currentColor = Color.blue;

    private void OnEnable()
    {
        EventManager.instance.OnUpdateDots += onDotUpdate;
        EventManager.instance.OnMarkerNumberUpdate += onUpdateNumber;
        EventManager.instance.OnChangeColor += ChangeColor;

        number = GameManager.instance.NumberValue(orderNumber);
        UpdateVIew();
    }

    private void OnDisable()
    {
        EventManager.instance.OnUpdateDots -= onDotUpdate;
        EventManager.instance.OnMarkerNumberUpdate -= onUpdateNumber;
        EventManager.instance.OnChangeColor -= ChangeColor;
    }
    public void TapNumber() {

        if (orderNumber == NumberMarker.result)
        {
            number = ((number + 1) % 19);
            EventManager.instance.OnMarkerNumber(orderNumber, number, false);
        }
        else
        {
            if (GameManager.instance.currentGameState != GameManager.GameState.game) {
                number = ((number + 1) % 10);
                EventManager.instance.OnMarkerNumber(orderNumber, number, false);
            }
        }


    }

    private void onUpdateNumber(NumberMarker a_marker, int a_newNumber, bool a_isForce) {
        
        if (a_marker != orderNumber) {
            return;
        }

        number = a_newNumber;

        UpdateVIew();
    }

    private void UpdateVIew() {
        foreach (var nb in List3DPrefabs)
        {
            nb.SetActive(false);
        }

        List3DPrefabs[number].transform.Find("model/number").GetComponent<MeshRenderer>().material.color = currentColor;
        if (List3DPrefabs[number].transform.Find("model/number2") != null)
        {
            List3DPrefabs[number].transform.Find("model/number2").GetComponent<MeshRenderer>().material.color = currentColor;

        }
        List3DPrefabs[number].SetActive(true);

    }

    public void onDotUpdate(bool a_isShow){
        foreach (var nb in List3DPrefabsDots)
        {
            nb.SetActive(a_isShow);
        }
    }

    private void ChangeColor(Color a_color) {

        currentColor = a_color;
        UpdateVIew();
    }
}

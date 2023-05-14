using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Env;

public class ChangeOperator : MonoBehaviour
{
    public OperatorMarker operatorMarker;
    public GameObject plusGO;
    public GameObject minusGO;


    public void TapOperator() {
        switch (operatorMarker) {
            case OperatorMarker.minus:
                operatorMarker = OperatorMarker.plus;
                ShowVisuel(true);
                break;
            case OperatorMarker.plus:
                operatorMarker = OperatorMarker.minus;
                ShowVisuel(false);
                break;
            default:
                break;
        }

        EventManager.instance.OnMarkerOperator(operatorMarker);
    
    }

    private void ShowVisuel(bool a_showPlus) {
        plusGO.SetActive(a_showPlus);
        minusGO.SetActive(!a_showPlus);

    }

}

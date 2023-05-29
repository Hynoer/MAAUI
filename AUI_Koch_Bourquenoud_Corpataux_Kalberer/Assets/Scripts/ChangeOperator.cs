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

    private void OnEnable()
    {
        EventManager.instance.OnOperatorUpdate += ShowVisuel;
    }

    private void OnDisable()
    {
        EventManager.instance.OnOperatorUpdate -= ShowVisuel;
    }
    public void TapOperator() {
        switch (operatorMarker) {
            case OperatorMarker.minus:
                operatorMarker = OperatorMarker.plus;
                break;

            case OperatorMarker.plus:
                operatorMarker = OperatorMarker.minus;
                break;

            default:
                break;
        }

        EventManager.instance.OnMarkerOperator(operatorMarker, false);
    
    }


    private void ShowVisuel(OperatorMarker a_marker, bool a_isAuto) {
        plusGO.SetActive(a_marker == OperatorMarker.plus);
        minusGO.SetActive(a_marker == OperatorMarker.minus);

    }

}

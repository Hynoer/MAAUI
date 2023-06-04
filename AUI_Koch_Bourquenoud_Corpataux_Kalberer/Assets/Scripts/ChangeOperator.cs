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
        EventManager.instance.OnOperatorUpdate += onUpdateOperator;
    }

    private void OnDisable()
    {
        EventManager.instance.OnOperatorUpdate -= onUpdateOperator;
    }
    public void TapOperator() {

        if (GameManager.instance.currentGameState != GameManager.GameState.game)
        {
            switch (operatorMarker)
            {
                case OperatorMarker.minus:
                    operatorMarker = OperatorMarker.plus;
                    break;

                case OperatorMarker.plus:
                    operatorMarker = OperatorMarker.minus;
                    break;

                default:
                    break;
            }

        }

        EventManager.instance.OnMarkerOperator(operatorMarker, false);

    }
    private void onUpdateOperator(OperatorMarker a_marker, bool a_isAuto)
    {

        operatorMarker = a_marker;
        ShowVisuel(a_marker, a_isAuto);
    }

    private void ShowVisuel(OperatorMarker a_marker, bool a_isAuto) {
        plusGO.SetActive(a_marker == OperatorMarker.plus);
        minusGO.SetActive(a_marker == OperatorMarker.minus);

    }

}

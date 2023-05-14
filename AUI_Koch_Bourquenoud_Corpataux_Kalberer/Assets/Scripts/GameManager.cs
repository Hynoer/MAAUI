using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class GameManager : MonoBehaviour
{

    public static GameManager instance;

    private int firstNumber;
    private int secondNumber;
    private int resultNumber;
    private OperatorMarker operation;


    #region INIT
    void Awake()
    {
        if (instance)
        {
            DestroyImmediate(gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(gameObject);
    }
    #endregion
    private void OnEnable()
    {
         EventManager.instance.OnMarkerNumberUpdate += NumberMarkerUpdate;
         EventManager.instance.OnOperatorUpdate += OperatorMarkerUpdate;
         EventManager.instance.OnUserClickResult += checkResult;
    }

    private void OnDisable()
    {
        EventManager.instance.OnMarkerNumberUpdate -= NumberMarkerUpdate;
        EventManager.instance.OnOperatorUpdate -= OperatorMarkerUpdate;
        EventManager.instance.OnUserClickResult -= checkResult;
    }

    // Start is called before the first frame update
    void Start()
    {
    }
    void checkResult() {

        isResultOk();


    }
    bool isResultOk() {
        switch (operation)
        {
            case OperatorMarker.plus:
                return (firstNumber + secondNumber) == resultNumber;
                break;
            case OperatorMarker.minus:
                return (firstNumber - secondNumber) == resultNumber;
                break;
            default:
                return false;
                break;

        }


    }

    void OperatorMarkerUpdate(OperatorMarker a_marker)
    {
        operation = a_marker;
    }
    void NumberMarkerUpdate(NumberMarker a_marker, int a_newNumber)
    {
        switch (a_marker) {
            case NumberMarker.first:
                firstNumber = a_newNumber;
                break;
            case NumberMarker.second:
                secondNumber = a_newNumber;
                break;
            case NumberMarker.result:
                resultNumber = a_newNumber;
                break;
            default:
                break;

        }
    }
}
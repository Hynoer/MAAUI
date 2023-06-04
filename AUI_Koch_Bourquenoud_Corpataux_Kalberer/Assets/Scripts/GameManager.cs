using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static Env;

public class GameManager : MonoBehaviour
{

    public static GameManager instance;

    public int firstNumber = 0;
    public int secondNumber = 0;
    public int resultNumber = 0;

    private int firstBase = 0;
    private int secondBase = 0;

    private OperatorMarker operation;

    private GameObject StreakPanel;
    private GameObject NextPanel;

    public enum GameState { free, game };
    public GameState currentGameState = GameState.game;

    public GameObject PanelPlus;
    public GameObject PanelMinus;

    private int streak = 0;

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
         EventManager.instance.OnUserClickResult += checkResult;
         EventManager.instance.OnUpdateState += UpdateState;
         EventManager.instance.OnUserWantReset += UserReset;
    }

    private void OnDisable()
    {
        EventManager.instance.OnMarkerNumberUpdate -= NumberMarkerUpdate;
        EventManager.instance.OnUserClickResult -= checkResult;
        EventManager.instance.OnUpdateState -= UpdateState;
        EventManager.instance.OnUserWantReset -= UserReset;
    }

    // Start is called before the first frame update
    void Start()
    {
        NextPanel = GameObject.Find("UI").transform.Find("Next").gameObject;
        NextPanel.SetActive(false);
        StreakPanel = GameObject.Find("UI").transform.Find("Winstreak").gameObject;
        StreakPanel.SetActive(false);

    }

    void UpdateState(bool isFreeState) {
        if (isFreeState)
        {
            currentGameState = GameState.free;
            //slove
            NumberMarkerUpdate(NumberMarker.result, getResult(), true);
        }
        else {
            currentGameState = GameState.game;
            //gernerate
            GenerateCalcule();
        }
    
    
    }

    void checkResult() {

        if (isResultOk())
        {
            streak = streak + 1;
            StreakPanel.GetComponentInChildren<TextMeshProUGUI>().text = streak.ToString();
            StreakPanel.SetActive(true);
            NextPanel.SetActive(true);
            //Green color
            EventManager.instance.OnColorChange(Color.green);
        }
        else {

            //Red color
            streak = 0;
            EventManager.instance.OnColorChange(Color.red);
            EventManager.instance.OnGetWrong();

    
        }

    }

    bool isResultOk() {
        switch (operation)
        {
            case OperatorMarker.plus:
                return (firstNumber + secondNumber) == resultNumber;

            case OperatorMarker.minus:
                return (firstNumber - secondNumber) == resultNumber;

            default:
                return false;
        }
        
    }

    int getResult() {
        switch (operation)
        {
            case OperatorMarker.plus:
                return (firstNumber + secondNumber);

            case OperatorMarker.minus:
                return (firstNumber - secondNumber);

            default:
                return 0;
        }

    }

    public void OperatorMarkerUpdate(OperatorMarker a_marker, bool a_isAuto)
    {
        if (!a_isAuto) {
            operation = a_marker;

            PanelPlus.SetActive(a_marker == OperatorMarker.plus);
            PanelMinus.SetActive(a_marker == OperatorMarker.minus);
        }
    }

    void NumberMarkerUpdate(NumberMarker a_marker, int a_newNumber, bool a_isForce)
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

    public void GenerateCalcule() {
        if (currentGameState == GameState.free) {
            return;
        }
        bool isAdd = Random.Range(0, 11) > 5;
        if (isAdd)
        {
            operation = OperatorMarker.plus;
            firstNumber = Random.Range(0, 10);
            secondNumber = Random.Range(0, 10);

        }
        else
        {
            operation = OperatorMarker.minus;
            firstNumber = Random.Range(5, 10);
            secondNumber = Random.Range(0, firstNumber);

        }

        EventManager.instance.OnOperatorUpdate(operation, true);
        EventManager.instance.OnMarkerNumber(NumberMarker.first, firstNumber, true);
        EventManager.instance.OnMarkerNumber(NumberMarker.second, secondNumber, true);
        EventManager.instance.OnMarkerNumber(NumberMarker.result, 0, true);

        EventManager.instance.OnColorChange(Color.blue);

        firstBase = firstNumber;
        secondBase = secondNumber;

    }

    private void UserReset()
    {

        EventManager.instance.OnMarkerNumber(NumberMarker.result, 0, true);
    }

    public int NumberValue(NumberMarker a_marker)
    {
        switch (a_marker)
        {
            case NumberMarker.first:
                return firstNumber;

            case NumberMarker.second:
                return secondNumber;

            case NumberMarker.result:
                return resultNumber;

            default:
                return 0;
        }
    }
}
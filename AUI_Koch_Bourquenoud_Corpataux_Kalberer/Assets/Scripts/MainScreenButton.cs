using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class MainScreenButton : MonoBehaviour
{
    public MainScreenAction currentAction;


    public void TapMainScreenButton()
    {
        this.GetComponent<Animator>().SetTrigger("Pressed");
        GameObject.Find("UI/Main").SetActive(false);
        GameManager.instance.GenerateCalcule();
    }
}

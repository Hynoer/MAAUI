using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class MainScreenButton : MonoBehaviour
{
    public MainScreenAction currentAction;


    public void TapMainScreenButton()
    {
        //EventManager.instance.OnOperatorUpdate(currentAction);
        this.GetComponent<Animator>().SetTrigger("Pressed");
        Debug.Log(currentAction);
    }
}

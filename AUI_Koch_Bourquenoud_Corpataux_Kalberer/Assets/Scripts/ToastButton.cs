using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class ToastButton : MonoBehaviour
{
    public void TapToastButton()
    {
        //EventManager.instance.OnOperatorUpdate(currentAction);
        this.GetComponent<Animator>().SetTrigger("Pressed");
        this.transform.parent.gameObject.SetActive(false);
        Debug.Log("clicked");
    }
}

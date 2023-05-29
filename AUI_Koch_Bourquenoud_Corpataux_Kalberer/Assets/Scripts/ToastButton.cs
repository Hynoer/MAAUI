using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class ToastButton : MonoBehaviour
{

    public ToastAction crtAction;
    public void TapToastButton()
    {
        switch (crtAction) {
            case ToastAction.ok:

                this.transform.parent.gameObject.SetActive(false);
                break;
            case ToastAction.next:

                this.transform.parent.gameObject.SetActive(false);
                GameManager.instance.GenerateCalcule();
                break;
            default:

                break;
        }
        this.transform.parent.gameObject.SetActive(false);
    }
}

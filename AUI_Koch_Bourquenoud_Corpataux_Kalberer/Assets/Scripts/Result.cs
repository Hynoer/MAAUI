using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class Result: MonoBehaviour
{

    public void TapResult()
    {
        EventManager.instance.OnClickResult();

    }
}

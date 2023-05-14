using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Env;

public class Result: MonoBehaviour
{

    public void TapNumber()
    {
        EventManager.instance.OnClickResult();

    }
}

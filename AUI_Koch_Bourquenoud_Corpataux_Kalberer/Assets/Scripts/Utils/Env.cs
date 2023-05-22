using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Env 
{
    public enum NumberMarker { first, second, result };
    public enum OperatorMarker { plus, minus };

    public enum MainScreenAction { start, help, exit };

    public static string DatabaseName = "abcdef.db";
}

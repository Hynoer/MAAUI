using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public static GameManager instance;

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
        // EventManager.instance.OnUserAddIdlas += AddIdlasToYour;
    }

    private void OnDisable()
    {
        //EventManager.instance.OnUserAddIdlas -= AddIdlasToYour;

    }

    // Start is called before the first frame update
    void Start()
    {
    }
}
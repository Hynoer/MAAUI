using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ChangeNumber : MonoBehaviour
{

    public int number = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TapNumber() {
        number = (number + 1) % 9;
        this.GetComponentInChildren<TextMeshPro>().text = number.ToString();
    
    
    }
}

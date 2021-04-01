using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;

public class Ayarlar : MonoBehaviour
{
    int w, h;
    int ilkmi = 0;
    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate=30;
        w = PlayerPrefs.GetInt("width");
        h = PlayerPrefs.GetInt("height");
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        ilkmi = PlayerPrefs.GetInt("ilks");
        if (ilkmi == 0) { 
            Screen.SetResolution(w / 2, h / 2, true);
            PlayerPrefs.SetInt("ilks", 1);
        }
    }
    
    // Update is called once per frame
    
}

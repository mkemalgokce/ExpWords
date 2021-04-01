using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyBomb : MonoBehaviour
{
    public float x;
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, x);
    }

   
}

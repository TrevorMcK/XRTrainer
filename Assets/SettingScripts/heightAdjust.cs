using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
public class heightAdjust : MonoBehaviour
{
    // Start is called
    // before the first frame update
    [SerializeField] Slider heightSlider;
    [SerializeField] private float defaultHeight = 1.8f;
    [SerializeField] private Camera main_camera;
    
  

    public void Resize()
    {

        float headHeight = main_camera.transform.localPosition.y;
        float z_location = main_camera.transform.localPosition.z;
        float x_location = main_camera.transform.localPosition.x;
        float scale = defaultHeight / headHeight;

        main_camera.transform.position = new Vector3(x_location, scale * heightSlider.value, z_location);
        Save();


    }


    private void Save()
    {
        PlayerPrefs.SetFloat("height_scalar", heightSlider.value);
    }
    private void Load()
    {
        heightSlider.value = PlayerPrefs.GetFloat("height_scalar");
    }
   

}


  

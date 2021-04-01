using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System;
public class button_Script : MonoBehaviour
{
    public Text infoText;
    public GameObject info;
    public int ilkdefaoyun = 0;
    public static int wait=0;
    public Text gold_Sayisi_txt;
    public Text can_Sayisi_txt;
    private double timeRemaining;
    public Text error_text;
    public GameObject c1;
    public GameObject c2;
    public GameObject c3;
    public GameObject c4;
    public Sprite lang1;
    public Sprite lang2;
    public static string time;
    public static bool lang;
    public GameObject langImage;
	// Start is called before the first frame update
    private double getsTime(){
        long temp = Convert.ToInt64(PlayerPrefs.GetString("date"));
        DateTime oldDate = DateTime.FromBinary(temp);
		TimeSpan diff = DateTime.Now - oldDate;
		double seconds = diff.TotalSeconds;
		return seconds;
		
	}
	private void Start()
	{
        if(PlayerPrefs.GetInt("info2")==0)
            infoText.text = "Verilen her kelime cevap ile bağlantılıdır.Verilen kelimeye göre alakasız harfleri patlatarak uygun kelimeyi bulun.";
        else
            infoText.text = "Each word given is linked to the answer. Find the appropriate word by popping the irrelevant letters according to the given word.";
        ilkdefaoyun = PlayerPrefs.GetInt("ilkmi");
        if (ilkdefaoyun == 0)
        {
            PlayerPrefs.SetInt("canlar", 5);

        }
        if (ilkdefaoyun == 0)
        {
            PlayerPrefs.SetInt("ilkmi", 1);
        }
        if (maingamesc.restart_mi_basildi == true)
        {
            c1.SetActive(false);
            c2.SetActive(true);
        }
        
        

    }
    private void Update()
	{
        if(Time.frameCount %2 == 0){
            gold_Sayisi_txt.text = PlayerPrefs.GetInt("gold").ToString();
            can_Sayisi_txt.text = PlayerPrefs.GetInt("canlar").ToString();
        }
        if(PlayerPrefs.GetInt("canlar") == 0){
            timeRemaining = 5*60 - getsTime();
            if (timeRemaining > 1)
			{
                timeRemaining -= Time.deltaTime;
                PlayerPrefs.SetFloat("time",Convert.ToSingle(timeRemaining));
                
				
			}
			else{
                PlayerPrefs.SetInt("canlar",1);
				SceneManager.LoadScene(SceneManager.GetActiveScene().name);
				
				
				
			}
        }
        
    }
	public void start_Button()
	{

        c1.SetActive(false);
        c3.SetActive(false);
        c4.SetActive(false);
        c2.SetActive(true);

    }
    public void options_Button()
	{
        c1.SetActive(false);
        c2.SetActive(false);
        c3.SetActive(false);
        c4.SetActive(true);
        if(PlayerPrefs.GetInt("lang") == 1)
		{
            langImage.GetComponent<Image>().sprite = lang1;
        }
	}
    public void market_Button()
	{
        c1.SetActive(false);
        c4.SetActive(false);
        c2.SetActive(false);
        c3.SetActive(true);
        
    }
    public void lang_Button()
    {
        
        if (PlayerPrefs.GetInt("lang") == 0)
        {
            langImage.GetComponent<Image>().sprite = lang1;
            PlayerPrefs.SetInt("lang", 1);
            PlayerPrefs.SetInt("info2",1);
        }
        else
        {
            langImage.GetComponent<Image>().sprite = lang2;
            PlayerPrefs.SetInt("info2",0);
            PlayerPrefs.SetInt("lang", 0);
        }
    }
    public void back_Button()
	{
        c3.SetActive(false);
        c4.SetActive(false);
        c1.SetActive(true);
        error_text.text="";
        if(PlayerPrefs.GetInt("info2")==0)
            infoText.text = "Verilen her kelime cevap ile bağlantılıdır.Verilen kelimeye göre alakasız harfleri patlatarak uygun kelimeyi bulun.";
        else
            infoText.text = "Each word given is linked to the answer. Find the appropriate word by popping the irrelevant letters according to the given word.";
	}
    public void back_Button2()
	{
        c1.SetActive(true);
        c2.SetActive(false);
        maingamesc.restart_mi_basildi = false;
}
    
 
    public void gold_rocket_button()
	{
		if (maingamesc.gold >= 300)
		{
            PlayerPrefs.SetInt("bombaturu",3);
            maingamesc.gold -= 300;
        }
        else if (maingamesc.gold < 300)
		{
            error_text.text = "Low Balance";

        }
	}

    public void infoButton(){
        if (PlayerPrefs.GetInt("info") == 0)
        {
            info.SetActive(true);
            PlayerPrefs.SetInt("info", 1);
            
        }
        else
        {
            info.SetActive(false);
            PlayerPrefs.SetInt("info", 0);
        }
    }
    
}

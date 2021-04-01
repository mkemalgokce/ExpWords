using System.Collections;
using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
public class maingamesc : MonoBehaviour
{
	private float bosluky = 130f;
	private float boslukx = 120f;
	public GameObject loss_pnl;
	public Text time_txt;
	public Text ekran_Can;
	public Text Gold_text;
	public Text text_soru;
	public static int candegeri = 5;
	word sorular;
	public  GameObject animation1;
	public  GameObject animation2;
	public  GameObject animation3;
	public  GameObject animation4;
	public  GameObject animation5;
	public GameObject c2;
	private static int level;
	public GameObject[] harfler;
	public List<GameObject> ekranHarfler = new List<GameObject>();
	public List<GameObject> clonedObjects = new List<GameObject>();
	Vector3 pos = new Vector3(-350f, 150f, 1);
	public static int gold = 0;
	private string sonHarfler;
	public static bool restart_mi_basildi = false;
	
	IEnumerator TimerRoutine(float time)
	{
		if (sonHarfler.ToUpper() == sorular.cevaplar[level])
		{
			level++;
			gold++;
			PlayerPrefs.SetInt("levels", level);
			PlayerPrefs.SetInt("gold", gold);
			PlayerPrefs.SetInt("gecti",1);
			restart_mi_basildi = true;
			yield return new WaitForSeconds(time);
			Gold_text.text = gold.ToString();
			c2.SetActive(false);
			c2.SetActive(true);
			
		
		}
		else
		{
			yield return new WaitForSeconds(time);
			RestartGame();
		}

	}
	public void RestartGame()
	{
		
		restart_mi_basildi = true;
		candegeri--;
		PlayerPrefs.SetInt("canlar", candegeri);
		if(candegeri == 0){
			PlayerPrefs.SetString("date", System.DateTime.Now.ToBinary().ToString());
		}
		c2.SetActive(false);
		c2.SetActive(true);
		
	}
	public void Onayla()
	{
		PlayerPrefs.SetInt("gecti",0);
		StartCoroutine(TimerRoutine(0.2f));
	}
	private IEnumerator waits(GameObject a, string lastharfler2)
	{
		a.SetActive(false);
		yield return new WaitForSeconds(1f);
		for (int j = ekranHarfler.Count - 1; ekranHarfler.IndexOf((a)) <= j; j--)
		{
			if (j == 0)
			{
				continue;
			}
			ekranHarfler[j].transform.localPosition = ekranHarfler[j - 1].transform.localPosition;
		}
		ekranHarfler.Remove(a);
		for (int i = 0; i < ekranHarfler.Count; ++i)
		{
			lastharfler2 += ekranHarfler[i].name;
		}
		sonHarfler = lastharfler2;


	}
	private void OnEnable(){
		loss_pnl.SetActive(false);
		pos = new Vector3(-350f, 150f, 1);
		level = PlayerPrefs.GetInt("levels");
		candegeri = PlayerPrefs.GetInt("canlar");
		if(candegeri == 0){
			print("Can 0 ");
			loss_pnl.SetActive(true);
		}
		sorular = gameObject.AddComponent<word>();
		if (PlayerPrefs.GetInt("lang") == 1)
		{
			sorular.sorular = sorular.ing_sorular;
			sorular.cevaplar = sorular.ing_cevaplar;
			sorular.ekran = sorular.ing_ekran;
		}
		text_soru.text = sorular.sorular[level];
		if(PlayerPrefs.GetInt("bombaturu") == 0)
		{
			for (int i = 0; i < harfler.Length; ++i)
			{
				print(harfler[i].name);
				harfler[i].GetComponent<Image>().sprite = Resources.Load<Sprite>($"Normal/{harfler[i].name}");
				harfler[i].transform.localScale = new Vector3(1.3f, 1.3f, 1);
				bosluky = 130f;
			}
			animation1 =animation5;

		}
		if (PlayerPrefs.GetInt("bombaturu") == 1)
		{
			for (int i = 0; i < harfler.Length; ++i)
			{
				harfler[i].GetComponent<Image>().sprite = Resources.Load<Sprite>($"Dinamit/{harfler[i].name}");
				harfler[i].transform.localScale = new Vector3(1f,2f , 1);
				bosluky = 160f;
			}

			animation1 =animation2;
		}
		if (PlayerPrefs.GetInt("bombaturu") == 2)
		{
			for (int i = 0; i < harfler.Length; ++i)
			{
				harfler[i].GetComponent<Image>().sprite = Resources.Load<Sprite>($"ElBombasi/{harfler[i].name}");
				harfler[i].transform.localScale = new Vector3(1.3f, 1.3f, 1);
			}

			animation1 = animation3;
		}
		if (PlayerPrefs.GetInt("bombaturu") == 3)
		{
			for (int i = 0; i < harfler.Length; ++i)
			{
				harfler[i].GetComponent<Image>().sprite = Resources.Load<Sprite>($"Fuze/{harfler[i].name}");
				harfler[i].transform.localScale = new Vector3(1, 2, 1);
				bosluky = 160f;
			}

			animation1 = animation4;
		}
		foreach (GameObject k in harfler) { k.SetActive(false); }
		for (int i = 0; i < sorular.ekran[level].Length; ++i)
		{
			for (int j = 0; j < harfler.Length; ++j)
			{
				if (sorular.ekran[level][i].ToString() == harfler[j].name)
				{
					if (ekranHarfler.Contains(harfler[j]))
					{
						GameObject clonedObject = (GameObject)Instantiate(harfler[j], transform.position, transform.rotation);
						clonedObject.transform.SetParent(harfler[0].transform.parent);

						if (PlayerPrefs.GetInt("bombaturu") == 0)
						{
							
							clonedObject.transform.localScale = new Vector3(1.3f, 1.3f, 1f);
						}
						else if (PlayerPrefs.GetInt("bombaturu") == 1)
						{
							
							clonedObject.transform.localScale = new Vector3(1f, 2f, 1);
						}
						else if (PlayerPrefs.GetInt("bombaturu") == 2)
						{
							
							clonedObject.transform.localScale = new Vector3(1.3f, 1.3f, 1);
						}
						else
						{
							
							clonedObject.transform.localScale = new Vector3(1f, 2f, 0.03f);
						}


						ekranHarfler.Add(clonedObject);
						clonedObjects.Add(clonedObject);
						continue;
					}
					ekranHarfler.Add(harfler[j]);



				}
			}
		}

		int q = 0;
		int as2 = 0;
		for (int i = 0; i < ekranHarfler.Count; ++i)
		{
			ekranHarfler[i].SetActive(true);
			ekranHarfler[i].transform.localPosition = pos;
			pos.Set(pos.x + boslukx, pos.y, pos.z);
			if (i > 5 & i <12)
			{
				pos.Set(-350f + q * boslukx, -1*bosluky+150f, pos.z);
				q++;
			}
			else if (i>12)
            {
				pos.Set(-350f + as2 * boslukx,-2* bosluky+150f, pos.z);
				as2++;
			}

		}

		foreach (GameObject x in ekranHarfler)
		{
			if (x.name.Contains("(Clone)"))
			{
				x.name = x.name.Replace("(Clone)", "");
				x.name = x.name.ToUpper();
			}
			sonHarfler += x.name;
		}

		loss_pnl.GetComponent<Transform>().SetAsLastSibling();
	}
	private void OnDisable(){
		for(int i =0 ; i< clonedObjects.Count;++i)
			Destroy(clonedObjects[i]);
		Destroy(sorular);
		ekranHarfler.Clear();
	}
	private void Update()
	{
		 //2 minutes
		ekran_Can.text = candegeri.ToString();
		gold = PlayerPrefs.GetInt("gold");
		Gold_text.text = gold.ToString();
		string lastharfler2 = "";
		if(candegeri == 0){
			print("0");
			UpdateLevelTimer(PlayerPrefs.GetFloat("time"));
		}
		else{
		//StartCoroutine(waitFunc(2));
			if (Input.GetMouseButtonDown(0))
			{
				Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
				Vector2 mousePos2D = new Vector2(mousePos.x, mousePos.y);
				RaycastHit2D hit = Physics2D.Raycast(mousePos2D, Vector2.zero);
				if (hit.collider != null)
				{
					GameObject animClone = Instantiate(animation1, hit.collider.gameObject.transform.position, hit.collider.gameObject.transform.rotation);
					// el bombasi 1 ,fuze 2 ,dinamit 3, normal =0
					if (PlayerPrefs.GetInt("bombaturu") == 0)
					{



					}
					if (PlayerPrefs.GetInt("bombaturu") == 1)
					{//dinamit

						
						animation1.transform.position = (hit.collider.gameObject.transform.position);
					}
					if (PlayerPrefs.GetInt("bombaturu") == 2)
					{ //normal

						
						animation1.transform.position = (hit.collider.gameObject.transform.position);
					}
					if (PlayerPrefs.GetInt("bombaturu") == 3)
					{
						//fuze
						
						animation1.transform.position = (hit.collider.gameObject.transform.position);
					}

					animClone.transform.localScale = animation1.transform.localScale;
					StartCoroutine(waits(hit.collider.gameObject, lastharfler2));

				}
			}
		}

	}
	public void UpdateLevelTimer(float totalSeconds)
	{
		int minutes = Mathf.FloorToInt(totalSeconds / 60f);
		int seconds = Mathf.RoundToInt(totalSeconds % 60f);

		string formatedSeconds = seconds.ToString();

		if (seconds == 60)
		{
			seconds = 0;
			minutes += 1;
		}
		time_txt.text = minutes.ToString("00") + ":" + seconds.ToString("00");
	}


}





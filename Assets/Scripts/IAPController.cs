using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;
using System;
using UnityEngine.UI;
public class IAPController : MonoBehaviour, IStoreListener
{
	public GameObject[] objs;
	public Button[] buttons;
	IStoreController controller;
	public string[] product;
	button_Script deneme;
	private void tikleri_Kaldir(){

		foreach(GameObject x in objs){
			x.SetActive(false);
		}
	}
	private void Start()
	{
		IAPStart();
		if (PlayerPrefs.GetInt("fuze") == 1)
		{
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[0].colors = colors;
		}
		if (PlayerPrefs.GetInt("dinamit") == 1)
		{
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[1].colors = colors;
		}
		if (PlayerPrefs.GetInt("elbombasi") == 1)
		{
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[2].colors = colors;
		}
		tikleri_Kaldir();
		if(PlayerPrefs.GetInt("bombaturu")==0){
			objs[3].SetActive(true);
		}
		else if(PlayerPrefs.GetInt("bombaturu")==1){
			objs[1].SetActive(true);
		}
		else if(PlayerPrefs.GetInt("bombaturu")==2){
			objs[2].SetActive(true);
		}
		else if(PlayerPrefs.GetInt("bombaturu")==3){
			objs[0].SetActive(true);
			
		}
		
	}
	private void IAPStart()
	{
		var module = StandardPurchasingModule.Instance();
		ConfigurationBuilder builder = ConfigurationBuilder.Instance(module);
		foreach(string item in product)
		{
			builder.AddProduct(item, ProductType.Consumable);
		}
		UnityPurchasing.Initialize(this, builder);
	}
	public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
	{
		this.controller = controller;
	}
	public void OnInitializeFailed(InitializationFailureReason error)
	{
		print("Hata oluştu ..." + error.ToString());
	}
	public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
	{
		print("hata oluştu ... " + p.ToString());
	}
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
	{
		if (string.Equals(e.purchasedProduct.definition.id, product[0], StringComparison.Ordinal))
		{
			PlayerPrefs.SetInt("fuze", 1);
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[0].colors = colors;
			return PurchaseProcessingResult.Complete;
		}
		else if (string.Equals(e.purchasedProduct.definition.id, product[1], StringComparison.Ordinal))
		{
			PlayerPrefs.SetInt("dinamit", 1);
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[1].colors = colors;
			return PurchaseProcessingResult.Complete;
		}
		else if (string.Equals(e.purchasedProduct.definition.id, product[2], StringComparison.Ordinal))
		{
			PlayerPrefs.SetInt("elbombasi", 1);
			ColorBlock colors = ColorBlock.defaultColorBlock;
			buttons[2].colors = colors;
			return PurchaseProcessingResult.Complete;
		}
		return PurchaseProcessingResult.Pending;
	}
	public void IAPButton(string id)
	{
		
		Product proc = controller.products.WithID(id);
		if(proc != null && proc.availableToPurchase && PlayerPrefs.GetInt(id)!=1)
		{
			Debug.Log("Buying");
			controller.InitiatePurchase(proc);
		}
		
		if (id == "fuze" & PlayerPrefs.GetInt("fuze")==1)
		{
			tikleri_Kaldir();
			PlayerPrefs.SetInt("bombaturu",3);
			objs[0].SetActive(true);
		
		
		}
		else if(id == "elbombasi" & PlayerPrefs.GetInt("elbombasi")==1)
		{
			tikleri_Kaldir();
			PlayerPrefs.SetInt("bombaturu",2);
			objs[2].SetActive(true);
		

		}
		else if(id =="dinamit" & PlayerPrefs.GetInt("dinamit")==1)
		{
			tikleri_Kaldir();
			PlayerPrefs.SetInt("bombaturu",1);
			objs[1].SetActive(true);
		
		}
		
		
	}
	public void sec_Button()
    {
        
		
            tikleri_Kaldir();
			objs[3].SetActive(true);
            PlayerPrefs.SetInt("bombaturu",0);
        
    }
	
}

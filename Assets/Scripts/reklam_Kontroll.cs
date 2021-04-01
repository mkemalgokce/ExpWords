using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class reklam_Kontroll : MonoBehaviour
{
    public Button rewardButton;
    private RewardedAd rewardedAd;
    private BannerView bannerView;
    // Start is called before the first frame update
  
    void Start()
    {
        #if UNITY_ANDROID
            string adUnitId_Rewarded = "ca-app-pub-4292841038866693/7860069379";
        #elif UNITY_IPHONE
            string adUnitId_Rewarded = "ca-app-pub-4292841038866693/9798480079";
        #else
            string adUnitId_Rewarded = "unexpected_platform";
        #endif
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });

        this.RequestBanner();
        rewardButton.interactable = false;
        this.rewardedAd = new RewardedAd(adUnitId_Rewarded);
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;
    }
    private void RequestBanner()
    {
        #if UNITY_ANDROID
            string adUnitId_Banner = "ca-app-pub-4292841038866693/8128846196";
        #elif UNITY_IPHONE
            string adUnitId_Banner = "ca-app-pub-4292841038866693/3316832206";
        #else
            string adUnitId_Banner = "unexpected_platform";
        #endif

        // Create a 320x50 banner at the top of the screen.
        this.bannerView = new BannerView(adUnitId_Banner, AdSize.Banner, AdPosition.Bottom);
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);
    }
   
    // Update is called once per frame
    void Update()
    {
        if(Time.frameCount %2 == 0){
            if (this.rewardedAd.IsLoaded())
            {
                rewardButton.interactable = true;
            }
            else
            {
                rewardButton.interactable = false;
            }
        }
    }
    public void HandleUserEarnedReward(object sender, Reward args)
    {
        if (maingamesc.candegeri >= 3)
		{
			maingamesc.candegeri = 5;
            PlayerPrefs.SetInt("canlar", maingamesc.candegeri);
		}
		else
		{
			maingamesc.candegeri += 2;
            PlayerPrefs.SetInt("canlar",  maingamesc.candegeri);
		}
		maingamesc.gold = maingamesc.gold+5;
		PlayerPrefs.SetInt("gold", maingamesc.gold);
		rewardButton.interactable = false;
		
    }
    
    public void UserChoseToWatchAd()
    {
        
        this.rewardedAd.Show();
        
    }
    public void show_Banner()
	{
        bannerView.Show();
        
    }
    public void destroy_Banner(){
        bannerView.Destroy();
    }

}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
public class InterAd : MonoBehaviour
{
    private InterstitialAd interstitial;
    // Start is called before the first frame update
    public void RequestInterstitial()
    {
        #if UNITY_ANDROID
            string adUnitId = "ca-app-pub-4292841038866693/8867212797";
        #elif UNITY_IPHONE
            string adUnitId = "ca-app-pub-4292841038866693/2742117130";
        #else
            string adUnitId = "unexpected_platform";
        #endif

        // Initialize an InterstitialAd.
        this.interstitial = new InterstitialAd(adUnitId);
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        this.interstitial.LoadAd(request);
    }
    public void showInterAd()
    {
        if(PlayerPrefs.GetInt("levels")%7==0 & PlayerPrefs.GetInt("gecti")==1){
            if (this.interstitial.IsLoaded()) {
                this.interstitial.Show();
            }   
        }
    }
    void Start()
    {
        RequestInterstitial();
    }

}

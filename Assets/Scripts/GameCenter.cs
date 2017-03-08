using UnityEngine;
using System.Collections;
using System;

public class GameCenter : MonoBehaviour {

	// Use this for initialization
	void Start () 
	{
#if UNITY_IOS
        UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications ();
		UnityEngine.iOS.NotificationServices.ClearLocalNotifications ();
		UnityEngine.iOS.LocalNotification ln = new UnityEngine.iOS.LocalNotification ();
				UnityEngine.iOS.NotificationServices.RegisterForNotifications (UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Sound | UnityEngine.iOS.NotificationType.Sound);
		ln.soundName = @"Assets\Sounds\Click.wav";
		ln.fireDate = DateTime.Now.AddHours (27);
		ln.alertBody = "Are You Tired?Go Back To Relax Yourself Now!!!";
		UnityEngine.iOS.NotificationServices.ScheduleLocalNotification (ln);
		Social.localUser.Authenticate (success=>
		                               {
			Social.ReportScore(PlayerPrefs.GetInt("Record"),"DUS01",successfully=>{});
			Social.ReportScore(PlayerPrefs.GetInt("DynamicRecord"),"DUS02",successfully=>{});
			Social.ReportScore(PlayerPrefs.GetInt("TwinkleRecord"),"DUS04",successfully=>{});
			Social.ReportScore(PlayerPrefs.GetInt("The14Record"),"DUS03",successfully=>{});
		});
#endif
	}
	
	// Update is called once per frame
	void Update ()
	{
	
	}
}

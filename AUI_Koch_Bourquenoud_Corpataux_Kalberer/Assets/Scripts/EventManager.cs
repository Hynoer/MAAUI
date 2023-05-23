using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using static Env;

public class EventManager : MonoBehaviour {



	public static EventManager instance;

	#region INIT
	void Awake()
	{
		if (instance) {
			DestroyImmediate (gameObject);
			return;
		}

		instance = this;
		DontDestroyOnLoad (gameObject);
	}

	#endregion

	#region OnUserClick


	public delegate void delegateOnUserClickButton();
	public delegateOnUserClickButton OnUserClickButton;
	public void OnClickButton()
	{
		if (OnUserClickButton != null)
		{

			OnUserClickButton();
		}
	}

	public delegate void delegateOnUserClickResult();
	public delegateOnUserClickResult OnUserClickResult;
	public void OnClickResult()
	{
		if (OnUserClickResult != null)
		{

			OnUserClickResult();
		}
	}

	public delegate void delegateOnUserUpdateDots(bool a_isShow);
	public delegateOnUserUpdateDots OnUpdateDots;
	public void OnUserClickOnDots(bool a_isShow)
	{
		if (OnUpdateDots != null)
		{
			OnUpdateDots(a_isShow);
		}
	}

	#endregion

	#region InternalEvent

	public delegate void delegateOnMarkerNumberUpdate(NumberMarker a_marker, int a_newNumber);
	public delegateOnMarkerNumberUpdate OnMarkerNumberUpdate;
	public void OnMarkerNumber(NumberMarker a_marker, int a_newNumber)
	{
		if (OnMarkerNumberUpdate != null ) {

			OnMarkerNumberUpdate(a_marker, a_newNumber);
		}
	}

	public delegate void delegateOnOperatorUpdate(OperatorMarker a_marker);
	public delegateOnOperatorUpdate OnOperatorUpdate;
	public void OnMarkerOperator(OperatorMarker a_marker)
	{
		if (OnOperatorUpdate != null)
		{

			OnOperatorUpdate(a_marker);
		}
	}


	#endregion
	#region UserCan
	bool CanUserAddIdlas(bool a_idlas) {
		return true;
	}


	#endregion

}

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

	public delegate void delegateOnUserUpdateState(bool a_isShow);
	public delegateOnUserUpdateState OnUpdateState;
	public void OnUserClickOnState(bool a_isShow)
	{
		if (OnUpdateState != null)
		{
			OnUpdateState(a_isShow);
		}
	}

	#endregion

	#region InternalEvent

	public delegate void delegateOnMarkerNumberUpdate(NumberMarker a_marker, int a_newNumber, bool a_isForce);
	public delegateOnMarkerNumberUpdate OnMarkerNumberUpdate;
	public void OnMarkerNumber(NumberMarker a_marker, int a_newNumber, bool a_isForce)
	{

		EventManager.instance.OnColorChange(Color.blue);
		if (OnMarkerNumberUpdate != null && (CanUserUpdateMarker(a_marker) || a_isForce)) {
			
			OnMarkerNumberUpdate(a_marker, a_newNumber, a_isForce);
		}
	}

	public delegate void delegateOnOperatorUpdate(OperatorMarker a_marker, bool a_isAuto);
	public delegateOnOperatorUpdate OnOperatorUpdate;
	public void OnMarkerOperator(OperatorMarker a_marker, bool a_isAuto)
	{

		EventManager.instance.OnColorChange(Color.blue);
		GameManager.instance.OperatorMarkerUpdate(a_marker, a_isAuto);
		if (OnOperatorUpdate != null && (CanUserUpdatOperator() || a_isAuto))
		{

			OnOperatorUpdate(a_marker, a_isAuto);
		}
	}

	public delegate void delegateOnChangeColor(Color a_color);
	public delegateOnChangeColor OnChangeColor;
	public void OnColorChange(Color a_color)
	{
		if (OnChangeColor != null)
		{

			OnChangeColor(a_color);
		}
	}

	public delegate void delegateOnUserWantReset();
	public delegateOnUserWantReset OnUserWantReset;
	public void OnUserReset()
	{
		if (OnUserWantReset != null)
		{

			OnUserWantReset();
		}
	}

	public delegate void delegateOnUserGetWrong();
	public delegateOnUserGetWrong OnUserGetWrong;
	public void OnGetWrong()
	{
		if (OnUserGetWrong != null)
		{

			OnUserGetWrong();
		}
	}


	#endregion
	#region UserCan
	bool CanUserUpdateMarker(NumberMarker a_marker) {
		if (GameManager.instance.currentGameState == GameManager.GameState.game) {
			switch (a_marker) {
				case NumberMarker.first:
					return false;

				case NumberMarker.second:
					return false;

				case NumberMarker.result:
					return true;

				default:
					return false;
			}
		
		}

		return true;
	}

	bool CanUserUpdatOperator()
	{
		return GameManager.instance.currentGameState != GameManager.GameState.game;
	}


	#endregion

}

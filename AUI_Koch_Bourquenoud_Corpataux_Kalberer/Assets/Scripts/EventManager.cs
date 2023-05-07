using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

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
	#endregion

	#region InternalEvent

	public delegate void delegateOnUserAddIdlas(bool a_idlas);
	public delegateOnUserAddIdlas OnUserAddIdlas;
	public void OnAddIdlas(bool a_idlas)
	{
		if (OnUserAddIdlas != null && CanUserAddIdlas(a_idlas)) {

			OnUserAddIdlas(a_idlas);
		}
	}


	#endregion
	#region UserCan
	bool CanUserAddIdlas(bool a_idlas) {
		return true;
	}


	#endregion

}

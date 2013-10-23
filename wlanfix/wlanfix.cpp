/*
	WLANFix
	© ultrashot 2012-2013
*/
#include "stdafx.h"
#include "..\..\common\Connectivity.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Connectivity::CWirelessControl control;
	DWORD dwWifi = 0, dwBluetooth = 0, dwPhone = 0;
	control.GetRadioStates(&dwWifi, &dwPhone, &dwBluetooth);
	if (dwWifi == 0)
	{
		control.SetRadioState(POWER_WIFI, 1, FALSE);
		control.SetRadioState(POWER_WIFI, 0, FALSE);
	}
	return 0;
}


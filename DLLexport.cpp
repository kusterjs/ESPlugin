// DLLexport.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "EuroScopePlugIn.h"
#include "Plugin.h"

ESPlugin  * gpMyPlugin = NULL;

void    __declspec (dllexport)    EuroScopePlugInInit(EuroScopePlugIn::CPlugIn ** ppPlugInInstance)
{
	// AFX_MANAGE_STATE(AfxGetStaticModuleState())

		// create the instance
		* ppPlugInInstance = gpMyPlugin = new ESPlugin();
}


//---EuroScopePlugInExit-----------------------------------------------

void    __declspec (dllexport)    EuroScopePlugInExit(void)
{
	// AFX_MANAGE_STATE(AfxGetStaticModuleState())

		// delete the instance
		delete gpMyPlugin;
}
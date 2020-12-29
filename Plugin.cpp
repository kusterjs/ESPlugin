#include "stdafx.h"
#include "Plugin.h"
#include <string>

using namespace std;

ESPlugin::ESPlugin() : EuroScopePlugIn::CPlugIn(EuroScopePlugIn::COMPATIBILITY_CODE, MY_PLUGIN_NAME, MY_PLUGIN_VERSION, MY_PLUGIN_DEVELOPER, MY_PLUGIN_COPYRIGHT)
{
	string pluginName = MY_PLUGIN_NAME;
	string version = MY_PLUGIN_VERSION;
	DisplayUserMessage(pluginName.c_str(), "Initialisation", ("Version " + version + " loaded").c_str(), true, false, false, false, false);


}

ESPlugin::~ESPlugin()
{


}
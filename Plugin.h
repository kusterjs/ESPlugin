#pragma once
#include <EuroScopePlugIn.h>
#include <string>


using namespace std;
using namespace EuroScopePlugIn;

#define MY_PLUGIN_NAME		"Plugin Name"
#define MY_PLUGIN_VERSION   "0.0.1"
#define MY_PLUGIN_DEVELOPER "Authors name"
#define MY_PLUGIN_COPYRIGHT "GPL v3"


class ESPlugin : public EuroScopePlugIn::CPlugIn
{
private:


public:
	ESPlugin();
	virtual ~ESPlugin();

};
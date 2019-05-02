#pragma once

#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>

#include "AV.h"
#include "Environment.h"
#include "VType.h"
#include "EventTree.h"


using namespace boost::property_tree;

class VAST 
{
public:
	VAST();
	VAST(string file);
	void Parse();
	dataMap _ConfigMap;
	EventTree *_EventTree;
	vector<AV*> _AVs;
	Environment *_Env;

private:
	dataMap _EnvMap;
	dataMap _AVMap;
	string _file;
	void fillMap(string currentModule, string type, string key, string value);
	
};
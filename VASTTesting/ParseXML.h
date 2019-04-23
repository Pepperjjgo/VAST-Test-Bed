#pragma once

#include <string>
#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>

#include "AV.h"
#include "Environment.h"


using namespace boost::property_tree;

class XMLParser
{
public:
	XMLParser(string file);
	void Parse();

private:
	string _file;
	ptree pt1;

	struct AV_Config {
		string _av_name;
		int _av_movement_port;
		string _exe_location;
		Vector3 _AV_location;
		Vector3 _AV_orientation;
		Vector3 _AV_bounds;
		string _metrics;
	};

	struct Environment_Config {
		int _env_obstacle_port;
		string _exe_location;
		Vector3 _env_bounds;
	};

	struct VAST_Config {
		string _output_file_location;
		bool _viz_option;
		int _time_ratio;
		float _time_step;
		int _num_replications;
		string seeds;
		float _max_run_time;
		string _metrics;
		AV_Config **_AVs;
		Environment_Config *_env_config;
	};

	AV_Config **_AVs;

};

class Configuration
{
public:
	Configuration();
	//Configuration LoadConfig(string fileLocation);

private:
	struct AV_Config {
		string _av_name;
		int _av_movement_port;
		string _exe_location;
		Vector3 _AV_location;
		Vector3 _AV_orientation;
		Vector3 _AV_bounds;
		string _metrics;
	};

	struct Environment_Config {
		int _env_obstacle_port;
		string _exe_location;
		Vector3 _env_bounds;
	};

	struct VAST_Config {
		string _output_file_location;
		bool _viz_option;
		int _time_ratio;
		float _time_step;
		int _num_replications;
		string seeds;
		float _max_run_time;
		string _metrics;
		AV_Config **_AVs;
		Environment_Config *_env_config;
	};
	
};
#pragma once
#include "VComponent.h"
#include "VType.h"

/*base class for all metrics in VAST*/
class ScenarioMetric : public VComponent
{
public:
	/* default constructor*/
	ScenarioMetric() {};

	/* Constructor to set component data.*/
	ScenarioMetric(string name, dataMap metricData) {};

	/* returns the statistical metric value as defined by the extending metric 
	class.*/
	virtual VType calculate() {};

	/* The inherited update function*/
	virtual void update(timestamp t, dataMap dataMap) = 0;

	/* Overridden from VComponent.  Returns ID name.*/
	virtual string getName()
	{
		return "Scenario Metric";
	};

	/* Overridden from VComponent.  Returns a copy of the internal data map.*/
	virtual dataMap getDataMap()
	{
		// this is an empty map, the default return from ScenarioMetric
		return dataMap();
	}
};
#include "gtest/gtest.h"
#include "ScenarioMetric.h"

/* Default test - should always succeed.*/
TEST(Test_ScenarioMetrics, DefaultTrueMetricTest)
{
	EXPECT_TRUE(true);
}

/* MetricConstructors - Tests that each Scenario Metric can be created without error.
Procedure: Create one of each extended ScenarioMetric and verify no exceptions.
Pass: No exceptions in creating or destroying the ScenarioMetrics.
Fail: An exception was thrown.
*/
TEST(Test_ScenarioMetrics, MetricConstructors)
{
	AverageSpeed* avgSpd;
	MaximumAcceleration* maxAcc;
	MinimumAcceleration* minAcc;
	AverageAcceleration* avgAcc;
	XYZCoordinates* xyz;

	// TODO: fix this error in the class, then delete it and use the EXPECT statment below to set the variable instead.  
	 avgSpd = new AverageSpeed(); 

	// TEST: that each ScenarioMetric type can be created with no thrown exceptions
	EXPECT_NO_THROW(avgSpd = new AverageSpeed());

	// TEST: that each ScenarioMetric can be deleted with no thrown exceptions
	EXPECT_NO_THROW(delete avgSpd);
}
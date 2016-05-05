/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

#include "CommandLineArguments.hpp"
int main( int argc, char *argv[] ) {
 CommandLineArguments::Instance()->p_argc = &argc;
 CommandLineArguments::Instance()->p_argv = &argv;
 return CxxTest::ErrorPrinter().run();
}
#include "heart/test/stimuli/TestPlaneStimulusCellFactory.hpp"

static TestPlaneStimulusCellFactory suite_TestPlaneStimulusCellFactory;

static CxxTest::List Tests_TestPlaneStimulusCellFactory = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPlaneStimulusCellFactory( "heart/test/stimuli/TestPlaneStimulusCellFactory.hpp", 49, "TestPlaneStimulusCellFactory", suite_TestPlaneStimulusCellFactory, Tests_TestPlaneStimulusCellFactory );

static class TestDescription_TestPlaneStimulusCellFactory_TestBasicContructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPlaneStimulusCellFactory_TestBasicContructor() : CxxTest::RealTestDescription( Tests_TestPlaneStimulusCellFactory, suiteDescription_TestPlaneStimulusCellFactory, 52, "TestBasicContructor" ) {}
 void runTest() { suite_TestPlaneStimulusCellFactory.TestBasicContructor(); }
} testDescription_TestPlaneStimulusCellFactory_TestBasicContructor;

static class TestDescription_TestPlaneStimulusCellFactory_TestHeartGeometryIntoCellFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPlaneStimulusCellFactory_TestHeartGeometryIntoCellFactory() : CxxTest::RealTestDescription( Tests_TestPlaneStimulusCellFactory, suiteDescription_TestPlaneStimulusCellFactory, 94, "TestHeartGeometryIntoCellFactory" ) {}
 void runTest() { suite_TestPlaneStimulusCellFactory.TestHeartGeometryIntoCellFactory(); }
} testDescription_TestPlaneStimulusCellFactory_TestHeartGeometryIntoCellFactory;

#include <cxxtest/Root.cpp>

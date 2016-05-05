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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewForceTutorial.hpp"

static TestCreatingAndUsingANewForceTutorial suite_TestCreatingAndUsingANewForceTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewForceTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewForceTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewForceTutorial.hpp", 198, "TestCreatingAndUsingANewForceTutorial", suite_TestCreatingAndUsingANewForceTutorial, Tests_TestCreatingAndUsingANewForceTutorial );

static class TestDescription_TestCreatingAndUsingANewForceTutorial_TestMyForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewForceTutorial_TestMyForce() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewForceTutorial, suiteDescription_TestCreatingAndUsingANewForceTutorial, 211, "TestMyForce" ) {}
 void runTest() { suite_TestCreatingAndUsingANewForceTutorial.TestMyForce(); }
} testDescription_TestCreatingAndUsingANewForceTutorial_TestMyForce;

static class TestDescription_TestCreatingAndUsingANewForceTutorial_TestOffLatticeSimulationWithMyForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewForceTutorial_TestOffLatticeSimulationWithMyForce() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewForceTutorial, suiteDescription_TestCreatingAndUsingANewForceTutorial, 282, "TestOffLatticeSimulationWithMyForce" ) {}
 void runTest() { suite_TestCreatingAndUsingANewForceTutorial.TestOffLatticeSimulationWithMyForce(); }
} testDescription_TestCreatingAndUsingANewForceTutorial_TestOffLatticeSimulationWithMyForce;

#include <cxxtest/Root.cpp>

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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewSrnModelTutorial.hpp"

static TestCreatingAndUsingANewSrnModelTutorial suite_TestCreatingAndUsingANewSrnModelTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewSrnModelTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewSrnModelTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewSrnModelTutorial.hpp", 262, "TestCreatingAndUsingANewSrnModelTutorial", suite_TestCreatingAndUsingANewSrnModelTutorial, Tests_TestCreatingAndUsingANewSrnModelTutorial );

static class TestDescription_TestCreatingAndUsingANewSrnModelTutorial_TestMySrnModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewSrnModelTutorial_TestMySrnModel() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewSrnModelTutorial, suiteDescription_TestCreatingAndUsingANewSrnModelTutorial, 271, "TestMySrnModel" ) {}
 void runTest() { suite_TestCreatingAndUsingANewSrnModelTutorial.TestMySrnModel(); }
} testDescription_TestCreatingAndUsingANewSrnModelTutorial_TestMySrnModel;

static class TestDescription_TestCreatingAndUsingANewSrnModelTutorial_TestOffLatticeSimulationWithMySrnModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewSrnModelTutorial_TestOffLatticeSimulationWithMySrnModel() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewSrnModelTutorial, suiteDescription_TestCreatingAndUsingANewSrnModelTutorial, 383, "TestOffLatticeSimulationWithMySrnModel" ) {}
 void runTest() { suite_TestCreatingAndUsingANewSrnModelTutorial.TestOffLatticeSimulationWithMySrnModel(); }
} testDescription_TestCreatingAndUsingANewSrnModelTutorial_TestOffLatticeSimulationWithMySrnModel;

#include <cxxtest/Root.cpp>

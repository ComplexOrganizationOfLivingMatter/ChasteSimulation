/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "cell_based/test/tutorial/TestRunningContactInhibitionSimulationsTutorial.hpp"

static TestRunningContactInhibitionSimulationsTutorial suite_TestRunningContactInhibitionSimulationsTutorial;

static CxxTest::List Tests_TestRunningContactInhibitionSimulationsTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRunningContactInhibitionSimulationsTutorial( "cell_based/test/tutorial/TestRunningContactInhibitionSimulationsTutorial.hpp", 119, "TestRunningContactInhibitionSimulationsTutorial", suite_TestRunningContactInhibitionSimulationsTutorial, Tests_TestRunningContactInhibitionSimulationsTutorial );

static class TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBox : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBox() : CxxTest::RealTestDescription( Tests_TestRunningContactInhibitionSimulationsTutorial, suiteDescription_TestRunningContactInhibitionSimulationsTutorial, 128, "TestContactInhibitionInBox" ) {}
 void runTest() { suite_TestRunningContactInhibitionSimulationsTutorial.TestContactInhibitionInBox(); }
} testDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBox;

static class TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBoxWithMutants : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBoxWithMutants() : CxxTest::RealTestDescription( Tests_TestRunningContactInhibitionSimulationsTutorial, suiteDescription_TestRunningContactInhibitionSimulationsTutorial, 235, "TestContactInhibitionInBoxWithMutants" ) {}
 void runTest() { suite_TestRunningContactInhibitionSimulationsTutorial.TestContactInhibitionInBoxWithMutants(); }
} testDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionInBoxWithMutants;

static class TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionWithVertex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionWithVertex() : CxxTest::RealTestDescription( Tests_TestRunningContactInhibitionSimulationsTutorial, suiteDescription_TestRunningContactInhibitionSimulationsTutorial, 344, "TestContactInhibitionWithVertex" ) {}
 void runTest() { suite_TestRunningContactInhibitionSimulationsTutorial.TestContactInhibitionWithVertex(); }
} testDescription_TestRunningContactInhibitionSimulationsTutorial_TestContactInhibitionWithVertex;

#include <cxxtest/Root.cpp>

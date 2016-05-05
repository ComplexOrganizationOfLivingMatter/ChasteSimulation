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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellPropertyTutorial.hpp"

static TestCreatingAndUsingANewCellPropertyTutorial suite_TestCreatingAndUsingANewCellPropertyTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellPropertyTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellPropertyTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellPropertyTutorial.hpp", 264, "TestCreatingAndUsingANewCellPropertyTutorial", suite_TestCreatingAndUsingANewCellPropertyTutorial, Tests_TestCreatingAndUsingANewCellPropertyTutorial );

static class TestDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestMotileCellProperty : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestMotileCellProperty() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellPropertyTutorial, suiteDescription_TestCreatingAndUsingANewCellPropertyTutorial, 273, "TestMotileCellProperty" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellPropertyTutorial.TestMotileCellProperty(); }
} testDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestMotileCellProperty;

static class TestDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestOffLatticeSimulationWithMotileCellProperty : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestOffLatticeSimulationWithMotileCellProperty() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellPropertyTutorial, suiteDescription_TestCreatingAndUsingANewCellPropertyTutorial, 344, "TestOffLatticeSimulationWithMotileCellProperty" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellPropertyTutorial.TestOffLatticeSimulationWithMotileCellProperty(); }
} testDescription_TestCreatingAndUsingANewCellPropertyTutorial_TestOffLatticeSimulationWithMotileCellProperty;

#include <cxxtest/Root.cpp>

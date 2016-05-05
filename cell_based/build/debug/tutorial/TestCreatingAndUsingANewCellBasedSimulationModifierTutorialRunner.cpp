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
#include "cell_based/test/tutorial/TestCreatingAndUsingANewCellBasedSimulationModifierTutorial.hpp"

static TestCreatingAndUsingANewCellBasedSimulationModifierTutorial suite_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial;

static CxxTest::List Tests_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial( "cell_based/test/tutorial/TestCreatingAndUsingANewCellBasedSimulationModifierTutorial.hpp", 217, "TestCreatingAndUsingANewCellBasedSimulationModifierTutorial", suite_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial, Tests_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial );

static class TestDescription_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial_TestOffLatticeSimulationWithCellHeightTrackingModifier : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial_TestOffLatticeSimulationWithCellHeightTrackingModifier() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial, suiteDescription_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial, 227, "TestOffLatticeSimulationWithCellHeightTrackingModifier" ) {}
 void runTest() { suite_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial.TestOffLatticeSimulationWithCellHeightTrackingModifier(); }
} testDescription_TestCreatingAndUsingANewCellBasedSimulationModifierTutorial_TestOffLatticeSimulationWithCellHeightTrackingModifier;

#include <cxxtest/Root.cpp>

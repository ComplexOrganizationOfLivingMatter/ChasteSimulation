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
#include "cell_based/test/tutorial/TestCreatingAndUsingNewCellBasedWritersTutorial.hpp"

static TestCreatingAndUsingNewCellBasedWritersTutorial suite_TestCreatingAndUsingNewCellBasedWritersTutorial;

static CxxTest::List Tests_TestCreatingAndUsingNewCellBasedWritersTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCreatingAndUsingNewCellBasedWritersTutorial( "cell_based/test/tutorial/TestCreatingAndUsingNewCellBasedWritersTutorial.hpp", 221, "TestCreatingAndUsingNewCellBasedWritersTutorial", suite_TestCreatingAndUsingNewCellBasedWritersTutorial, Tests_TestCreatingAndUsingNewCellBasedWritersTutorial );

static class TestDescription_TestCreatingAndUsingNewCellBasedWritersTutorial_TestOffLatticeSimulationWithMotileCellPropertyAndWriters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCreatingAndUsingNewCellBasedWritersTutorial_TestOffLatticeSimulationWithMotileCellPropertyAndWriters() : CxxTest::RealTestDescription( Tests_TestCreatingAndUsingNewCellBasedWritersTutorial, suiteDescription_TestCreatingAndUsingNewCellBasedWritersTutorial, 225, "TestOffLatticeSimulationWithMotileCellPropertyAndWriters" ) {}
 void runTest() { suite_TestCreatingAndUsingNewCellBasedWritersTutorial.TestOffLatticeSimulationWithMotileCellPropertyAndWriters(); }
} testDescription_TestCreatingAndUsingNewCellBasedWritersTutorial_TestOffLatticeSimulationWithMotileCellPropertyAndWriters;

#include <cxxtest/Root.cpp>

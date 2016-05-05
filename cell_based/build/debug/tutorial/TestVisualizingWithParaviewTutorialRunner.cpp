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
#include "cell_based/test/tutorial/TestVisualizingWithParaviewTutorial.hpp"

static TestVisualizingWithParaviewTutorial suite_TestVisualizingWithParaviewTutorial;

static CxxTest::List Tests_TestVisualizingWithParaviewTutorial = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVisualizingWithParaviewTutorial( "cell_based/test/tutorial/TestVisualizingWithParaviewTutorial.hpp", 104, "TestVisualizingWithParaviewTutorial", suite_TestVisualizingWithParaviewTutorial, Tests_TestVisualizingWithParaviewTutorial );

static class TestDescription_TestVisualizingWithParaviewTutorial_Test2DMeshBasedMonolayerSimulationForVisualizing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVisualizingWithParaviewTutorial_Test2DMeshBasedMonolayerSimulationForVisualizing() : CxxTest::RealTestDescription( Tests_TestVisualizingWithParaviewTutorial, suiteDescription_TestVisualizingWithParaviewTutorial, 117, "Test2DMeshBasedMonolayerSimulationForVisualizing" ) {}
 void runTest() { suite_TestVisualizingWithParaviewTutorial.Test2DMeshBasedMonolayerSimulationForVisualizing(); }
} testDescription_TestVisualizingWithParaviewTutorial_Test2DMeshBasedMonolayerSimulationForVisualizing;

static class TestDescription_TestVisualizingWithParaviewTutorial_Test2DPeriodicMeshBasedMonolayerSimulationForVisualizing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVisualizingWithParaviewTutorial_Test2DPeriodicMeshBasedMonolayerSimulationForVisualizing() : CxxTest::RealTestDescription( Tests_TestVisualizingWithParaviewTutorial, suiteDescription_TestVisualizingWithParaviewTutorial, 208, "Test2DPeriodicMeshBasedMonolayerSimulationForVisualizing" ) {}
 void runTest() { suite_TestVisualizingWithParaviewTutorial.Test2DPeriodicMeshBasedMonolayerSimulationForVisualizing(); }
} testDescription_TestVisualizingWithParaviewTutorial_Test2DPeriodicMeshBasedMonolayerSimulationForVisualizing;

static class TestDescription_TestVisualizingWithParaviewTutorial_Test2DNodeBasedMonolayerSimulationForVisualizing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVisualizingWithParaviewTutorial_Test2DNodeBasedMonolayerSimulationForVisualizing() : CxxTest::RealTestDescription( Tests_TestVisualizingWithParaviewTutorial, suiteDescription_TestVisualizingWithParaviewTutorial, 265, "Test2DNodeBasedMonolayerSimulationForVisualizing" ) {}
 void runTest() { suite_TestVisualizingWithParaviewTutorial.Test2DNodeBasedMonolayerSimulationForVisualizing(); }
} testDescription_TestVisualizingWithParaviewTutorial_Test2DNodeBasedMonolayerSimulationForVisualizing;

static class TestDescription_TestVisualizingWithParaviewTutorial_Test2DVertexBasedMonolayerSimulationForVisualizing : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVisualizingWithParaviewTutorial_Test2DVertexBasedMonolayerSimulationForVisualizing() : CxxTest::RealTestDescription( Tests_TestVisualizingWithParaviewTutorial, suiteDescription_TestVisualizingWithParaviewTutorial, 319, "Test2DVertexBasedMonolayerSimulationForVisualizing" ) {}
 void runTest() { suite_TestVisualizingWithParaviewTutorial.Test2DVertexBasedMonolayerSimulationForVisualizing(); }
} testDescription_TestVisualizingWithParaviewTutorial_Test2DVertexBasedMonolayerSimulationForVisualizing;

#include <cxxtest/Root.cpp>

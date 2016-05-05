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
#include "cell_based/test/simulation/TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d.hpp"

static TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d suite_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d;

static CxxTest::List Tests_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d( "cell_based/test/simulation/TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d.hpp", 63, "TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d", suite_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d, Tests_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d );

static class TestDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedRestrictedToSphere : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedRestrictedToSphere() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d, suiteDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d, 67, "Test3dNodeBasedRestrictedToSphere" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d.Test3dNodeBasedRestrictedToSphere(); }
} testDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedRestrictedToSphere;

static class TestDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedPlaneBoundary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedPlaneBoundary() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d, suiteDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d, 129, "Test3dNodeBasedPlaneBoundary" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d.Test3dNodeBasedPlaneBoundary(); }
} testDescription_TestOffLatticeSimulationWithNodeBasedCellPopulationIn3d_Test3dNodeBasedPlaneBoundary;

#include <cxxtest/Root.cpp>

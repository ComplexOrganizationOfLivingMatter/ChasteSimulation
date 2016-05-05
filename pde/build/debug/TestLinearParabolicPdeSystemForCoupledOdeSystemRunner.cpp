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
#include "pde/test/TestLinearParabolicPdeSystemForCoupledOdeSystem.hpp"

static TestLinearParabolicPdeSystemForCoupledOdeSystem suite_TestLinearParabolicPdeSystemForCoupledOdeSystem;

static CxxTest::List Tests_TestLinearParabolicPdeSystemForCoupledOdeSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem( "pde/test/TestLinearParabolicPdeSystemForCoupledOdeSystem.hpp", 50, "TestLinearParabolicPdeSystemForCoupledOdeSystem", suite_TestLinearParabolicPdeSystemForCoupledOdeSystem, Tests_TestLinearParabolicPdeSystemForCoupledOdeSystem );

static class TestDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestHeatEquationForCoupledOdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestHeatEquationForCoupledOdeSystem() : CxxTest::RealTestDescription( Tests_TestLinearParabolicPdeSystemForCoupledOdeSystem, suiteDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem, 54, "TestHeatEquationForCoupledOdeSystem" ) {}
 void runTest() { suite_TestLinearParabolicPdeSystemForCoupledOdeSystem.TestHeatEquationForCoupledOdeSystem(); }
} testDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestHeatEquationForCoupledOdeSystem;

static class TestDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestSchnackenbergCoupledPdeSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestSchnackenbergCoupledPdeSystem() : CxxTest::RealTestDescription( Tests_TestLinearParabolicPdeSystemForCoupledOdeSystem, suiteDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem, 78, "TestSchnackenbergCoupledPdeSystem" ) {}
 void runTest() { suite_TestLinearParabolicPdeSystemForCoupledOdeSystem.TestSchnackenbergCoupledPdeSystem(); }
} testDescription_TestLinearParabolicPdeSystemForCoupledOdeSystem_TestSchnackenbergCoupledPdeSystem;

#include <cxxtest/Root.cpp>

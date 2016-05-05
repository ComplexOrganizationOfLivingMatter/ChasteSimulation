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
#include "crypt/test/mechanics/TestVertexCryptBoundaryForce.hpp"

static TestVertexCryptBoundaryForce suite_TestVertexCryptBoundaryForce;

static CxxTest::List Tests_TestVertexCryptBoundaryForce = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexCryptBoundaryForce( "crypt/test/mechanics/TestVertexCryptBoundaryForce.hpp", 54, "TestVertexCryptBoundaryForce", suite_TestVertexCryptBoundaryForce, Tests_TestVertexCryptBoundaryForce );

static class TestDescription_TestVertexCryptBoundaryForce_TestForceOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexCryptBoundaryForce_TestForceOutputParameters() : CxxTest::RealTestDescription( Tests_TestVertexCryptBoundaryForce, suiteDescription_TestVertexCryptBoundaryForce, 58, "TestForceOutputParameters" ) {}
 void runTest() { suite_TestVertexCryptBoundaryForce.TestForceOutputParameters(); }
} testDescription_TestVertexCryptBoundaryForce_TestForceOutputParameters;

static class TestDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceMethods() : CxxTest::RealTestDescription( Tests_TestVertexCryptBoundaryForce, suiteDescription_TestVertexCryptBoundaryForce, 75, "TestVertexCryptBoundaryForceMethods" ) {}
 void runTest() { suite_TestVertexCryptBoundaryForce.TestVertexCryptBoundaryForceMethods(); }
} testDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceMethods;

static class TestDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceForceWithNonVertexCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceForceWithNonVertexCellPopulation() : CxxTest::RealTestDescription( Tests_TestVertexCryptBoundaryForce, suiteDescription_TestVertexCryptBoundaryForce, 132, "TestVertexCryptBoundaryForceForceWithNonVertexCellPopulation" ) {}
 void runTest() { suite_TestVertexCryptBoundaryForce.TestVertexCryptBoundaryForceForceWithNonVertexCellPopulation(); }
} testDescription_TestVertexCryptBoundaryForce_TestVertexCryptBoundaryForceForceWithNonVertexCellPopulation;

#include <cxxtest/Root.cpp>

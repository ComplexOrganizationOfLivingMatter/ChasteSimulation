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
#include "continuum_mechanics/test/TestContinuumMechanicsNeumannBcsAssembler.hpp"

static TestContinuumMechanicsNeumannBcsAssembler suite_TestContinuumMechanicsNeumannBcsAssembler;

static CxxTest::List Tests_TestContinuumMechanicsNeumannBcsAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestContinuumMechanicsNeumannBcsAssembler( "continuum_mechanics/test/TestContinuumMechanicsNeumannBcsAssembler.hpp", 43, "TestContinuumMechanicsNeumannBcsAssembler", suite_TestContinuumMechanicsNeumannBcsAssembler, Tests_TestContinuumMechanicsNeumannBcsAssembler );

static class TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler2d() : CxxTest::RealTestDescription( Tests_TestContinuumMechanicsNeumannBcsAssembler, suiteDescription_TestContinuumMechanicsNeumannBcsAssembler, 46, "TestAssembler2d" ) {}
 void runTest() { suite_TestContinuumMechanicsNeumannBcsAssembler.TestAssembler2d(); }
} testDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler2d;

static class TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler3d() : CxxTest::RealTestDescription( Tests_TestContinuumMechanicsNeumannBcsAssembler, suiteDescription_TestContinuumMechanicsNeumannBcsAssembler, 132, "TestAssembler3d" ) {}
 void runTest() { suite_TestContinuumMechanicsNeumannBcsAssembler.TestAssembler3d(); }
} testDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssembler3d;

static class TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssemblerMeshType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssemblerMeshType() : CxxTest::RealTestDescription( Tests_TestContinuumMechanicsNeumannBcsAssembler, suiteDescription_TestContinuumMechanicsNeumannBcsAssembler, 222, "TestAssemblerMeshType" ) {}
 void runTest() { suite_TestContinuumMechanicsNeumannBcsAssembler.TestAssemblerMeshType(); }
} testDescription_TestContinuumMechanicsNeumannBcsAssembler_TestAssemblerMeshType;

#include <cxxtest/Root.cpp>

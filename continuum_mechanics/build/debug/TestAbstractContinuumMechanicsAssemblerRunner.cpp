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
#include "continuum_mechanics/test/TestAbstractContinuumMechanicsAssembler.hpp"

static TestAbstractContinuumMechanicsAssembler suite_TestAbstractContinuumMechanicsAssembler;

static CxxTest::List Tests_TestAbstractContinuumMechanicsAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractContinuumMechanicsAssembler( "continuum_mechanics/test/TestAbstractContinuumMechanicsAssembler.hpp", 216, "TestAbstractContinuumMechanicsAssembler", suite_TestAbstractContinuumMechanicsAssembler, Tests_TestAbstractContinuumMechanicsAssembler );

static class TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers1d() : CxxTest::RealTestDescription( Tests_TestAbstractContinuumMechanicsAssembler, suiteDescription_TestAbstractContinuumMechanicsAssembler, 219, "TestAssemblers1d" ) {}
 void runTest() { suite_TestAbstractContinuumMechanicsAssembler.TestAssemblers1d(); }
} testDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers1d;

static class TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers2d() : CxxTest::RealTestDescription( Tests_TestAbstractContinuumMechanicsAssembler, suiteDescription_TestAbstractContinuumMechanicsAssembler, 303, "TestAssemblers2d" ) {}
 void runTest() { suite_TestAbstractContinuumMechanicsAssembler.TestAssemblers2d(); }
} testDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers2d;

static class TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers3d() : CxxTest::RealTestDescription( Tests_TestAbstractContinuumMechanicsAssembler, suiteDescription_TestAbstractContinuumMechanicsAssembler, 377, "TestAssemblers3d" ) {}
 void runTest() { suite_TestAbstractContinuumMechanicsAssembler.TestAssemblers3d(); }
} testDescription_TestAbstractContinuumMechanicsAssembler_TestAssemblers3d;

static class TestDescription_TestAbstractContinuumMechanicsAssembler_TestWithMassMatrixInPressurePressureBlock : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContinuumMechanicsAssembler_TestWithMassMatrixInPressurePressureBlock() : CxxTest::RealTestDescription( Tests_TestAbstractContinuumMechanicsAssembler, suiteDescription_TestAbstractContinuumMechanicsAssembler, 462, "TestWithMassMatrixInPressurePressureBlock" ) {}
 void runTest() { suite_TestAbstractContinuumMechanicsAssembler.TestWithMassMatrixInPressurePressureBlock(); }
} testDescription_TestAbstractContinuumMechanicsAssembler_TestWithMassMatrixInPressurePressureBlock;

static class TestDescription_TestAbstractContinuumMechanicsAssembler_TestAbstractContinuumMechanicsAssemblerMeshType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractContinuumMechanicsAssembler_TestAbstractContinuumMechanicsAssemblerMeshType() : CxxTest::RealTestDescription( Tests_TestAbstractContinuumMechanicsAssembler, suiteDescription_TestAbstractContinuumMechanicsAssembler, 526, "TestAbstractContinuumMechanicsAssemblerMeshType" ) {}
 void runTest() { suite_TestAbstractContinuumMechanicsAssembler.TestAbstractContinuumMechanicsAssemblerMeshType(); }
} testDescription_TestAbstractContinuumMechanicsAssembler_TestAbstractContinuumMechanicsAssemblerMeshType;

#include <cxxtest/Root.cpp>

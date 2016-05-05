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
#include "linalg/test/TestPetscMatTools.hpp"

static TestPetscMatTools suite_TestPetscMatTools;

static CxxTest::List Tests_TestPetscMatTools = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscMatTools( "linalg/test/TestPetscMatTools.hpp", 48, "TestPetscMatTools", suite_TestPetscMatTools, Tests_TestPetscMatTools );

static class TestDescription_TestPetscMatTools_TestEqualityCheck : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscMatTools_TestEqualityCheck() : CxxTest::RealTestDescription( Tests_TestPetscMatTools, suiteDescription_TestPetscMatTools, 51, "TestEqualityCheck" ) {}
 void runTest() { suite_TestPetscMatTools.TestEqualityCheck(); }
} testDescription_TestPetscMatTools_TestEqualityCheck;

static class TestDescription_TestPetscMatTools_TestSymmetryCheck : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscMatTools_TestSymmetryCheck() : CxxTest::RealTestDescription( Tests_TestPetscMatTools, suiteDescription_TestPetscMatTools, 84, "TestSymmetryCheck" ) {}
 void runTest() { suite_TestPetscMatTools.TestSymmetryCheck(); }
} testDescription_TestPetscMatTools_TestSymmetryCheck;

static class TestDescription_TestPetscMatTools_TestZeroRowsAndColumnsWithValueOnDiagonal : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscMatTools_TestZeroRowsAndColumnsWithValueOnDiagonal() : CxxTest::RealTestDescription( Tests_TestPetscMatTools, suiteDescription_TestPetscMatTools, 109, "TestZeroRowsAndColumnsWithValueOnDiagonal" ) {}
 void runTest() { suite_TestPetscMatTools.TestZeroRowsAndColumnsWithValueOnDiagonal(); }
} testDescription_TestPetscMatTools_TestZeroRowsAndColumnsWithValueOnDiagonal;

static class TestDescription_TestPetscMatTools_TestTurnOffVariableAllocationError : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscMatTools_TestTurnOffVariableAllocationError() : CxxTest::RealTestDescription( Tests_TestPetscMatTools, suiteDescription_TestPetscMatTools, 151, "TestTurnOffVariableAllocationError" ) {}
 void runTest() { suite_TestPetscMatTools.TestTurnOffVariableAllocationError(); }
} testDescription_TestPetscMatTools_TestTurnOffVariableAllocationError;

#include <cxxtest/Root.cpp>

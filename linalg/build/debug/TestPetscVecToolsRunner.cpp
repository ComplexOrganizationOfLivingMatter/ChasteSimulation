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
#include "linalg/test/TestPetscVecTools.hpp"

static TestPetscVecTools suite_TestPetscVecTools;

static CxxTest::List Tests_TestPetscVecTools = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPetscVecTools( "linalg/test/TestPetscVecTools.hpp", 54, "TestPetscVecTools", suite_TestPetscVecTools, Tests_TestPetscVecTools );

static class TestDescription_TestPetscVecTools_TestInterleavedVecScatter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscVecTools_TestInterleavedVecScatter() : CxxTest::RealTestDescription( Tests_TestPetscVecTools, suiteDescription_TestPetscVecTools, 58, "TestInterleavedVecScatter" ) {}
 void runTest() { suite_TestPetscVecTools.TestInterleavedVecScatter(); }
} testDescription_TestPetscVecTools_TestInterleavedVecScatter;

static class TestDescription_TestPetscVecTools_TestInterleavedVecGather : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPetscVecTools_TestInterleavedVecGather() : CxxTest::RealTestDescription( Tests_TestPetscVecTools, suiteDescription_TestPetscVecTools, 119, "TestInterleavedVecGather" ) {}
 void runTest() { suite_TestPetscVecTools.TestInterleavedVecGather(); }
} testDescription_TestPetscVecTools_TestInterleavedVecGather;

#include <cxxtest/Root.cpp>

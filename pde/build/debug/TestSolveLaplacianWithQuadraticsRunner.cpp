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
#include "pde/test/TestSolveLaplacianWithQuadratics.hpp"

static TestSolveLaplacianWithQuadratics suite_TestSolveLaplacianWithQuadratics;

static CxxTest::List Tests_TestSolveLaplacianWithQuadratics = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSolveLaplacianWithQuadratics( "pde/test/TestSolveLaplacianWithQuadratics.hpp", 274, "TestSolveLaplacianWithQuadratics", suite_TestSolveLaplacianWithQuadratics, Tests_TestSolveLaplacianWithQuadratics );

static class TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics1d() : CxxTest::RealTestDescription( Tests_TestSolveLaplacianWithQuadratics, suiteDescription_TestSolveLaplacianWithQuadratics, 278, "TestSolveLaplacianWithQuadratics1d" ) {}
 void runTest() { suite_TestSolveLaplacianWithQuadratics.TestSolveLaplacianWithQuadratics1d(); }
} testDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics1d;

static class TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2d() : CxxTest::RealTestDescription( Tests_TestSolveLaplacianWithQuadratics, suiteDescription_TestSolveLaplacianWithQuadratics, 305, "TestSolveLaplacianWithQuadratics2d" ) {}
 void runTest() { suite_TestSolveLaplacianWithQuadratics.TestSolveLaplacianWithQuadratics2d(); }
} testDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2d;

static class TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2dReordered : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2dReordered() : CxxTest::RealTestDescription( Tests_TestSolveLaplacianWithQuadratics, suiteDescription_TestSolveLaplacianWithQuadratics, 363, "TestSolveLaplacianWithQuadratics2dReordered" ) {}
 void runTest() { suite_TestSolveLaplacianWithQuadratics.TestSolveLaplacianWithQuadratics2dReordered(); }
} testDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics2dReordered;

static class TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics3d() : CxxTest::RealTestDescription( Tests_TestSolveLaplacianWithQuadratics, suiteDescription_TestSolveLaplacianWithQuadratics, 429, "TestSolveLaplacianWithQuadratics3d" ) {}
 void runTest() { suite_TestSolveLaplacianWithQuadratics.TestSolveLaplacianWithQuadratics3d(); }
} testDescription_TestSolveLaplacianWithQuadratics_TestSolveLaplacianWithQuadratics3d;

#include <cxxtest/Root.cpp>

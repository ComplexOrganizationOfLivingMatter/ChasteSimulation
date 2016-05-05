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
#include "cell_based/test/population/TestCellwiseDataGradient.hpp"

static TestCellwiseDataGradient suite_TestCellwiseDataGradient;

static CxxTest::List Tests_TestCellwiseDataGradient = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellwiseDataGradient( "cell_based/test/population/TestCellwiseDataGradient.hpp", 57, "TestCellwiseDataGradient", suite_TestCellwiseDataGradient, Tests_TestCellwiseDataGradient );

static class TestDescription_TestCellwiseDataGradient_TestCellwiseDataGradientVerySmallMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellwiseDataGradient_TestCellwiseDataGradientVerySmallMesh() : CxxTest::RealTestDescription( Tests_TestCellwiseDataGradient, suiteDescription_TestCellwiseDataGradient, 62, "TestCellwiseDataGradientVerySmallMesh" ) {}
 void runTest() { suite_TestCellwiseDataGradient.TestCellwiseDataGradientVerySmallMesh(); }
} testDescription_TestCellwiseDataGradient_TestCellwiseDataGradientVerySmallMesh;

static class TestDescription_TestCellwiseDataGradient_TestCellwiseDataGradientFineMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellwiseDataGradient_TestCellwiseDataGradientFineMesh() : CxxTest::RealTestDescription( Tests_TestCellwiseDataGradient, suiteDescription_TestCellwiseDataGradient, 95, "TestCellwiseDataGradientFineMesh" ) {}
 void runTest() { suite_TestCellwiseDataGradient.TestCellwiseDataGradientFineMesh(); }
} testDescription_TestCellwiseDataGradient_TestCellwiseDataGradientFineMesh;

#include <cxxtest/Root.cpp>

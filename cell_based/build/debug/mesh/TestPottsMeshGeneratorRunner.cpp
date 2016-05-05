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
#include "cell_based/test/mesh/TestPottsMeshGenerator.hpp"

static TestPottsMeshGenerator suite_TestPottsMeshGenerator;

static CxxTest::List Tests_TestPottsMeshGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPottsMeshGenerator( "cell_based/test/mesh/TestPottsMeshGenerator.hpp", 47, "TestPottsMeshGenerator", suite_TestPottsMeshGenerator, Tests_TestPottsMeshGenerator );

static class TestDescription_TestPottsMeshGenerator_TestPottsMeshGeneratorIn2dFromBottomLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshGenerator_TestPottsMeshGeneratorIn2dFromBottomLeft() : CxxTest::RealTestDescription( Tests_TestPottsMeshGenerator, suiteDescription_TestPottsMeshGenerator, 51, "TestPottsMeshGeneratorIn2dFromBottomLeft" ) {}
 void runTest() { suite_TestPottsMeshGenerator.TestPottsMeshGeneratorIn2dFromBottomLeft(); }
} testDescription_TestPottsMeshGenerator_TestPottsMeshGeneratorIn2dFromBottomLeft;

static class TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator2dInCentre : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator2dInCentre() : CxxTest::RealTestDescription( Tests_TestPottsMeshGenerator, suiteDescription_TestPottsMeshGenerator, 138, "TestPottsMeshGenerator2dInCentre" ) {}
 void runTest() { suite_TestPottsMeshGenerator.TestPottsMeshGenerator2dInCentre(); }
} testDescription_TestPottsMeshGenerator_TestPottsMeshGenerator2dInCentre;

static class TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dFromBottomLeft : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dFromBottomLeft() : CxxTest::RealTestDescription( Tests_TestPottsMeshGenerator, suiteDescription_TestPottsMeshGenerator, 226, "TestPottsMeshGenerator3dFromBottomLeft" ) {}
 void runTest() { suite_TestPottsMeshGenerator.TestPottsMeshGenerator3dFromBottomLeft(); }
} testDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dFromBottomLeft;

static class TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dInCentre : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dInCentre() : CxxTest::RealTestDescription( Tests_TestPottsMeshGenerator, suiteDescription_TestPottsMeshGenerator, 324, "TestPottsMeshGenerator3dInCentre" ) {}
 void runTest() { suite_TestPottsMeshGenerator.TestPottsMeshGenerator3dInCentre(); }
} testDescription_TestPottsMeshGenerator_TestPottsMeshGenerator3dInCentre;

static class TestDescription_TestPottsMeshGenerator_TestGenerator3dLarge : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPottsMeshGenerator_TestGenerator3dLarge() : CxxTest::RealTestDescription( Tests_TestPottsMeshGenerator, suiteDescription_TestPottsMeshGenerator, 419, "TestGenerator3dLarge" ) {}
 void runTest() { suite_TestPottsMeshGenerator.TestGenerator3dLarge(); }
} testDescription_TestPottsMeshGenerator_TestGenerator3dLarge;

#include <cxxtest/Root.cpp>

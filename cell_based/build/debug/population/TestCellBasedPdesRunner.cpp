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
#include "cell_based/test/population/TestCellBasedPdes.hpp"

static TestCellBasedPdes suite_TestCellBasedPdes;

static CxxTest::List Tests_TestCellBasedPdes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBasedPdes( "cell_based/test/population/TestCellBasedPdes.hpp", 63, "TestCellBasedPdes", suite_TestCellBasedPdes, Tests_TestCellBasedPdes );

static class TestDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 67, "TestSimpleUniformSourcePdeMethods" ) {}
 void runTest() { suite_TestCellBasedPdes.TestSimpleUniformSourcePdeMethods(); }
} testDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeMethods;

static class TestDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeArchiving() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 97, "TestSimpleUniformSourcePdeArchiving" ) {}
 void runTest() { suite_TestCellBasedPdes.TestSimpleUniformSourcePdeArchiving(); }
} testDescription_TestCellBasedPdes_TestSimpleUniformSourcePdeArchiving;

static class TestDescription_TestCellBasedPdes_TestCellwiseSourcePdeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestCellwiseSourcePdeMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 135, "TestCellwiseSourcePdeMethods" ) {}
 void runTest() { suite_TestCellBasedPdes.TestCellwiseSourcePdeMethods(); }
} testDescription_TestCellBasedPdes_TestCellwiseSourcePdeMethods;

static class TestDescription_TestCellBasedPdes_TestCellwiseSourcePdeArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestCellwiseSourcePdeArchiving() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 174, "TestCellwiseSourcePdeArchiving" ) {}
 void runTest() { suite_TestCellBasedPdes.TestCellwiseSourcePdeArchiving(); }
} testDescription_TestCellBasedPdes_TestCellwiseSourcePdeArchiving;

static class TestDescription_TestCellBasedPdes_TestAveragedSourcePdeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestAveragedSourcePdeMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 226, "TestAveragedSourcePdeMethods" ) {}
 void runTest() { suite_TestCellBasedPdes.TestAveragedSourcePdeMethods(); }
} testDescription_TestCellBasedPdes_TestAveragedSourcePdeMethods;

static class TestDescription_TestCellBasedPdes_TestAveragedSourcePdeArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestAveragedSourcePdeArchiving() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 300, "TestAveragedSourcePdeArchiving" ) {}
 void runTest() { suite_TestCellBasedPdes.TestAveragedSourcePdeArchiving(); }
} testDescription_TestCellBasedPdes_TestAveragedSourcePdeArchiving;

static class TestDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 352, "TestVolumeDependentAveragedSourcePdeMethods" ) {}
 void runTest() { suite_TestCellBasedPdes.TestVolumeDependentAveragedSourcePdeMethods(); }
} testDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeMethods;

static class TestDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeArchiving() : CxxTest::RealTestDescription( Tests_TestCellBasedPdes, suiteDescription_TestCellBasedPdes, 404, "TestVolumeDependentAveragedSourcePdeArchiving" ) {}
 void runTest() { suite_TestCellBasedPdes.TestVolumeDependentAveragedSourcePdeArchiving(); }
} testDescription_TestCellBasedPdes_TestVolumeDependentAveragedSourcePdeArchiving;

#include <cxxtest/Root.cpp>

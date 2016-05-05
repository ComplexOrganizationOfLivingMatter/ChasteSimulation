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
#include "cell_based/test/cell/TestCellDataMaps.hpp"

static TestCellDataMaps suite_TestCellDataMaps;

static CxxTest::List Tests_TestCellDataMaps = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellDataMaps( "cell_based/test/cell/TestCellDataMaps.hpp", 59, "TestCellDataMaps", suite_TestCellDataMaps, Tests_TestCellDataMaps );

static class TestDescription_TestCellDataMaps_TestCellData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellDataMaps_TestCellData() : CxxTest::RealTestDescription( Tests_TestCellDataMaps, suiteDescription_TestCellDataMaps, 63, "TestCellData" ) {}
 void runTest() { suite_TestCellDataMaps.TestCellData(); }
} testDescription_TestCellDataMaps_TestCellData;

static class TestDescription_TestCellDataMaps_TestCellVecData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellDataMaps_TestCellVecData() : CxxTest::RealTestDescription( Tests_TestCellDataMaps, suiteDescription_TestCellDataMaps, 103, "TestCellVecData" ) {}
 void runTest() { suite_TestCellDataMaps.TestCellVecData(); }
} testDescription_TestCellDataMaps_TestCellVecData;

#include <cxxtest/Root.cpp>

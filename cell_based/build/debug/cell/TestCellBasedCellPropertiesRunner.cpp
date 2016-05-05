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
#include "cell_based/test/cell/TestCellBasedCellProperties.hpp"

static TestCellBasedCellProperties suite_TestCellBasedCellProperties;

static CxxTest::List Tests_TestCellBasedCellProperties = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellBasedCellProperties( "cell_based/test/cell/TestCellBasedCellProperties.hpp", 57, "TestCellBasedCellProperties", suite_TestCellBasedCellProperties, Tests_TestCellBasedCellProperties );

static class TestDescription_TestCellBasedCellProperties_TestCellIdMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedCellProperties_TestCellIdMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedCellProperties, suiteDescription_TestCellBasedCellProperties, 61, "TestCellIdMethods" ) {}
 void runTest() { suite_TestCellBasedCellProperties.TestCellIdMethods(); }
} testDescription_TestCellBasedCellProperties_TestCellIdMethods;

static class TestDescription_TestCellBasedCellProperties_TestArchiveCellId : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedCellProperties_TestArchiveCellId() : CxxTest::RealTestDescription( Tests_TestCellBasedCellProperties, suiteDescription_TestCellBasedCellProperties, 78, "TestArchiveCellId" ) {}
 void runTest() { suite_TestCellBasedCellProperties.TestArchiveCellId(); }
} testDescription_TestCellBasedCellProperties_TestArchiveCellId;

static class TestDescription_TestCellBasedCellProperties_TestCellDataMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedCellProperties_TestCellDataMethods() : CxxTest::RealTestDescription( Tests_TestCellBasedCellProperties, suiteDescription_TestCellBasedCellProperties, 127, "TestCellDataMethods" ) {}
 void runTest() { suite_TestCellBasedCellProperties.TestCellDataMethods(); }
} testDescription_TestCellBasedCellProperties_TestCellDataMethods;

static class TestDescription_TestCellBasedCellProperties_TestArchiveCellData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellBasedCellProperties_TestArchiveCellData() : CxxTest::RealTestDescription( Tests_TestCellBasedCellProperties, suiteDescription_TestCellBasedCellProperties, 143, "TestArchiveCellData" ) {}
 void runTest() { suite_TestCellBasedCellProperties.TestArchiveCellData(); }
} testDescription_TestCellBasedCellProperties_TestArchiveCellData;

#include <cxxtest/Root.cpp>

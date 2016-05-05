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
#include "cell_based/test/cell/TestCellPropertyCollection.hpp"

static TestCellPropertyCollection suite_TestCellPropertyCollection;

static CxxTest::List Tests_TestCellPropertyCollection = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellPropertyCollection( "cell_based/test/cell/TestCellPropertyCollection.hpp", 59, "TestCellPropertyCollection", suite_TestCellPropertyCollection, Tests_TestCellPropertyCollection );

static class TestDescription_TestCellPropertyCollection_TestPropertyCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPropertyCollection_TestPropertyCollection() : CxxTest::RealTestDescription( Tests_TestCellPropertyCollection, suiteDescription_TestCellPropertyCollection, 62, "TestPropertyCollection" ) {}
 void runTest() { suite_TestCellPropertyCollection.TestPropertyCollection(); }
} testDescription_TestCellPropertyCollection_TestPropertyCollection;

static class TestDescription_TestCellPropertyCollection_TestArchiveCellPropertyCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellPropertyCollection_TestArchiveCellPropertyCollection() : CxxTest::RealTestDescription( Tests_TestCellPropertyCollection, suiteDescription_TestCellPropertyCollection, 140, "TestArchiveCellPropertyCollection" ) {}
 void runTest() { suite_TestCellPropertyCollection.TestArchiveCellPropertyCollection(); }
} testDescription_TestCellPropertyCollection_TestArchiveCellPropertyCollection;

#include <cxxtest/Root.cpp>

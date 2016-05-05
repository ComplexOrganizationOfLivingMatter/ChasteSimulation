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
#include "cell_based/test/cell/TestArchiveCell.hpp"

static TestArchiveCell suite_TestArchiveCell;

static CxxTest::List Tests_TestArchiveCell = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestArchiveCell( "cell_based/test/cell/TestArchiveCell.hpp", 69, "TestArchiveCell", suite_TestArchiveCell, Tests_TestArchiveCell );

static class TestDescription_TestArchiveCell_TestArchivingOfCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestArchiveCell_TestArchivingOfCell() : CxxTest::RealTestDescription( Tests_TestArchiveCell, suiteDescription_TestArchiveCell, 73, "TestArchivingOfCell" ) {}
 void runTest() { suite_TestArchiveCell.TestArchivingOfCell(); }
} testDescription_TestArchiveCell_TestArchivingOfCell;

#include <cxxtest/Root.cpp>

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
#include "cell_based/test/cell/TestCellPropertyRegistry.hpp"

static TestCellLabel suite_TestCellLabel;

static CxxTest::List Tests_TestCellLabel = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellLabel( "cell_based/test/cell/TestCellPropertyRegistry.hpp", 57, "TestCellLabel", suite_TestCellLabel, Tests_TestCellLabel );

static class TestDescription_TestCellLabel_TestCellLabelMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellLabel_TestCellLabelMethods() : CxxTest::RealTestDescription( Tests_TestCellLabel, suiteDescription_TestCellLabel, 61, "TestCellLabelMethods" ) {}
 void runTest() { suite_TestCellLabel.TestCellLabelMethods(); }
} testDescription_TestCellLabel_TestCellLabelMethods;

static class TestDescription_TestCellLabel_TestCellPropertyRegistry : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellLabel_TestCellPropertyRegistry() : CxxTest::RealTestDescription( Tests_TestCellLabel, suiteDescription_TestCellLabel, 88, "TestCellPropertyRegistry" ) {}
 void runTest() { suite_TestCellLabel.TestCellPropertyRegistry(); }
} testDescription_TestCellLabel_TestCellPropertyRegistry;

static class TestDescription_TestCellLabel_TestCellPropertyOrdering : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellLabel_TestCellPropertyOrdering() : CxxTest::RealTestDescription( Tests_TestCellLabel, suiteDescription_TestCellLabel, 125, "TestCellPropertyOrdering" ) {}
 void runTest() { suite_TestCellLabel.TestCellPropertyOrdering(); }
} testDescription_TestCellLabel_TestCellPropertyOrdering;

static class TestDescription_TestCellLabel_TestArchiveCellLabel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellLabel_TestArchiveCellLabel() : CxxTest::RealTestDescription( Tests_TestCellLabel, suiteDescription_TestCellLabel, 152, "TestArchiveCellLabel" ) {}
 void runTest() { suite_TestCellLabel.TestArchiveCellLabel(); }
} testDescription_TestCellLabel_TestArchiveCellLabel;

static class TestDescription_TestCellLabel_TestArchiveCellPropertyRegistry : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellLabel_TestArchiveCellPropertyRegistry() : CxxTest::RealTestDescription( Tests_TestCellLabel, suiteDescription_TestCellLabel, 197, "TestArchiveCellPropertyRegistry" ) {}
 void runTest() { suite_TestCellLabel.TestArchiveCellPropertyRegistry(); }
} testDescription_TestCellLabel_TestArchiveCellPropertyRegistry;

#include <cxxtest/Root.cpp>

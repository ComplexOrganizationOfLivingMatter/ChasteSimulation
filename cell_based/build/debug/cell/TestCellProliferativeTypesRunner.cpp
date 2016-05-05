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
#include "cell_based/test/cell/TestCellProliferativeTypes.hpp"

static TestCellProliferativeTypes suite_TestCellProliferativeTypes;

static CxxTest::List Tests_TestCellProliferativeTypes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellProliferativeTypes( "cell_based/test/cell/TestCellProliferativeTypes.hpp", 59, "TestCellProliferativeTypes", suite_TestCellProliferativeTypes, Tests_TestCellProliferativeTypes );

static class TestDescription_TestCellProliferativeTypes_TestCellProliferativeTypeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProliferativeTypes_TestCellProliferativeTypeMethods() : CxxTest::RealTestDescription( Tests_TestCellProliferativeTypes, suiteDescription_TestCellProliferativeTypes, 63, "TestCellProliferativeTypeMethods" ) {}
 void runTest() { suite_TestCellProliferativeTypes.TestCellProliferativeTypeMethods(); }
} testDescription_TestCellProliferativeTypes_TestCellProliferativeTypeMethods;

static class TestDescription_TestCellProliferativeTypes_TestArchiveStemCellProliferativeType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProliferativeTypes_TestArchiveStemCellProliferativeType() : CxxTest::RealTestDescription( Tests_TestCellProliferativeTypes, suiteDescription_TestCellProliferativeTypes, 99, "TestArchiveStemCellProliferativeType" ) {}
 void runTest() { suite_TestCellProliferativeTypes.TestArchiveStemCellProliferativeType(); }
} testDescription_TestCellProliferativeTypes_TestArchiveStemCellProliferativeType;

static class TestDescription_TestCellProliferativeTypes_TestArchiveTransitCellProliferativeType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProliferativeTypes_TestArchiveTransitCellProliferativeType() : CxxTest::RealTestDescription( Tests_TestCellProliferativeTypes, suiteDescription_TestCellProliferativeTypes, 144, "TestArchiveTransitCellProliferativeType" ) {}
 void runTest() { suite_TestCellProliferativeTypes.TestArchiveTransitCellProliferativeType(); }
} testDescription_TestCellProliferativeTypes_TestArchiveTransitCellProliferativeType;

static class TestDescription_TestCellProliferativeTypes_TestArchiveDifferentiatedCellProliferativeType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProliferativeTypes_TestArchiveDifferentiatedCellProliferativeType() : CxxTest::RealTestDescription( Tests_TestCellProliferativeTypes, suiteDescription_TestCellProliferativeTypes, 189, "TestArchiveDifferentiatedCellProliferativeType" ) {}
 void runTest() { suite_TestCellProliferativeTypes.TestArchiveDifferentiatedCellProliferativeType(); }
} testDescription_TestCellProliferativeTypes_TestArchiveDifferentiatedCellProliferativeType;

static class TestDescription_TestCellProliferativeTypes_TestArchiveDefaultCellProliferativeType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProliferativeTypes_TestArchiveDefaultCellProliferativeType() : CxxTest::RealTestDescription( Tests_TestCellProliferativeTypes, suiteDescription_TestCellProliferativeTypes, 234, "TestArchiveDefaultCellProliferativeType" ) {}
 void runTest() { suite_TestCellProliferativeTypes.TestArchiveDefaultCellProliferativeType(); }
} testDescription_TestCellProliferativeTypes_TestArchiveDefaultCellProliferativeType;

#include <cxxtest/Root.cpp>

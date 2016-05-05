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
#include "cell_based/test/cell/TestOdeBasedSrnModels.hpp"

static TestOdeBasedSrnModels suite_TestOdeBasedSrnModels;

static CxxTest::List Tests_TestOdeBasedSrnModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOdeBasedSrnModels( "cell_based/test/cell/TestOdeBasedSrnModels.hpp", 63, "TestOdeBasedSrnModels", suite_TestOdeBasedSrnModels, Tests_TestOdeBasedSrnModels );

static class TestDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCorrectBehaviour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCorrectBehaviour() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 67, "TestDeltaNotchSrnCorrectBehaviour" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestDeltaNotchSrnCorrectBehaviour(); }
} testDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCorrectBehaviour;

static class TestDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCreateCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCreateCopy() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 111, "TestDeltaNotchSrnCreateCopy" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestDeltaNotchSrnCreateCopy(); }
} testDescription_TestOdeBasedSrnModels_TestDeltaNotchSrnCreateCopy;

static class TestDescription_TestOdeBasedSrnModels_TestArchiveDeltaNotchSrnModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestArchiveDeltaNotchSrnModel() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 136, "TestArchiveDeltaNotchSrnModel" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestArchiveDeltaNotchSrnModel(); }
} testDescription_TestOdeBasedSrnModels_TestArchiveDeltaNotchSrnModel;

static class TestDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCorrectBehaviour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCorrectBehaviour() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 192, "TestGoldbeter1991SrnCorrectBehaviour" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestGoldbeter1991SrnCorrectBehaviour(); }
} testDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCorrectBehaviour;

static class TestDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCreateCopy : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCreateCopy() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 239, "TestGoldbeter1991SrnCreateCopy" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestGoldbeter1991SrnCreateCopy(); }
} testDescription_TestOdeBasedSrnModels_TestGoldbeter1991SrnCreateCopy;

static class TestDescription_TestOdeBasedSrnModels_TestArchiveGoldbeter1991SrnModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestArchiveGoldbeter1991SrnModel() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 265, "TestArchiveGoldbeter1991SrnModel" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestArchiveGoldbeter1991SrnModel(); }
} testDescription_TestOdeBasedSrnModels_TestArchiveGoldbeter1991SrnModel;

static class TestDescription_TestOdeBasedSrnModels_TestSrnModelOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOdeBasedSrnModels_TestSrnModelOutputParameters() : CxxTest::RealTestDescription( Tests_TestOdeBasedSrnModels, suiteDescription_TestOdeBasedSrnModels, 332, "TestSrnModelOutputParameters" ) {}
 void runTest() { suite_TestOdeBasedSrnModels.TestSrnModelOutputParameters(); }
} testDescription_TestOdeBasedSrnModels_TestSrnModelOutputParameters;

#include <cxxtest/Root.cpp>

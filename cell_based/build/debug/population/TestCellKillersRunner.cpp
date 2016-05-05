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
#include "cell_based/test/population/TestCellKillers.hpp"

static TestCellKillers suite_TestCellKillers;

static CxxTest::List Tests_TestCellKillers = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellKillers( "cell_based/test/population/TestCellKillers.hpp", 67, "TestCellKillers", suite_TestCellKillers, Tests_TestCellKillers );

static class TestDescription_TestCellKillers_TestTargetedCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestTargetedCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 71, "TestTargetedCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestTargetedCellKiller(); }
} testDescription_TestCellKillers_TestTargetedCellKiller;

static class TestDescription_TestCellKillers_TestRandomCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestRandomCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 146, "TestRandomCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestRandomCellKiller(); }
} testDescription_TestCellKillers_TestRandomCellKiller;

static class TestDescription_TestCellKillers_TestApoptoticCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestApoptoticCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 249, "TestApoptoticCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestApoptoticCellKiller(); }
} testDescription_TestCellKillers_TestApoptoticCellKiller;

static class TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn1d() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 340, "TestPlaneBasedCellKillerIn1d" ) {}
 void runTest() { suite_TestCellKillers.TestPlaneBasedCellKillerIn1d(); }
} testDescription_TestCellKillers_TestPlaneBasedCellKillerIn1d;

static class TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn2d() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 389, "TestPlaneBasedCellKillerIn2d" ) {}
 void runTest() { suite_TestCellKillers.TestPlaneBasedCellKillerIn2d(); }
} testDescription_TestCellKillers_TestPlaneBasedCellKillerIn2d;

static class TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestPlaneBasedCellKillerIn3d() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 436, "TestPlaneBasedCellKillerIn3d" ) {}
 void runTest() { suite_TestCellKillers.TestPlaneBasedCellKillerIn3d(); }
} testDescription_TestCellKillers_TestPlaneBasedCellKillerIn3d;

static class TestDescription_TestCellKillers_TestIsolatedLabelledCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestIsolatedLabelledCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 482, "TestIsolatedLabelledCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestIsolatedLabelledCellKiller(); }
} testDescription_TestCellKillers_TestIsolatedLabelledCellKiller;

static class TestDescription_TestCellKillers_TestArchivingOfTargetedCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestArchivingOfTargetedCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 559, "TestArchivingOfTargetedCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestArchivingOfTargetedCellKiller(); }
} testDescription_TestCellKillers_TestArchivingOfTargetedCellKiller;

static class TestDescription_TestCellKillers_TestArchivingOfRandomCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestArchivingOfRandomCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 596, "TestArchivingOfRandomCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestArchivingOfRandomCellKiller(); }
} testDescription_TestCellKillers_TestArchivingOfRandomCellKiller;

static class TestDescription_TestCellKillers_TestArchivingOfApoptoticCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestArchivingOfApoptoticCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 633, "TestArchivingOfApoptoticCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestArchivingOfApoptoticCellKiller(); }
} testDescription_TestCellKillers_TestArchivingOfApoptoticCellKiller;

static class TestDescription_TestCellKillers_TestArchivingOfPlaneBasedCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestArchivingOfPlaneBasedCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 668, "TestArchivingOfPlaneBasedCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestArchivingOfPlaneBasedCellKiller(); }
} testDescription_TestCellKillers_TestArchivingOfPlaneBasedCellKiller;

static class TestDescription_TestCellKillers_TestArchivingOfIsolatedLabelledCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestArchivingOfIsolatedLabelledCellKiller() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 712, "TestArchivingOfIsolatedLabelledCellKiller" ) {}
 void runTest() { suite_TestCellKillers.TestArchivingOfIsolatedLabelledCellKiller(); }
} testDescription_TestCellKillers_TestArchivingOfIsolatedLabelledCellKiller;

static class TestDescription_TestCellKillers_TestCellKillersOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellKillers_TestCellKillersOutputParameters() : CxxTest::RealTestDescription( Tests_TestCellKillers, suiteDescription_TestCellKillers, 760, "TestCellKillersOutputParameters" ) {}
 void runTest() { suite_TestCellKillers.TestCellKillersOutputParameters(); }
} testDescription_TestCellKillers_TestCellKillersOutputParameters;

#include <cxxtest/Root.cpp>

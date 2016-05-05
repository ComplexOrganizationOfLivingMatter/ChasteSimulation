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
#include "crypt/test/population/TestSloughingCellKillers.hpp"

static TestSloughingCellKillers suite_TestSloughingCellKillers;

static CxxTest::List Tests_TestSloughingCellKillers = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSloughingCellKillers( "crypt/test/population/TestSloughingCellKillers.hpp", 58, "TestSloughingCellKillers", suite_TestSloughingCellKillers, Tests_TestSloughingCellKillers );

static class TestDescription_TestSloughingCellKillers_TestSloughingCellKillerTopAndSides : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestSloughingCellKillerTopAndSides() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 62, "TestSloughingCellKillerTopAndSides" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestSloughingCellKillerTopAndSides(); }
} testDescription_TestSloughingCellKillers_TestSloughingCellKillerTopAndSides;

static class TestDescription_TestSloughingCellKillers_TestSloughingCellKillerTopOnly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestSloughingCellKillerTopOnly() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 117, "TestSloughingCellKillerTopOnly" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestSloughingCellKillerTopOnly(); }
} testDescription_TestSloughingCellKillers_TestSloughingCellKillerTopOnly;

static class TestDescription_TestSloughingCellKillers_TestSloughingCellKillerIn1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestSloughingCellKillerIn1d() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 165, "TestSloughingCellKillerIn1d" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestSloughingCellKillerIn1d(); }
} testDescription_TestSloughingCellKillers_TestSloughingCellKillerIn1d;

static class TestDescription_TestSloughingCellKillers_TestSloughingCellKillerIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestSloughingCellKillerIn3d() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 215, "TestSloughingCellKillerIn3d" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestSloughingCellKillerIn3d(); }
} testDescription_TestSloughingCellKillers_TestSloughingCellKillerIn3d;

static class TestDescription_TestSloughingCellKillers_TestArchivingOfSloughingCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestArchivingOfSloughingCellKiller() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 236, "TestArchivingOfSloughingCellKiller" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestArchivingOfSloughingCellKiller(); }
} testDescription_TestSloughingCellKillers_TestArchivingOfSloughingCellKiller;

static class TestDescription_TestSloughingCellKillers_TestRadialSloughingCellKillerMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestRadialSloughingCellKillerMethods() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 277, "TestRadialSloughingCellKillerMethods" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestRadialSloughingCellKillerMethods(); }
} testDescription_TestSloughingCellKillers_TestRadialSloughingCellKillerMethods;

static class TestDescription_TestSloughingCellKillers_TestArchivingOfRadialSloughingCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestArchivingOfRadialSloughingCellKiller() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 340, "TestArchivingOfRadialSloughingCellKiller" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestArchivingOfRadialSloughingCellKiller(); }
} testDescription_TestSloughingCellKillers_TestArchivingOfRadialSloughingCellKiller;

static class TestDescription_TestSloughingCellKillers_TestCellKillersOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSloughingCellKillers_TestCellKillersOutputParameters() : CxxTest::RealTestDescription( Tests_TestSloughingCellKillers, suiteDescription_TestSloughingCellKillers, 392, "TestCellKillersOutputParameters" ) {}
 void runTest() { suite_TestSloughingCellKillers.TestCellKillersOutputParameters(); }
} testDescription_TestSloughingCellKillers_TestCellKillersOutputParameters;

#include <cxxtest/Root.cpp>

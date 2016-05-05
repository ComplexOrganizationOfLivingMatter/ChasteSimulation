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
#include "heart/test/TestElectrodes.hpp"

static TestElectrodes suite_TestElectrodes;

static CxxTest::List Tests_TestElectrodes = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestElectrodes( "heart/test/TestElectrodes.hpp", 52, "TestElectrodes", suite_TestElectrodes, Tests_TestElectrodes );

static class TestDescription_TestElectrodes_TestElectrodeGrounded2dAndSwitchOffSwitchOn : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectrodes_TestElectrodeGrounded2dAndSwitchOffSwitchOn() : CxxTest::RealTestDescription( Tests_TestElectrodes, suiteDescription_TestElectrodes, 55, "TestElectrodeGrounded2dAndSwitchOffSwitchOn" ) {}
 void runTest() { suite_TestElectrodes.TestElectrodeGrounded2dAndSwitchOffSwitchOn(); }
} testDescription_TestElectrodes_TestElectrodeGrounded2dAndSwitchOffSwitchOn;

static class TestDescription_TestElectrodes_TestElectrodeUngrounded2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectrodes_TestElectrodeUngrounded2d() : CxxTest::RealTestDescription( Tests_TestElectrodes, suiteDescription_TestElectrodes, 130, "TestElectrodeUngrounded2d" ) {}
 void runTest() { suite_TestElectrodes.TestElectrodeUngrounded2d(); }
} testDescription_TestElectrodes_TestElectrodeUngrounded2d;

static class TestDescription_TestElectrodes_TestElectrodeUngrounded2dDifferentAreas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectrodes_TestElectrodeUngrounded2dDifferentAreas() : CxxTest::RealTestDescription( Tests_TestElectrodes, suiteDescription_TestElectrodes, 167, "TestElectrodeUngrounded2dDifferentAreas" ) {}
 void runTest() { suite_TestElectrodes.TestElectrodeUngrounded2dDifferentAreas(); }
} testDescription_TestElectrodes_TestElectrodeUngrounded2dDifferentAreas;

static class TestDescription_TestElectrodes_TestElectrodeGrounded3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectrodes_TestElectrodeGrounded3d() : CxxTest::RealTestDescription( Tests_TestElectrodes, suiteDescription_TestElectrodes, 230, "TestElectrodeGrounded3d" ) {}
 void runTest() { suite_TestElectrodes.TestElectrodeGrounded3d(); }
} testDescription_TestElectrodes_TestElectrodeGrounded3d;

static class TestDescription_TestElectrodes_TestElectrodeUngrounded3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElectrodes_TestElectrodeUngrounded3d() : CxxTest::RealTestDescription( Tests_TestElectrodes, suiteDescription_TestElectrodes, 270, "TestElectrodeUngrounded3d" ) {}
 void runTest() { suite_TestElectrodes.TestElectrodeUngrounded3d(); }
} testDescription_TestElectrodes_TestElectrodeUngrounded3d;

#include <cxxtest/Root.cpp>

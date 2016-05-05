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
#include "crypt/test/cell/TestWntConcentration.hpp"

static TestWntConcentration suite_TestWntConcentration;

static CxxTest::List Tests_TestWntConcentration = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestWntConcentration( "crypt/test/cell/TestWntConcentration.hpp", 61, "TestWntConcentration", suite_TestWntConcentration, Tests_TestWntConcentration );

static class TestDescription_TestWntConcentration_TestNoWnt : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestNoWnt() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 65, "TestNoWnt" ) {}
 void runTest() { suite_TestWntConcentration.TestNoWnt(); }
} testDescription_TestWntConcentration_TestNoWnt;

static class TestDescription_TestWntConcentration_TestLinearWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestLinearWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 91, "TestLinearWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestLinearWntConcentration(); }
} testDescription_TestWntConcentration_TestLinearWntConcentration;

static class TestDescription_TestWntConcentration_TestExponentialWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestExponentialWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 126, "TestExponentialWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestExponentialWntConcentration(); }
} testDescription_TestWntConcentration_TestExponentialWntConcentration;

static class TestDescription_TestWntConcentration_TestOffsetLinearWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestOffsetLinearWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 170, "TestOffsetLinearWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestOffsetLinearWntConcentration(); }
} testDescription_TestWntConcentration_TestOffsetLinearWntConcentration;

static class TestDescription_TestWntConcentration_TestRadialWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestRadialWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 210, "TestRadialWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestRadialWntConcentration(); }
} testDescription_TestWntConcentration_TestRadialWntConcentration;

static class TestDescription_TestWntConcentration_TestArchiveWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestArchiveWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 315, "TestArchiveWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestArchiveWntConcentration(); }
} testDescription_TestWntConcentration_TestArchiveWntConcentration;

static class TestDescription_TestWntConcentration_TestSingletonnessOfWntConcentration : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestSingletonnessOfWntConcentration() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 382, "TestSingletonnessOfWntConcentration" ) {}
 void runTest() { suite_TestWntConcentration.TestSingletonnessOfWntConcentration(); }
} testDescription_TestWntConcentration_TestSingletonnessOfWntConcentration;

static class TestDescription_TestWntConcentration_TestWntInitialisationSetup : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestWntInitialisationSetup() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 423, "TestWntInitialisationSetup" ) {}
 void runTest() { suite_TestWntConcentration.TestWntInitialisationSetup(); }
} testDescription_TestWntConcentration_TestWntInitialisationSetup;

static class TestDescription_TestWntConcentration_TestCryptProjectionParameterAAndBGettersAndSetters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestWntConcentration_TestCryptProjectionParameterAAndBGettersAndSetters() : CxxTest::RealTestDescription( Tests_TestWntConcentration, suiteDescription_TestWntConcentration, 484, "TestCryptProjectionParameterAAndBGettersAndSetters" ) {}
 void runTest() { suite_TestWntConcentration.TestCryptProjectionParameterAAndBGettersAndSetters(); }
} testDescription_TestWntConcentration_TestCryptProjectionParameterAAndBGettersAndSetters;

#include <cxxtest/Root.cpp>

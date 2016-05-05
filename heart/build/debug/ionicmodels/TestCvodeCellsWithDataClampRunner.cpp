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
#include "heart/test/ionicmodels/TestCvodeCellsWithDataClamp.hpp"

static TestCvodeCellsWithDataClamp suite_TestCvodeCellsWithDataClamp;

static CxxTest::List Tests_TestCvodeCellsWithDataClamp = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCvodeCellsWithDataClamp( "heart/test/ionicmodels/TestCvodeCellsWithDataClamp.hpp", 52, "TestCvodeCellsWithDataClamp", suite_TestCvodeCellsWithDataClamp, Tests_TestCvodeCellsWithDataClamp );

static class TestDescription_TestCvodeCellsWithDataClamp_TestInterpolatorTimesAndGenerateReferenceTrace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeCellsWithDataClamp_TestInterpolatorTimesAndGenerateReferenceTrace() : CxxTest::RealTestDescription( Tests_TestCvodeCellsWithDataClamp, suiteDescription_TestCvodeCellsWithDataClamp, 60, "TestInterpolatorTimesAndGenerateReferenceTrace" ) {}
 void runTest() { suite_TestCvodeCellsWithDataClamp.TestInterpolatorTimesAndGenerateReferenceTrace(); }
} testDescription_TestCvodeCellsWithDataClamp_TestInterpolatorTimesAndGenerateReferenceTrace;

static class TestDescription_TestCvodeCellsWithDataClamp_TestArchivingCvodeCellsWithDataClamp : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCvodeCellsWithDataClamp_TestArchivingCvodeCellsWithDataClamp() : CxxTest::RealTestDescription( Tests_TestCvodeCellsWithDataClamp, suiteDescription_TestCvodeCellsWithDataClamp, 203, "TestArchivingCvodeCellsWithDataClamp" ) {}
 void runTest() { suite_TestCvodeCellsWithDataClamp.TestArchivingCvodeCellsWithDataClamp(); }
} testDescription_TestCvodeCellsWithDataClamp_TestArchivingCvodeCellsWithDataClamp;

#include <cxxtest/Root.cpp>

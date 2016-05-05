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
#include "heart/test/ionicmodels/TestIonicModelsWithSacs.hpp"

static TestIonicModelsWithSacs suite_TestIonicModelsWithSacs;

static CxxTest::List Tests_TestIonicModelsWithSacs = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestIonicModelsWithSacs( "heart/test/ionicmodels/TestIonicModelsWithSacs.hpp", 60, "TestIonicModelsWithSacs", suite_TestIonicModelsWithSacs, Tests_TestIonicModelsWithSacs );

static class TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msShort : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msShort() : CxxTest::RealTestDescription( Tests_TestIonicModelsWithSacs, suiteDescription_TestIonicModelsWithSacs, 128, "TestN98WithSacAt300msShort" ) {}
 void runTest() { suite_TestIonicModelsWithSacs.TestN98WithSacAt300msShort(); }
} testDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msShort;

static class TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msLong : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msLong() : CxxTest::RealTestDescription( Tests_TestIonicModelsWithSacs, suiteDescription_TestIonicModelsWithSacs, 138, "TestN98WithSacAt300msLong" ) {}
 void runTest() { suite_TestIonicModelsWithSacs.TestN98WithSacAt300msLong(); }
} testDescription_TestIonicModelsWithSacs_TestN98WithSacAt300msLong;

static class TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt200msShort : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt200msShort() : CxxTest::RealTestDescription( Tests_TestIonicModelsWithSacs, suiteDescription_TestIonicModelsWithSacs, 154, "TestN98WithSacAt200msShort" ) {}
 void runTest() { suite_TestIonicModelsWithSacs.TestN98WithSacAt200msShort(); }
} testDescription_TestIonicModelsWithSacs_TestN98WithSacAt200msShort;

static class TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt800msLong : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModelsWithSacs_TestN98WithSacAt800msLong() : CxxTest::RealTestDescription( Tests_TestIonicModelsWithSacs, suiteDescription_TestIonicModelsWithSacs, 164, "TestN98WithSacAt800msLong" ) {}
 void runTest() { suite_TestIonicModelsWithSacs.TestN98WithSacAt800msLong(); }
} testDescription_TestIonicModelsWithSacs_TestN98WithSacAt800msLong;

#include <cxxtest/Root.cpp>

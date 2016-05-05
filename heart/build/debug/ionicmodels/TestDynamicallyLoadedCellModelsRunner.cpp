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
#include "heart/test/ionicmodels/TestDynamicallyLoadedCellModels.hpp"

static TestDynamicallyLoadedCellModels suite_TestDynamicallyLoadedCellModels;

static CxxTest::List Tests_TestDynamicallyLoadedCellModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestDynamicallyLoadedCellModels( "heart/test/ionicmodels/TestDynamicallyLoadedCellModels.hpp", 71, "TestDynamicallyLoadedCellModels", suite_TestDynamicallyLoadedCellModels, Tests_TestDynamicallyLoadedCellModels );

static class TestDescription_TestDynamicallyLoadedCellModels_TestCellmlLoaderClass : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestCellmlLoaderClass() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 152, "TestCellmlLoaderClass" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestCellmlLoaderClass(); }
} testDescription_TestDynamicallyLoadedCellModels_TestCellmlLoaderClass;

static class TestDescription_TestDynamicallyLoadedCellModels_TestDynamicallyLoadedLr91 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestDynamicallyLoadedLr91() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 194, "TestDynamicallyLoadedLr91" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestDynamicallyLoadedLr91(); }
} testDescription_TestDynamicallyLoadedCellModels_TestDynamicallyLoadedLr91;

static class TestDescription_TestDynamicallyLoadedCellModels_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestExceptions() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 210, "TestExceptions" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestExceptions(); }
} testDescription_TestDynamicallyLoadedCellModels_TestExceptions;

static class TestDescription_TestDynamicallyLoadedCellModels_TestCellmlConverter : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestCellmlConverter() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 224, "TestCellmlConverter" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestCellmlConverter(); }
} testDescription_TestDynamicallyLoadedCellModels_TestCellmlConverter;

static class TestDescription_TestDynamicallyLoadedCellModels_TestCellmlConverterWithOptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestCellmlConverterWithOptions() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 306, "TestCellmlConverterWithOptions" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestCellmlConverterWithOptions(); }
} testDescription_TestDynamicallyLoadedCellModels_TestCellmlConverterWithOptions;

static class TestDescription_TestDynamicallyLoadedCellModels_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestDynamicallyLoadedCellModels_TestArchiving() : CxxTest::RealTestDescription( Tests_TestDynamicallyLoadedCellModels, suiteDescription_TestDynamicallyLoadedCellModels, 360, "TestArchiving" ) {}
 void runTest() { suite_TestDynamicallyLoadedCellModels.TestArchiving(); }
} testDescription_TestDynamicallyLoadedCellModels_TestArchiving;

#include <cxxtest/Root.cpp>

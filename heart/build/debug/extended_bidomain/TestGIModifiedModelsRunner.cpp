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
#include "heart/test/extended_bidomain/TestGIModifiedModels.hpp"

static TestGIModifiedModels suite_TestGIModifiedModels;

static CxxTest::List Tests_TestGIModifiedModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGIModifiedModels( "heart/test/extended_bidomain/TestGIModifiedModels.hpp", 65, "TestGIModifiedModels", suite_TestGIModifiedModels, Tests_TestGIModifiedModels );

static class TestDescription_TestGIModifiedModels_TestICCmodelModified : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGIModifiedModels_TestICCmodelModified() : CxxTest::RealTestDescription( Tests_TestGIModifiedModels, suiteDescription_TestGIModifiedModels, 69, "TestICCmodelModified" ) {}
 void runTest() { suite_TestGIModifiedModels.TestICCmodelModified(); }
} testDescription_TestGIModifiedModels_TestICCmodelModified;

static class TestDescription_TestGIModifiedModels_TestSMCmodelModified : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGIModifiedModels_TestSMCmodelModified() : CxxTest::RealTestDescription( Tests_TestGIModifiedModels, suiteDescription_TestGIModifiedModels, 116, "TestSMCmodelModified" ) {}
 void runTest() { suite_TestGIModifiedModels.TestSMCmodelModified(); }
} testDescription_TestGIModifiedModels_TestSMCmodelModified;

static class TestDescription_TestGIModifiedModels_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestGIModifiedModels_TestArchiving() : CxxTest::RealTestDescription( Tests_TestGIModifiedModels, suiteDescription_TestGIModifiedModels, 186, "TestArchiving" ) {}
 void runTest() { suite_TestGIModifiedModels.TestArchiving(); }
} testDescription_TestGIModifiedModels_TestArchiving;

#include <cxxtest/Root.cpp>

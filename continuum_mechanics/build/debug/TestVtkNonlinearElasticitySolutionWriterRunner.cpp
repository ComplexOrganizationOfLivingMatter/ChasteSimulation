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
#include "continuum_mechanics/test/TestVtkNonlinearElasticitySolutionWriter.hpp"

static TestVtkNonlinearElasticitySolutionWriter suite_TestVtkNonlinearElasticitySolutionWriter;

static CxxTest::List Tests_TestVtkNonlinearElasticitySolutionWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVtkNonlinearElasticitySolutionWriter( "continuum_mechanics/test/TestVtkNonlinearElasticitySolutionWriter.hpp", 55, "TestVtkNonlinearElasticitySolutionWriter", suite_TestVtkNonlinearElasticitySolutionWriter, Tests_TestVtkNonlinearElasticitySolutionWriter );

static class TestDescription_TestVtkNonlinearElasticitySolutionWriter_TestException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkNonlinearElasticitySolutionWriter_TestException() : CxxTest::RealTestDescription( Tests_TestVtkNonlinearElasticitySolutionWriter, suiteDescription_TestVtkNonlinearElasticitySolutionWriter, 58, "TestException" ) {}
 void runTest() { suite_TestVtkNonlinearElasticitySolutionWriter.TestException(); }
} testDescription_TestVtkNonlinearElasticitySolutionWriter_TestException;

static class TestDescription_TestVtkNonlinearElasticitySolutionWriter_TestVtuFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVtkNonlinearElasticitySolutionWriter_TestVtuFile() : CxxTest::RealTestDescription( Tests_TestVtkNonlinearElasticitySolutionWriter, suiteDescription_TestVtkNonlinearElasticitySolutionWriter, 76, "TestVtuFile" ) {}
 void runTest() { suite_TestVtkNonlinearElasticitySolutionWriter.TestVtuFile(); }
} testDescription_TestVtkNonlinearElasticitySolutionWriter_TestVtuFile;

#include <cxxtest/Root.cpp>

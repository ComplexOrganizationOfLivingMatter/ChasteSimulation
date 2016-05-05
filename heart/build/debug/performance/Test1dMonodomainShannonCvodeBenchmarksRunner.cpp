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
#include "heart/test/performance/Test1dMonodomainShannonCvodeBenchmarks.hpp"

static Test1dMonodomainShannonCvodeBenchmarks suite_Test1dMonodomainShannonCvodeBenchmarks;

static CxxTest::List Tests_Test1dMonodomainShannonCvodeBenchmarks = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test1dMonodomainShannonCvodeBenchmarks( "heart/test/performance/Test1dMonodomainShannonCvodeBenchmarks.hpp", 199, "Test1dMonodomainShannonCvodeBenchmarks", suite_Test1dMonodomainShannonCvodeBenchmarks, Tests_Test1dMonodomainShannonCvodeBenchmarks );

static class TestDescription_Test1dMonodomainShannonCvodeBenchmarks_TestWithDifferentCellsAndSolvers : public CxxTest::RealTestDescription {
public:
 TestDescription_Test1dMonodomainShannonCvodeBenchmarks_TestWithDifferentCellsAndSolvers() : CxxTest::RealTestDescription( Tests_Test1dMonodomainShannonCvodeBenchmarks, suiteDescription_Test1dMonodomainShannonCvodeBenchmarks, 234, "TestWithDifferentCellsAndSolvers" ) {}
 void runTest() { suite_Test1dMonodomainShannonCvodeBenchmarks.TestWithDifferentCellsAndSolvers(); }
} testDescription_Test1dMonodomainShannonCvodeBenchmarks_TestWithDifferentCellsAndSolvers;

#include <cxxtest/Root.cpp>

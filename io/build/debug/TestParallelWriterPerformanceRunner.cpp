/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "io/test/TestParallelWriterPerformance.hpp"

static TestParallelWriterPerformance suite_TestParallelWriterPerformance;

static CxxTest::List Tests_TestParallelWriterPerformance = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestParallelWriterPerformance( "io/test/TestParallelWriterPerformance.hpp", 47, "TestParallelWriterPerformance", suite_TestParallelWriterPerformance, Tests_TestParallelWriterPerformance );

static class TestDescription_TestParallelWriterPerformance_Test1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestParallelWriterPerformance_Test1() : CxxTest::RealTestDescription( Tests_TestParallelWriterPerformance, suiteDescription_TestParallelWriterPerformance, 51, "Test1" ) {}
 void runTest() { suite_TestParallelWriterPerformance.Test1(); }
} testDescription_TestParallelWriterPerformance_Test1;

#include <cxxtest/Root.cpp>

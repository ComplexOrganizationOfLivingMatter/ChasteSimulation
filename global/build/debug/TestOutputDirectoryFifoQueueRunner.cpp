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
#include "global/test/TestOutputDirectoryFifoQueue.hpp"

static TestOutputDirectoryFifoQueue suite_TestOutputDirectoryFifoQueue;

static CxxTest::List Tests_TestOutputDirectoryFifoQueue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOutputDirectoryFifoQueue( "global/test/TestOutputDirectoryFifoQueue.hpp", 46, "TestOutputDirectoryFifoQueue", suite_TestOutputDirectoryFifoQueue, Tests_TestOutputDirectoryFifoQueue );

static class TestDescription_TestOutputDirectoryFifoQueue_TestQueueCreatesDirectories : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOutputDirectoryFifoQueue_TestQueueCreatesDirectories() : CxxTest::RealTestDescription( Tests_TestOutputDirectoryFifoQueue, suiteDescription_TestOutputDirectoryFifoQueue, 50, "TestQueueCreatesDirectories" ) {}
 void runTest() { suite_TestOutputDirectoryFifoQueue.TestQueueCreatesDirectories(); }
} testDescription_TestOutputDirectoryFifoQueue_TestQueueCreatesDirectories;

static class TestDescription_TestOutputDirectoryFifoQueue_TestQueueRemovesAndCreatesDirectories : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOutputDirectoryFifoQueue_TestQueueRemovesAndCreatesDirectories() : CxxTest::RealTestDescription( Tests_TestOutputDirectoryFifoQueue, suiteDescription_TestOutputDirectoryFifoQueue, 74, "TestQueueRemovesAndCreatesDirectories" ) {}
 void runTest() { suite_TestOutputDirectoryFifoQueue.TestQueueRemovesAndCreatesDirectories(); }
} testDescription_TestOutputDirectoryFifoQueue_TestQueueRemovesAndCreatesDirectories;

#include <cxxtest/Root.cpp>

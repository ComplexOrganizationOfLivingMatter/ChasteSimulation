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
#include "cell_based/test/population/TestT2SwapCellKiller.hpp"

static TestT2SwapCellKiller suite_TestT2SwapCellKiller;

static CxxTest::List Tests_TestT2SwapCellKiller = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestT2SwapCellKiller( "cell_based/test/population/TestT2SwapCellKiller.hpp", 60, "TestT2SwapCellKiller", suite_TestT2SwapCellKiller, Tests_TestT2SwapCellKiller );

static class TestDescription_TestT2SwapCellKiller_TestKillerForT2Swap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestKillerForT2Swap() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 68, "TestKillerForT2Swap" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestKillerForT2Swap(); }
} testDescription_TestT2SwapCellKiller_TestKillerForT2Swap;

static class TestDescription_TestT2SwapCellKiller_TestKillerForT2SwapInSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestKillerForT2SwapInSimulation() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 198, "TestKillerForT2SwapInSimulation" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestKillerForT2SwapInSimulation(); }
} testDescription_TestT2SwapCellKiller_TestKillerForT2SwapInSimulation;

static class TestDescription_TestT2SwapCellKiller_TestKillerForMultipleT2Swaps : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestKillerForMultipleT2Swaps() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 318, "TestKillerForMultipleT2Swaps" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestKillerForMultipleT2Swaps(); }
} testDescription_TestT2SwapCellKiller_TestKillerForMultipleT2Swaps;

static class TestDescription_TestT2SwapCellKiller_TestKillerForMultipleT2SwapInSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestKillerForMultipleT2SwapInSimulation() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 472, "TestKillerForMultipleT2SwapInSimulation" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestKillerForMultipleT2SwapInSimulation(); }
} testDescription_TestT2SwapCellKiller_TestKillerForMultipleT2SwapInSimulation;

static class TestDescription_TestT2SwapCellKiller_TestPrepareForT2Swap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestPrepareForT2Swap() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 602, "TestPrepareForT2Swap" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestPrepareForT2Swap(); }
} testDescription_TestT2SwapCellKiller_TestPrepareForT2Swap;

static class TestDescription_TestT2SwapCellKiller_TestT2SwapCellKillerException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestT2SwapCellKillerException() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 765, "TestT2SwapCellKillerException" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestT2SwapCellKillerException(); }
} testDescription_TestT2SwapCellKiller_TestT2SwapCellKillerException;

static class TestDescription_TestT2SwapCellKiller_TestArchivingOfT2SwapCellKiller : public CxxTest::RealTestDescription {
public:
 TestDescription_TestT2SwapCellKiller_TestArchivingOfT2SwapCellKiller() : CxxTest::RealTestDescription( Tests_TestT2SwapCellKiller, suiteDescription_TestT2SwapCellKiller, 782, "TestArchivingOfT2SwapCellKiller" ) {}
 void runTest() { suite_TestT2SwapCellKiller.TestArchivingOfT2SwapCellKiller(); }
} testDescription_TestT2SwapCellKiller_TestArchivingOfT2SwapCellKiller;

#include <cxxtest/Root.cpp>

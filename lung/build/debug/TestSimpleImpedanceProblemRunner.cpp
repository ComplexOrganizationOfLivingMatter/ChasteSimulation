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
#include "lung/test/TestSimpleImpedanceProblem.hpp"

static TestSimpleImpedanceProblem suite_TestSimpleImpedanceProblem;

static CxxTest::List Tests_TestSimpleImpedanceProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimpleImpedanceProblem( "lung/test/TestSimpleImpedanceProblem.hpp", 49, "TestSimpleImpedanceProblem", suite_TestSimpleImpedanceProblem, Tests_TestSimpleImpedanceProblem );

static class TestDescription_TestSimpleImpedanceProblem_TestAcinarImpedance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleImpedanceProblem_TestAcinarImpedance() : CxxTest::RealTestDescription( Tests_TestSimpleImpedanceProblem, suiteDescription_TestSimpleImpedanceProblem, 54, "TestAcinarImpedance" ) {}
 void runTest() { suite_TestSimpleImpedanceProblem.TestAcinarImpedance(); }
} testDescription_TestSimpleImpedanceProblem_TestAcinarImpedance;

static class TestDescription_TestSimpleImpedanceProblem_TestElementReactanceAndInertance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleImpedanceProblem_TestElementReactanceAndInertance() : CxxTest::RealTestDescription( Tests_TestSimpleImpedanceProblem, suiteDescription_TestSimpleImpedanceProblem, 74, "TestElementReactanceAndInertance" ) {}
 void runTest() { suite_TestSimpleImpedanceProblem.TestElementReactanceAndInertance(); }
} testDescription_TestSimpleImpedanceProblem_TestElementReactanceAndInertance;

static class TestDescription_TestSimpleImpedanceProblem_TestSolveTreeImpedance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleImpedanceProblem_TestSolveTreeImpedance() : CxxTest::RealTestDescription( Tests_TestSimpleImpedanceProblem, suiteDescription_TestSimpleImpedanceProblem, 92, "TestSolveTreeImpedance" ) {}
 void runTest() { suite_TestSimpleImpedanceProblem.TestSolveTreeImpedance(); }
} testDescription_TestSimpleImpedanceProblem_TestSolveTreeImpedance;

static class TestDescription_TestSimpleImpedanceProblem_TestMultipleFrequencies : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSimpleImpedanceProblem_TestMultipleFrequencies() : CxxTest::RealTestDescription( Tests_TestSimpleImpedanceProblem, suiteDescription_TestSimpleImpedanceProblem, 160, "TestMultipleFrequencies" ) {}
 void runTest() { suite_TestSimpleImpedanceProblem.TestMultipleFrequencies(); }
} testDescription_TestSimpleImpedanceProblem_TestMultipleFrequencies;

#include <cxxtest/Root.cpp>

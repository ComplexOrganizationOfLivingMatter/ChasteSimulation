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
#include "heart/test/extended_bidomain/TestExtendedVsBidomainProblem.hpp"

static TestExtendedVsBidomainProblem suite_TestExtendedVsBidomainProblem;

static CxxTest::List Tests_TestExtendedVsBidomainProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExtendedVsBidomainProblem( "heart/test/extended_bidomain/TestExtendedVsBidomainProblem.hpp", 171, "TestExtendedVsBidomainProblem", suite_TestExtendedVsBidomainProblem, Tests_TestExtendedVsBidomainProblem );

static class TestDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfFirstCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfFirstCell() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 229, "TestCompareStimulationOfFirstCell" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestCompareStimulationOfFirstCell(); }
} testDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfFirstCell;

static class TestDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfSecondCell : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfSecondCell() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 303, "TestCompareStimulationOfSecondCell" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestCompareStimulationOfSecondCell(); }
} testDescription_TestExtendedVsBidomainProblem_TestCompareStimulationOfSecondCell;

static class TestDescription_TestExtendedVsBidomainProblem_TestCompareNullBasis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestCompareNullBasis() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 388, "TestCompareNullBasis" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestCompareNullBasis(); }
} testDescription_TestExtendedVsBidomainProblem_TestCompareNullBasis;

static class TestDescription_TestExtendedVsBidomainProblem_TestComparePinnedNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestComparePinnedNode() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 487, "TestComparePinnedNode" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestComparePinnedNode(); }
} testDescription_TestExtendedVsBidomainProblem_TestComparePinnedNode;

static class TestDescription_TestExtendedVsBidomainProblem_TestHeterogeneousGgap : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestHeterogeneousGgap() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 534, "TestHeterogeneousGgap" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestHeterogeneousGgap(); }
} testDescription_TestExtendedVsBidomainProblem_TestHeterogeneousGgap;

static class TestDescription_TestExtendedVsBidomainProblem_TestSomeOtherMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestSomeOtherMethods() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 624, "TestSomeOtherMethods" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestSomeOtherMethods(); }
} testDescription_TestExtendedVsBidomainProblem_TestSomeOtherMethods;

static class TestDescription_TestExtendedVsBidomainProblem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExtendedVsBidomainProblem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestExtendedVsBidomainProblem, suiteDescription_TestExtendedVsBidomainProblem, 660, "TestExceptions" ) {}
 void runTest() { suite_TestExtendedVsBidomainProblem.TestExceptions(); }
} testDescription_TestExtendedVsBidomainProblem_TestExceptions;

#include <cxxtest/Root.cpp>

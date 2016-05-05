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
#include "heart/test/monodomain/TestOperatorSplittingMonodomainSolver.hpp"

static TestOperatorSplittingMonodomainSolver suite_TestOperatorSplittingMonodomainSolver;

static CxxTest::List Tests_TestOperatorSplittingMonodomainSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOperatorSplittingMonodomainSolver( "heart/test/monodomain/TestOperatorSplittingMonodomainSolver.hpp", 93, "TestOperatorSplittingMonodomainSolver", suite_TestOperatorSplittingMonodomainSolver, Tests_TestOperatorSplittingMonodomainSolver );

static class TestDescription_TestOperatorSplittingMonodomainSolver_TestComparisonOnNormalMeshes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOperatorSplittingMonodomainSolver_TestComparisonOnNormalMeshes() : CxxTest::RealTestDescription( Tests_TestOperatorSplittingMonodomainSolver, suiteDescription_TestOperatorSplittingMonodomainSolver, 102, "TestComparisonOnNormalMeshes" ) {}
 void runTest() { suite_TestOperatorSplittingMonodomainSolver.TestComparisonOnNormalMeshes(); }
} testDescription_TestOperatorSplittingMonodomainSolver_TestComparisonOnNormalMeshes;

#include <cxxtest/Root.cpp>

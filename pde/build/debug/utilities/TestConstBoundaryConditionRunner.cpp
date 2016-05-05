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
#include "pde/test/utilities/TestConstBoundaryCondition.hpp"

static TestConstDirichletBoundaryCondition suite_TestConstDirichletBoundaryCondition;

static CxxTest::List Tests_TestConstDirichletBoundaryCondition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestConstDirichletBoundaryCondition( "pde/test/utilities/TestConstBoundaryCondition.hpp", 44, "TestConstDirichletBoundaryCondition", suite_TestConstDirichletBoundaryCondition, Tests_TestConstDirichletBoundaryCondition );

static class TestDescription_TestConstDirichletBoundaryCondition_TestConstDirichletBoundaryConditionMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConstDirichletBoundaryCondition_TestConstDirichletBoundaryConditionMethod() : CxxTest::RealTestDescription( Tests_TestConstDirichletBoundaryCondition, suiteDescription_TestConstDirichletBoundaryCondition, 47, "TestConstDirichletBoundaryConditionMethod" ) {}
 void runTest() { suite_TestConstDirichletBoundaryCondition.TestConstDirichletBoundaryConditionMethod(); }
} testDescription_TestConstDirichletBoundaryCondition_TestConstDirichletBoundaryConditionMethod;

#include <cxxtest/Root.cpp>

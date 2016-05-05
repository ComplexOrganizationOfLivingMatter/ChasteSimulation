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
#include "ode/test/TestBackwardEulerIvpOdeSolver.hpp"

static TestBackwardEulerIvpOdeSolver suite_TestBackwardEulerIvpOdeSolver;

static CxxTest::List Tests_TestBackwardEulerIvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBackwardEulerIvpOdeSolver( "ode/test/TestBackwardEulerIvpOdeSolver.hpp", 57, "TestBackwardEulerIvpOdeSolver", suite_TestBackwardEulerIvpOdeSolver, Tests_TestBackwardEulerIvpOdeSolver );

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3Equations() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 60, "TestBackwardEulerSystemOf3Equations" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerSystemOf3Equations(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3Equations;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerNonlinearEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerNonlinearEquation() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 96, "TestBackwardEulerNonlinearEquation" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerNonlinearEquation(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerNonlinearEquation;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquation() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 120, "TestBackwardEulerAnotherNonlinearEquation" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerAnotherNonlinearEquation(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquation;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3EquationsWithEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3EquationsWithEvents() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 145, "TestBackwardEulerSystemOf3EquationsWithEvents" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerSystemOf3EquationsWithEvents(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerSystemOf3EquationsWithEvents;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquationAnalytic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquationAnalytic() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 172, "TestBackwardEulerAnotherNonlinearEquationAnalytic" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerAnotherNonlinearEquationAnalytic(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerAnotherNonlinearEquationAnalytic;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerVanDerPolOde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerVanDerPolOde() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 197, "TestBackwardEulerVanDerPolOde" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestBackwardEulerVanDerPolOde(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestBackwardEulerVanDerPolOde;

static class TestDescription_TestBackwardEulerIvpOdeSolver_TestArchivingSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBackwardEulerIvpOdeSolver_TestArchivingSolver() : CxxTest::RealTestDescription( Tests_TestBackwardEulerIvpOdeSolver, suiteDescription_TestBackwardEulerIvpOdeSolver, 228, "TestArchivingSolver" ) {}
 void runTest() { suite_TestBackwardEulerIvpOdeSolver.TestArchivingSolver(); }
} testDescription_TestBackwardEulerIvpOdeSolver_TestArchivingSolver;

#include <cxxtest/Root.cpp>

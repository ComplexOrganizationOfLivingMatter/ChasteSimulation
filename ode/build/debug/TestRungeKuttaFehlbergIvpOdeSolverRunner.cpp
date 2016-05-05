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
#include "ode/test/TestRungeKuttaFehlbergIvpOdeSolver.hpp"

static TestRungeKuttaFehlbergIvpOdeSolver suite_TestRungeKuttaFehlbergIvpOdeSolver;

static CxxTest::List Tests_TestRungeKuttaFehlbergIvpOdeSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver( "ode/test/TestRungeKuttaFehlbergIvpOdeSolver.hpp", 58, "TestRungeKuttaFehlbergIvpOdeSolver", suite_TestRungeKuttaFehlbergIvpOdeSolver, Tests_TestRungeKuttaFehlbergIvpOdeSolver );

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestAdjustStepSize : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestAdjustStepSize() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 62, "TestAdjustStepSize" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestAdjustStepSize(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestAdjustStepSize;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestCalculateNextYValue : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestCalculateNextYValue() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 114, "TestCalculateNextYValue" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestCalculateNextYValue(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestCalculateNextYValue;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergWithExampleFromBook : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergWithExampleFromBook() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 142, "TestRKFehlbergWithExampleFromBook" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergWithExampleFromBook(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergWithExampleFromBook;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3Equations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3Equations() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 186, "TestRKFehlbergSystemOf3Equations" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergSystemOf3Equations(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3Equations;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergNonlinearEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergNonlinearEquation() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 216, "TestRKFehlbergNonlinearEquation" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergNonlinearEquation(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergNonlinearEquation;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquation() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 240, "TestRKFehlbergAnotherNonlinearEquation" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergAnotherNonlinearEquation(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquation;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3EquationsWithEvents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3EquationsWithEvents() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 265, "TestRKFehlbergSystemOf3EquationsWithEvents" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergSystemOf3EquationsWithEvents(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergSystemOf3EquationsWithEvents;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquationAnalytic : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquationAnalytic() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 304, "TestRKFehlbergAnotherNonlinearEquationAnalytic" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergAnotherNonlinearEquationAnalytic(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergAnotherNonlinearEquationAnalytic;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergVanDerPolOde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergVanDerPolOde() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 329, "TestRKFehlbergVanDerPolOde" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestRKFehlbergVanDerPolOde(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestRKFehlbergVanDerPolOde;

static class TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestArchivingRkfSolver : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestArchivingRkfSolver() : CxxTest::RealTestDescription( Tests_TestRungeKuttaFehlbergIvpOdeSolver, suiteDescription_TestRungeKuttaFehlbergIvpOdeSolver, 363, "TestArchivingRkfSolver" ) {}
 void runTest() { suite_TestRungeKuttaFehlbergIvpOdeSolver.TestArchivingRkfSolver(); }
} testDescription_TestRungeKuttaFehlbergIvpOdeSolver_TestArchivingRkfSolver;

#include <cxxtest/Root.cpp>

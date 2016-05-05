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
#include "pde/test/TestPdeTestClasses.hpp"

static TestPdeTestClasses suite_TestPdeTestClasses;

static CxxTest::List Tests_TestPdeTestClasses = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPdeTestClasses( "pde/test/TestPdeTestClasses.hpp", 59, "TestPdeTestClasses", suite_TestPdeTestClasses, Tests_TestPdeTestClasses );

static class TestDescription_TestPdeTestClasses_TestSimplePoissonEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestSimplePoissonEquation() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 62, "TestSimplePoissonEquation" ) {}
 void runTest() { suite_TestPdeTestClasses.TestSimplePoissonEquation(); }
} testDescription_TestPdeTestClasses_TestSimplePoissonEquation;

static class TestDescription_TestPdeTestClasses_TestNonlinearEquationPde : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestNonlinearEquationPde() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 95, "TestNonlinearEquationPde" ) {}
 void runTest() { suite_TestPdeTestClasses.TestNonlinearEquationPde(); }
} testDescription_TestPdeTestClasses_TestNonlinearEquationPde;

static class TestDescription_TestPdeTestClasses_TestHeatEquation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestHeatEquation() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 129, "TestHeatEquation" ) {}
 void runTest() { suite_TestPdeTestClasses.TestHeatEquation(); }
} testDescription_TestPdeTestClasses_TestHeatEquation;

static class TestDescription_TestPdeTestClasses_TestHeatEquationWithElementDependentSourceTerm : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestHeatEquationWithElementDependentSourceTerm() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 170, "TestHeatEquationWithElementDependentSourceTerm" ) {}
 void runTest() { suite_TestPdeTestClasses.TestHeatEquationWithElementDependentSourceTerm(); }
} testDescription_TestPdeTestClasses_TestHeatEquationWithElementDependentSourceTerm;

static class TestDescription_TestPdeTestClasses_TestVaryingPde1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestVaryingPde1D() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 248, "TestVaryingPde1D" ) {}
 void runTest() { suite_TestPdeTestClasses.TestVaryingPde1D(); }
} testDescription_TestPdeTestClasses_TestVaryingPde1D;

static class TestDescription_TestPdeTestClasses_TestVaryingPde2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestVaryingPde2D() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 257, "TestVaryingPde2D" ) {}
 void runTest() { suite_TestPdeTestClasses.TestVaryingPde2D(); }
} testDescription_TestPdeTestClasses_TestVaryingPde2D;

static class TestDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeMethods() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 269, "TestSimpleUniformSourceParabolicPdeMethods" ) {}
 void runTest() { suite_TestPdeTestClasses.TestSimpleUniformSourceParabolicPdeMethods(); }
} testDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeMethods;

static class TestDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeArchiving() : CxxTest::RealTestDescription( Tests_TestPdeTestClasses, suiteDescription_TestPdeTestClasses, 296, "TestSimpleUniformSourceParabolicPdeArchiving" ) {}
 void runTest() { suite_TestPdeTestClasses.TestSimpleUniformSourceParabolicPdeArchiving(); }
} testDescription_TestPdeTestClasses_TestSimpleUniformSourceParabolicPdeArchiving;

#include <cxxtest/Root.cpp>

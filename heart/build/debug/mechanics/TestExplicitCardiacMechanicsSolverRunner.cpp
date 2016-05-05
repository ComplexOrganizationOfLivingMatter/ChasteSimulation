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
#include "heart/test/mechanics/TestExplicitCardiacMechanicsSolver.hpp"

static TestExplicitCardiacMechanicsSolver suite_TestExplicitCardiacMechanicsSolver;

static CxxTest::List Tests_TestExplicitCardiacMechanicsSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestExplicitCardiacMechanicsSolver( "heart/test/mechanics/TestExplicitCardiacMechanicsSolver.hpp", 58, "TestExplicitCardiacMechanicsSolver", suite_TestExplicitCardiacMechanicsSolver, Tests_TestExplicitCardiacMechanicsSolver );

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestWithSimpleContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestWithSimpleContractionModel() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 61, "TestWithSimpleContractionModel" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestWithSimpleContractionModel(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestWithSimpleContractionModel;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchIndependentContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchIndependentContractionModel() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 116, "TestCompareImplicitAndExplicitWithStretchIndependentContractionModel" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestCompareImplicitAndExplicitWithStretchIndependentContractionModel(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchIndependentContractionModel;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchDependentContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchDependentContractionModel() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 173, "TestCompareImplicitAndExplicitWithStretchDependentContractionModel" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestCompareImplicitAndExplicitWithStretchDependentContractionModel(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestCompareImplicitAndExplicitWithStretchDependentContractionModel;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestCoverage() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 261, "TestCoverage" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestCoverage(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestCoverage;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 339, "TestCrossFibreTensionWithSimpleContractionModel" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestCrossFibreTensionWithSimpleContractionModel(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 425, "TestIsotropicCrossFibreTensions" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestIsotropicCrossFibreTensions(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions;

static class TestDescription_TestExplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestExplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions() : CxxTest::RealTestDescription( Tests_TestExplicitCardiacMechanicsSolver, suiteDescription_TestExplicitCardiacMechanicsSolver, 515, "TestAnisotropicCrossFibreTensions" ) {}
 void runTest() { suite_TestExplicitCardiacMechanicsSolver.TestAnisotropicCrossFibreTensions(); }
} testDescription_TestExplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions;

#include <cxxtest/Root.cpp>

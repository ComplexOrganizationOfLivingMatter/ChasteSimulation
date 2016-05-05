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
#include "heart/test/mechanics/TestImplicitCardiacMechanicsSolver.hpp"

static TestImplicitCardiacMechanicsSolver suite_TestImplicitCardiacMechanicsSolver;

static CxxTest::List Tests_TestImplicitCardiacMechanicsSolver = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestImplicitCardiacMechanicsSolver( "heart/test/mechanics/TestImplicitCardiacMechanicsSolver.hpp", 61, "TestImplicitCardiacMechanicsSolver", suite_TestImplicitCardiacMechanicsSolver, Tests_TestImplicitCardiacMechanicsSolver );

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestCompareJacobians : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestCompareJacobians() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 64, "TestCompareJacobians" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestCompareJacobians(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestCompareJacobians;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestWithZeroActiveTension : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestWithZeroActiveTension() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 172, "TestWithZeroActiveTension" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestWithZeroActiveTension(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestWithZeroActiveTension;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestSpecifiedCalciumCompression : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestSpecifiedCalciumCompression() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 222, "TestSpecifiedCalciumCompression" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestSpecifiedCalciumCompression(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestSpecifiedCalciumCompression;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestDifferentFibreDirections : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestDifferentFibreDirections() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 343, "TestDifferentFibreDirections" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestDifferentFibreDirections(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestDifferentFibreDirections;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestCoverage() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 441, "TestCoverage" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestCoverage(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestCoverage;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestComputeDeformationGradientAndStretchesEachElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestComputeDeformationGradientAndStretchesEachElement() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 489, "TestComputeDeformationGradientAndStretchesEachElement" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestComputeDeformationGradientAndStretchesEachElement(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestComputeDeformationGradientAndStretchesEachElement;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestDefineFibresPerQuadraturePoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestDefineFibresPerQuadraturePoint() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 590, "TestDefineFibresPerQuadraturePoint" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestDefineFibresPerQuadraturePoint(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestDefineFibresPerQuadraturePoint;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 663, "TestCrossFibreTensionWithSimpleContractionModel" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestCrossFibreTensionWithSimpleContractionModel(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestCrossFibreTensionWithSimpleContractionModel;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 756, "TestIsotropicCrossFibreTensions" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestIsotropicCrossFibreTensions(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestIsotropicCrossFibreTensions;

static class TestDescription_TestImplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestImplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions() : CxxTest::RealTestDescription( Tests_TestImplicitCardiacMechanicsSolver, suiteDescription_TestImplicitCardiacMechanicsSolver, 846, "TestAnisotropicCrossFibreTensions" ) {}
 void runTest() { suite_TestImplicitCardiacMechanicsSolver.TestAnisotropicCrossFibreTensions(); }
} testDescription_TestImplicitCardiacMechanicsSolver_TestAnisotropicCrossFibreTensions;

#include <cxxtest/Root.cpp>

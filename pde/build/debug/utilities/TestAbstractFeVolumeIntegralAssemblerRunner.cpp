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
#include "pde/test/utilities/TestAbstractFeVolumeIntegralAssembler.hpp"

static TestAbstractFeVolumeIntegralAssembler suite_TestAbstractFeVolumeIntegralAssembler;

static CxxTest::List Tests_TestAbstractFeVolumeIntegralAssembler = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestAbstractFeVolumeIntegralAssembler( "pde/test/utilities/TestAbstractFeVolumeIntegralAssembler.hpp", 185, "TestAbstractFeVolumeIntegralAssembler", suite_TestAbstractFeVolumeIntegralAssembler, Tests_TestAbstractFeVolumeIntegralAssembler );

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAssemblers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAssemblers() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 230, "TestBasicVectorAssemblers" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestBasicVectorAssemblers(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAssemblers;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicMatrixAssemblers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicMatrixAssemblers() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 243, "TestBasicMatrixAssemblers" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestBasicMatrixAssemblers(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicMatrixAssemblers;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAndMatrixAssembler : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAndMatrixAssembler() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 274, "TestBasicVectorAndMatrixAssembler" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestBasicVectorAndMatrixAssembler(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestBasicVectorAndMatrixAssembler;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler1d() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 377, "TestMassMatrixAssembler1d" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestMassMatrixAssembler1d(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler1d;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler2dIncludingScaleFactor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler2dIncludingScaleFactor() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 458, "TestMassMatrixAssembler2dIncludingScaleFactor" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestMassMatrixAssembler2dIncludingScaleFactor(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestMassMatrixAssembler2dIncludingScaleFactor;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestStiffnessMatrixAssembler1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestStiffnessMatrixAssembler1d() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 515, "TestStiffnessMatrixAssembler1d" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestStiffnessMatrixAssembler1d(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestStiffnessMatrixAssembler1d;

static class TestDescription_TestAbstractFeVolumeIntegralAssembler_TestInterpolationOfPositionAndCurrentSolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestAbstractFeVolumeIntegralAssembler_TestInterpolationOfPositionAndCurrentSolution() : CxxTest::RealTestDescription( Tests_TestAbstractFeVolumeIntegralAssembler, suiteDescription_TestAbstractFeVolumeIntegralAssembler, 595, "TestInterpolationOfPositionAndCurrentSolution" ) {}
 void runTest() { suite_TestAbstractFeVolumeIntegralAssembler.TestInterpolationOfPositionAndCurrentSolution(); }
} testDescription_TestAbstractFeVolumeIntegralAssembler_TestInterpolationOfPositionAndCurrentSolution;

#include <cxxtest/Root.cpp>

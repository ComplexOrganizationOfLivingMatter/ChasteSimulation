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
#include "heart/test/fibres/TestPapillaryFibreCalculator.hpp"

static TestPapillaryFibreCalculator suite_TestPapillaryFibreCalculator;

static CxxTest::List Tests_TestPapillaryFibreCalculator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPapillaryFibreCalculator( "heart/test/fibres/TestPapillaryFibreCalculator.hpp", 43, "TestPapillaryFibreCalculator", suite_TestPapillaryFibreCalculator, Tests_TestPapillaryFibreCalculator );

static class TestDescription_TestPapillaryFibreCalculator_TestGetSingleRadiusVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPapillaryFibreCalculator_TestGetSingleRadiusVector() : CxxTest::RealTestDescription( Tests_TestPapillaryFibreCalculator, suiteDescription_TestPapillaryFibreCalculator, 47, "TestGetSingleRadiusVector" ) {}
 void runTest() { suite_TestPapillaryFibreCalculator.TestGetSingleRadiusVector(); }
} testDescription_TestPapillaryFibreCalculator_TestGetSingleRadiusVector;

static class TestDescription_TestPapillaryFibreCalculator_TestGetRadiusVectorsAndConstructStructureTensors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPapillaryFibreCalculator_TestGetRadiusVectorsAndConstructStructureTensors() : CxxTest::RealTestDescription( Tests_TestPapillaryFibreCalculator, suiteDescription_TestPapillaryFibreCalculator, 67, "TestGetRadiusVectorsAndConstructStructureTensors" ) {}
 void runTest() { suite_TestPapillaryFibreCalculator.TestGetRadiusVectorsAndConstructStructureTensors(); }
} testDescription_TestPapillaryFibreCalculator_TestGetRadiusVectorsAndConstructStructureTensors;

static class TestDescription_TestPapillaryFibreCalculator_TestGetFibreOrientationsOnSimpleCube : public CxxTest::RealTestDescription {
public:
 TestDescription_TestPapillaryFibreCalculator_TestGetFibreOrientationsOnSimpleCube() : CxxTest::RealTestDescription( Tests_TestPapillaryFibreCalculator, suiteDescription_TestPapillaryFibreCalculator, 136, "TestGetFibreOrientationsOnSimpleCube" ) {}
 void runTest() { suite_TestPapillaryFibreCalculator.TestGetFibreOrientationsOnSimpleCube(); }
} testDescription_TestPapillaryFibreCalculator_TestGetFibreOrientationsOnSimpleCube;

#include <cxxtest/Root.cpp>

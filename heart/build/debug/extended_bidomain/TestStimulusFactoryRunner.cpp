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
#include "heart/test/extended_bidomain/TestStimulusFactory.hpp"

static TestStimulusFactory suite_TestStimulusFactory;

static CxxTest::List Tests_TestStimulusFactory = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestStimulusFactory( "heart/test/extended_bidomain/TestStimulusFactory.hpp", 92, "TestStimulusFactory", suite_TestStimulusFactory, Tests_TestStimulusFactory );

static class TestDescription_TestStimulusFactory_TestDefaultImplementation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestDefaultImplementation() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 96, "TestDefaultImplementation" ) {}
 void runTest() { suite_TestStimulusFactory.TestDefaultImplementation(); }
} testDescription_TestStimulusFactory_TestDefaultImplementation;

static class TestDescription_TestStimulusFactory_TestOneFactory : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestOneFactory() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 119, "TestOneFactory" ) {}
 void runTest() { suite_TestStimulusFactory.TestOneFactory(); }
} testDescription_TestStimulusFactory_TestOneFactory;

static class TestDescription_TestStimulusFactory_TestComputeContributiontoRHS : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestComputeContributiontoRHS() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 150, "TestComputeContributiontoRHS" ) {}
 void runTest() { suite_TestStimulusFactory.TestComputeContributiontoRHS(); }
} testDescription_TestStimulusFactory_TestComputeContributiontoRHS;

static class TestDescription_TestStimulusFactory_TestRegularCubeChasteNodesList : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestRegularCubeChasteNodesList() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 223, "TestRegularCubeChasteNodesList" ) {}
 void runTest() { suite_TestStimulusFactory.TestRegularCubeChasteNodesList(); }
} testDescription_TestStimulusFactory_TestRegularCubeChasteNodesList;

static class TestDescription_TestStimulusFactory_TestIrregularCubeChastecuboid : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestIrregularCubeChastecuboid() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 312, "TestIrregularCubeChastecuboid" ) {}
 void runTest() { suite_TestStimulusFactory.TestIrregularCubeChastecuboid(); }
} testDescription_TestStimulusFactory_TestIrregularCubeChastecuboid;

static class TestDescription_TestStimulusFactory_TestRegularCubeZeroNetChargeElectrodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestRegularCubeZeroNetChargeElectrodes() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 368, "TestRegularCubeZeroNetChargeElectrodes" ) {}
 void runTest() { suite_TestStimulusFactory.TestRegularCubeZeroNetChargeElectrodes(); }
} testDescription_TestStimulusFactory_TestRegularCubeZeroNetChargeElectrodes;

static class TestDescription_TestStimulusFactory_TestGroundingSecondElectrode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestGroundingSecondElectrode() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 425, "TestGroundingSecondElectrode" ) {}
 void runTest() { suite_TestStimulusFactory.TestGroundingSecondElectrode(); }
} testDescription_TestStimulusFactory_TestGroundingSecondElectrode;

static class TestDescription_TestStimulusFactory_TestRegularCubeIntersecting : public CxxTest::RealTestDescription {
public:
 TestDescription_TestStimulusFactory_TestRegularCubeIntersecting() : CxxTest::RealTestDescription( Tests_TestStimulusFactory, suiteDescription_TestStimulusFactory, 528, "TestRegularCubeIntersecting" ) {}
 void runTest() { suite_TestStimulusFactory.TestRegularCubeIntersecting(); }
} testDescription_TestStimulusFactory_TestRegularCubeIntersecting;

#include <cxxtest/Root.cpp>

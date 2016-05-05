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
#include "heart/test/mechanics/TestCardiacElectroMechanicsFurtherFunctionality.hpp"

static TestCardiacElectroMechanicsFurtherFunctionality suite_TestCardiacElectroMechanicsFurtherFunctionality;

static CxxTest::List Tests_TestCardiacElectroMechanicsFurtherFunctionality = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality( "heart/test/mechanics/TestCardiacElectroMechanicsFurtherFunctionality.hpp", 52, "TestCardiacElectroMechanicsFurtherFunctionality", suite_TestCardiacElectroMechanicsFurtherFunctionality, Tests_TestCardiacElectroMechanicsFurtherFunctionality );

static class TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeterminingWatchedNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeterminingWatchedNodes() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsFurtherFunctionality, suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality, 55, "TestDeterminingWatchedNodes" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsFurtherFunctionality.TestDeterminingWatchedNodes(); }
} testDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeterminingWatchedNodes;

static class TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMechanoElectricFeedback : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMechanoElectricFeedback() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsFurtherFunctionality, suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality, 99, "TestWithMechanoElectricFeedback" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsFurtherFunctionality.TestWithMechanoElectricFeedback(); }
} testDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMechanoElectricFeedback;

static class TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMefAndAlteredConductivitesHeterogeneousStretch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMefAndAlteredConductivitesHeterogeneousStretch() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsFurtherFunctionality, suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality, 210, "TestWithMefAndAlteredConductivitesHeterogeneousStretch" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsFurtherFunctionality.TestWithMefAndAlteredConductivitesHeterogeneousStretch(); }
} testDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestWithMefAndAlteredConductivitesHeterogeneousStretch;

static class TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeformationAffectingConductivity : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeformationAffectingConductivity() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsFurtherFunctionality, suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality, 308, "TestDeformationAffectingConductivity" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsFurtherFunctionality.TestDeformationAffectingConductivity(); }
} testDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestDeformationAffectingConductivity;

static class TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestCardiacElectroMechanicsHeterogeneousMaterialLaws : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestCardiacElectroMechanicsHeterogeneousMaterialLaws() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsFurtherFunctionality, suiteDescription_TestCardiacElectroMechanicsFurtherFunctionality, 411, "TestCardiacElectroMechanicsHeterogeneousMaterialLaws" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsFurtherFunctionality.TestCardiacElectroMechanicsHeterogeneousMaterialLaws(); }
} testDescription_TestCardiacElectroMechanicsFurtherFunctionality_TestCardiacElectroMechanicsHeterogeneousMaterialLaws;

#include <cxxtest/Root.cpp>

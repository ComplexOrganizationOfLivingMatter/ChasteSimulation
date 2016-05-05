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
#include "heart/test/postprocessing/TestCellProperties.hpp"

static TestCellProperties suite_TestCellProperties;

static CxxTest::List Tests_TestCellProperties = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCellProperties( "heart/test/postprocessing/TestCellProperties.hpp", 60, "TestCellProperties", suite_TestCellProperties, Tests_TestCellProperties );

static class TestDescription_TestCellProperties_TestExceptionalBehaviour : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProperties_TestExceptionalBehaviour() : CxxTest::RealTestDescription( Tests_TestCellProperties, suiteDescription_TestCellProperties, 82, "TestExceptionalBehaviour" ) {}
 void runTest() { suite_TestCellProperties.TestExceptionalBehaviour(); }
} testDescription_TestCellProperties_TestExceptionalBehaviour;

static class TestDescription_TestCellProperties_TestCellPhysiologicalPropertiesForRegularLr91 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProperties_TestCellPhysiologicalPropertiesForRegularLr91() : CxxTest::RealTestDescription( Tests_TestCellProperties, suiteDescription_TestCellProperties, 194, "TestCellPhysiologicalPropertiesForRegularLr91" ) {}
 void runTest() { suite_TestCellProperties.TestCellPhysiologicalPropertiesForRegularLr91(); }
} testDescription_TestCellProperties_TestCellPhysiologicalPropertiesForRegularLr91;

static class TestDescription_TestCellProperties_TestTrickyActionPotential : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProperties_TestTrickyActionPotential() : CxxTest::RealTestDescription( Tests_TestCellProperties, suiteDescription_TestCellProperties, 248, "TestTrickyActionPotential" ) {}
 void runTest() { suite_TestCellProperties.TestTrickyActionPotential(); }
} testDescription_TestCellProperties_TestTrickyActionPotential;

static class TestDescription_TestCellProperties_TestEadDetection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProperties_TestEadDetection() : CxxTest::RealTestDescription( Tests_TestCellProperties, suiteDescription_TestCellProperties, 327, "TestEadDetection" ) {}
 void runTest() { suite_TestCellProperties.TestEadDetection(); }
} testDescription_TestCellProperties_TestEadDetection;

static class TestDescription_TestCellProperties_TestActionPotentialCalculations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCellProperties_TestActionPotentialCalculations() : CxxTest::RealTestDescription( Tests_TestCellProperties, suiteDescription_TestCellProperties, 366, "TestActionPotentialCalculations" ) {}
 void runTest() { suite_TestCellProperties.TestActionPotentialCalculations(); }
} testDescription_TestCellProperties_TestActionPotentialCalculations;

#include <cxxtest/Root.cpp>

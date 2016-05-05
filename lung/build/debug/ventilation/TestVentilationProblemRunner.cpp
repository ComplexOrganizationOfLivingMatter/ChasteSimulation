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
#include "lung/test/ventilation/TestVentilationProblem.hpp"

static TestVentilationProblem suite_TestVentilationProblem;

static CxxTest::List Tests_TestVentilationProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVentilationProblem( "lung/test/ventilation/TestVentilationProblem.hpp", 77, "TestVentilationProblem", suite_TestVentilationProblem, Tests_TestVentilationProblem );

static class TestDescription_TestVentilationProblem_TestOnBranch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestOnBranch() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 82, "TestOnBranch" ) {}
 void runTest() { suite_TestVentilationProblem.TestOnBranch(); }
} testDescription_TestVentilationProblem_TestOnBranch;

static class TestDescription_TestVentilationProblem_TestOnBranchCylindrical : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestOnBranchCylindrical() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 105, "TestOnBranchCylindrical" ) {}
 void runTest() { suite_TestVentilationProblem.TestOnBranchCylindrical(); }
} testDescription_TestVentilationProblem_TestOnBranchCylindrical;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 134, "TestThreeBifurcationsWithRadiusOnEdgeFile" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsWithRadiusOnEdgeFile(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile;

static class TestDescription_TestVentilationProblem_TestThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 162, "TestThreeBifurcations" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcations(); }
} testDescription_TestVentilationProblem_TestThreeBifurcations;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsSnes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsSnes() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 187, "TestThreeBifurcationsSnes" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsSnes(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsSnes;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksDirect : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksDirect() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 212, "TestThreeBifurcationsExtraLinksDirect" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsExtraLinksDirect(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksDirect;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinks : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinks() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 242, "TestThreeBifurcationsExtraLinks" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsExtraLinks(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinks;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsFluxBoundaries : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsFluxBoundaries() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 273, "TestThreeBifurcationsFluxBoundaries" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsFluxBoundaries(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsFluxBoundaries;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsWithDynamicResistance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsWithDynamicResistance() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 298, "TestThreeBifurcationsWithDynamicResistance" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsWithDynamicResistance(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsWithDynamicResistance;

static class TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 329, "TestThreeBifurcationsExtraLinksWithDynamicResistance" ) {}
 void runTest() { suite_TestVentilationProblem.TestThreeBifurcationsExtraLinksWithDynamicResistance(); }
} testDescription_TestVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance;

static class TestDescription_TestVentilationProblem_TestTimeVaryingThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestTimeVaryingThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 356, "TestTimeVaryingThreeBifurcations" ) {}
 void runTest() { suite_TestVentilationProblem.TestTimeVaryingThreeBifurcations(); }
} testDescription_TestVentilationProblem_TestTimeVaryingThreeBifurcations;

static class TestDescription_TestVentilationProblem_TestSineThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestSineThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 365, "TestSineThreeBifurcations" ) {}
 void runTest() { suite_TestVentilationProblem.TestSineThreeBifurcations(); }
} testDescription_TestVentilationProblem_TestSineThreeBifurcations;

static class TestDescription_TestVentilationProblem_TestGravitationalVaryingThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestGravitationalVaryingThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 382, "TestGravitationalVaryingThreeBifurcations" ) {}
 void runTest() { suite_TestVentilationProblem.TestGravitationalVaryingThreeBifurcations(); }
} testDescription_TestVentilationProblem_TestGravitationalVaryingThreeBifurcations;

static class TestDescription_TestVentilationProblem_TestSolveProblemDefinedInFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestSolveProblemDefinedInFile() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 401, "TestSolveProblemDefinedInFile" ) {}
 void runTest() { suite_TestVentilationProblem.TestSolveProblemDefinedInFile(); }
} testDescription_TestVentilationProblem_TestSolveProblemDefinedInFile;

static class TestDescription_TestVentilationProblem_TestTopOfAirwaysPatientData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestTopOfAirwaysPatientData() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 407, "TestTopOfAirwaysPatientData" ) {}
 void runTest() { suite_TestVentilationProblem.TestTopOfAirwaysPatientData(); }
} testDescription_TestVentilationProblem_TestTopOfAirwaysPatientData;

static class TestDescription_TestVentilationProblem_TestPatientData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestPatientData() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 442, "TestPatientData" ) {}
 void runTest() { suite_TestVentilationProblem.TestPatientData(); }
} testDescription_TestVentilationProblem_TestPatientData;

static class TestDescription_TestVentilationProblem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVentilationProblem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestVentilationProblem, suiteDescription_TestVentilationProblem, 502, "TestExceptions" ) {}
 void runTest() { suite_TestVentilationProblem.TestExceptions(); }
} testDescription_TestVentilationProblem_TestExceptions;

#include <cxxtest/Root.cpp>

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
#include "lung/test/ventilation/TestMatrixVentilationProblem.hpp"

static TestMatrixVentilationProblem suite_TestMatrixVentilationProblem;

static CxxTest::List Tests_TestMatrixVentilationProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMatrixVentilationProblem( "lung/test/ventilation/TestMatrixVentilationProblem.hpp", 76, "TestMatrixVentilationProblem", suite_TestMatrixVentilationProblem, Tests_TestMatrixVentilationProblem );

static class TestDescription_TestMatrixVentilationProblem_TestOnBranch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestOnBranch() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 81, "TestOnBranch" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestOnBranch(); }
} testDescription_TestMatrixVentilationProblem_TestOnBranch;

static class TestDescription_TestMatrixVentilationProblem_TestOnBranchCylindrical : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestOnBranchCylindrical() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 104, "TestOnBranchCylindrical" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestOnBranchCylindrical(); }
} testDescription_TestMatrixVentilationProblem_TestOnBranchCylindrical;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 133, "TestThreeBifurcationsWithRadiusOnEdgeFile" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsWithRadiusOnEdgeFile(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithRadiusOnEdgeFile;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 161, "TestThreeBifurcations" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcations(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcations;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksDirect : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksDirect() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 186, "TestThreeBifurcationsExtraLinksDirect" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsExtraLinksDirect(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksDirect;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinks : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinks() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 214, "TestThreeBifurcationsExtraLinks" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsExtraLinks(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinks;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsFluxBoundaries : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsFluxBoundaries() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 245, "TestThreeBifurcationsFluxBoundaries" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsFluxBoundaries(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsFluxBoundaries;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithDynamicResistance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithDynamicResistance() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 270, "TestThreeBifurcationsWithDynamicResistance" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsWithDynamicResistance(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsWithDynamicResistance;

static class TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 302, "TestThreeBifurcationsExtraLinksWithDynamicResistance" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestThreeBifurcationsExtraLinksWithDynamicResistance(); }
} testDescription_TestMatrixVentilationProblem_TestThreeBifurcationsExtraLinksWithDynamicResistance;

static class TestDescription_TestMatrixVentilationProblem_TestTimeVaryingThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestTimeVaryingThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 329, "TestTimeVaryingThreeBifurcations" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestTimeVaryingThreeBifurcations(); }
} testDescription_TestMatrixVentilationProblem_TestTimeVaryingThreeBifurcations;

static class TestDescription_TestMatrixVentilationProblem_TestSineThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestSineThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 338, "TestSineThreeBifurcations" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestSineThreeBifurcations(); }
} testDescription_TestMatrixVentilationProblem_TestSineThreeBifurcations;

static class TestDescription_TestMatrixVentilationProblem_TestGravitationalVaryingThreeBifurcations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestGravitationalVaryingThreeBifurcations() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 355, "TestGravitationalVaryingThreeBifurcations" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestGravitationalVaryingThreeBifurcations(); }
} testDescription_TestMatrixVentilationProblem_TestGravitationalVaryingThreeBifurcations;

static class TestDescription_TestMatrixVentilationProblem_TestSolveProblemDefinedInFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestSolveProblemDefinedInFile() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 374, "TestSolveProblemDefinedInFile" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestSolveProblemDefinedInFile(); }
} testDescription_TestMatrixVentilationProblem_TestSolveProblemDefinedInFile;

static class TestDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientData() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 380, "TestTopOfAirwaysPatientData" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestTopOfAirwaysPatientData(); }
} testDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientData;

static class TestDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientDataOutflowFlux : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientDataOutflowFlux() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 400, "TestTopOfAirwaysPatientDataOutflowFlux" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestTopOfAirwaysPatientDataOutflowFlux(); }
} testDescription_TestMatrixVentilationProblem_TestTopOfAirwaysPatientDataOutflowFlux;

static class TestDescription_TestMatrixVentilationProblem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMatrixVentilationProblem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestMatrixVentilationProblem, suiteDescription_TestMatrixVentilationProblem, 451, "TestExceptions" ) {}
 void runTest() { suite_TestMatrixVentilationProblem.TestExceptions(); }
} testDescription_TestMatrixVentilationProblem_TestExceptions;

#include <cxxtest/Root.cpp>

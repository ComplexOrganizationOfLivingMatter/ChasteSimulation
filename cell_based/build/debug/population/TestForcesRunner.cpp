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
#include "cell_based/test/population/TestForces.hpp"

static TestForces suite_TestForces;

static CxxTest::List Tests_TestForces = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestForces( "cell_based/test/population/TestForces.hpp", 72, "TestForces", suite_TestForces, Tests_TestForces );

static class TestDescription_TestForces_TestGeneralisedLinearSpringForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestGeneralisedLinearSpringForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 76, "TestGeneralisedLinearSpringForceMethods" ) {}
 void runTest() { suite_TestForces.TestGeneralisedLinearSpringForceMethods(); }
} testDescription_TestForces_TestGeneralisedLinearSpringForceMethods;

static class TestDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn1d() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 203, "TestGeneralisedLinearSpringForceCalculationIn1d" ) {}
 void runTest() { suite_TestForces.TestGeneralisedLinearSpringForceCalculationIn1d(); }
} testDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn1d;

static class TestDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn3d() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 302, "TestGeneralisedLinearSpringForceCalculationIn3d" ) {}
 void runTest() { suite_TestForces.TestGeneralisedLinearSpringForceCalculationIn3d(); }
} testDescription_TestForces_TestGeneralisedLinearSpringForceCalculationIn3d;

static class TestDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 414, "TestDifferentialAdhesionGeneralisedLinearSpringForceMethods" ) {}
 void runTest() { suite_TestForces.TestDifferentialAdhesionGeneralisedLinearSpringForceMethods(); }
} testDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceMethods;

static class TestDescription_TestForces_TestForceOutputParameters : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestForceOutputParameters() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 521, "TestForceOutputParameters" ) {}
 void runTest() { suite_TestForces.TestForceOutputParameters(); }
} testDescription_TestForces_TestForceOutputParameters;

static class TestDescription_TestForces_TestGeneralisedLinearSpringForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestGeneralisedLinearSpringForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 673, "TestGeneralisedLinearSpringForceArchiving" ) {}
 void runTest() { suite_TestForces.TestGeneralisedLinearSpringForceArchiving(); }
} testDescription_TestForces_TestGeneralisedLinearSpringForceArchiving;

static class TestDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 715, "TestDifferentialAdhesionGeneralisedLinearSpringForceArchiving" ) {}
 void runTest() { suite_TestForces.TestDifferentialAdhesionGeneralisedLinearSpringForceArchiving(); }
} testDescription_TestForces_TestDifferentialAdhesionGeneralisedLinearSpringForceArchiving;

static class TestDescription_TestForces_TestChemotacticForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestChemotacticForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 763, "TestChemotacticForceMethods" ) {}
 void runTest() { suite_TestForces.TestChemotacticForceMethods(); }
} testDescription_TestForces_TestChemotacticForceMethods;

static class TestDescription_TestForces_TestChemotacticForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestChemotacticForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 822, "TestChemotacticForceArchiving" ) {}
 void runTest() { suite_TestForces.TestChemotacticForceArchiving(); }
} testDescription_TestForces_TestChemotacticForceArchiving;

static class TestDescription_TestForces_TestRepulsionForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestRepulsionForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 859, "TestRepulsionForceMethods" ) {}
 void runTest() { suite_TestForces.TestRepulsionForceMethods(); }
} testDescription_TestForces_TestRepulsionForceMethods;

static class TestDescription_TestForces_TestRepulsionForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestRepulsionForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 960, "TestRepulsionForceArchiving" ) {}
 void runTest() { suite_TestForces.TestRepulsionForceArchiving(); }
} testDescription_TestForces_TestRepulsionForceArchiving;

static class TestDescription_TestForces_TestNagaiHondaForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestNagaiHondaForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1002, "TestNagaiHondaForceMethods" ) {}
 void runTest() { suite_TestForces.TestNagaiHondaForceMethods(); }
} testDescription_TestForces_TestNagaiHondaForceMethods;

static class TestDescription_TestForces_TestNagaiHondaForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestNagaiHondaForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1140, "TestNagaiHondaForceArchiving" ) {}
 void runTest() { suite_TestForces.TestNagaiHondaForceArchiving(); }
} testDescription_TestForces_TestNagaiHondaForceArchiving;

static class TestDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1184, "TestNagaiHondaDifferentialAdhesionForceMethods" ) {}
 void runTest() { suite_TestForces.TestNagaiHondaDifferentialAdhesionForceMethods(); }
} testDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceMethods;

static class TestDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1253, "TestNagaiHondaDifferentialAdhesionForceArchiving" ) {}
 void runTest() { suite_TestForces.TestNagaiHondaDifferentialAdhesionForceArchiving(); }
} testDescription_TestForces_TestNagaiHondaDifferentialAdhesionForceArchiving;

static class TestDescription_TestForces_TestWelikyOsterForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestWelikyOsterForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1295, "TestWelikyOsterForceMethods" ) {}
 void runTest() { suite_TestForces.TestWelikyOsterForceMethods(); }
} testDescription_TestForces_TestWelikyOsterForceMethods;

static class TestDescription_TestForces_TestWelikyOsterForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestWelikyOsterForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1364, "TestWelikyOsterForceArchiving" ) {}
 void runTest() { suite_TestForces.TestWelikyOsterForceArchiving(); }
} testDescription_TestForces_TestWelikyOsterForceArchiving;

static class TestDescription_TestForces_TestFarhadifarForceMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestFarhadifarForceMethods() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1404, "TestFarhadifarForceMethods" ) {}
 void runTest() { suite_TestForces.TestFarhadifarForceMethods(); }
} testDescription_TestForces_TestFarhadifarForceMethods;

static class TestDescription_TestForces_TestFarhadifarForceTerms : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestFarhadifarForceTerms() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1542, "TestFarhadifarForceTerms" ) {}
 void runTest() { suite_TestForces.TestFarhadifarForceTerms(); }
} testDescription_TestForces_TestFarhadifarForceTerms;

static class TestDescription_TestForces_TestFarhadifarForceInSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestFarhadifarForceInSimulation() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1615, "TestFarhadifarForceInSimulation" ) {}
 void runTest() { suite_TestForces.TestFarhadifarForceInSimulation(); }
} testDescription_TestForces_TestFarhadifarForceInSimulation;

static class TestDescription_TestForces_TestFarhadifarForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestFarhadifarForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1708, "TestFarhadifarForceArchiving" ) {}
 void runTest() { suite_TestForces.TestFarhadifarForceArchiving(); }
} testDescription_TestForces_TestFarhadifarForceArchiving;

static class TestDescription_TestForces_TestCentreBasedForcesWithVertexCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestCentreBasedForcesWithVertexCellPopulation() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1754, "TestCentreBasedForcesWithVertexCellPopulation" ) {}
 void runTest() { suite_TestForces.TestCentreBasedForcesWithVertexCellPopulation(); }
} testDescription_TestForces_TestCentreBasedForcesWithVertexCellPopulation;

static class TestDescription_TestForces_TestIncorrectForcesWithNodeBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestIncorrectForcesWithNodeBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1795, "TestIncorrectForcesWithNodeBasedCellPopulation" ) {}
 void runTest() { suite_TestForces.TestIncorrectForcesWithNodeBasedCellPopulation(); }
} testDescription_TestForces_TestIncorrectForcesWithNodeBasedCellPopulation;

static class TestDescription_TestForces_TestDiffusionForceIn1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceIn1D() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1839, "TestDiffusionForceIn1D" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceIn1D(); }
} testDescription_TestForces_TestDiffusionForceIn1D;

static class TestDescription_TestForces_TestDiffusionForceIn2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceIn2D() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1886, "TestDiffusionForceIn2D" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceIn2D(); }
} testDescription_TestForces_TestDiffusionForceIn2D;

static class TestDescription_TestForces_TestDiffusionForceWithVertexBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceWithVertexBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 1954, "TestDiffusionForceWithVertexBasedCellPopulation" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceWithVertexBasedCellPopulation(); }
} testDescription_TestForces_TestDiffusionForceWithVertexBasedCellPopulation;

static class TestDescription_TestForces_TestDiffusionForceWithMeshBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceWithMeshBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 2001, "TestDiffusionForceWithMeshBasedCellPopulation" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceWithMeshBasedCellPopulation(); }
} testDescription_TestForces_TestDiffusionForceWithMeshBasedCellPopulation;

static class TestDescription_TestForces_TestDiffusionForceIn3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceIn3D() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 2063, "TestDiffusionForceIn3D" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceIn3D(); }
} testDescription_TestForces_TestDiffusionForceIn3D;

static class TestDescription_TestForces_TestDiffusionForceArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestForces_TestDiffusionForceArchiving() : CxxTest::RealTestDescription( Tests_TestForces, suiteDescription_TestForces, 2131, "TestDiffusionForceArchiving" ) {}
 void runTest() { suite_TestForces.TestDiffusionForceArchiving(); }
} testDescription_TestForces_TestDiffusionForceArchiving;

#include <cxxtest/Root.cpp>

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
#include "linalg/test/TestLinearSystem.hpp"

static TestLinearSystem suite_TestLinearSystem;

static CxxTest::List Tests_TestLinearSystem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLinearSystem( "linalg/test/TestLinearSystem.hpp", 60, "TestLinearSystem", suite_TestLinearSystem, Tests_TestLinearSystem );

static class TestDescription_TestLinearSystem_TestLinearSystem1 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestLinearSystem1() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 64, "TestLinearSystem1" ) {}
 void runTest() { suite_TestLinearSystem.TestLinearSystem1(); }
} testDescription_TestLinearSystem_TestLinearSystem1;

static class TestDescription_TestLinearSystem_TestZeroingLinearSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestZeroingLinearSystem() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 163, "TestZeroingLinearSystem" ) {}
 void runTest() { suite_TestLinearSystem.TestZeroingLinearSystem(); }
} testDescription_TestLinearSystem_TestZeroingLinearSystem;

static class TestDescription_TestLinearSystem_TestZeroMatrixRowsWithValueOnDiagonal : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestZeroMatrixRowsWithValueOnDiagonal() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 207, "TestZeroMatrixRowsWithValueOnDiagonal" ) {}
 void runTest() { suite_TestLinearSystem.TestZeroMatrixRowsWithValueOnDiagonal(); }
} testDescription_TestLinearSystem_TestZeroMatrixRowsWithValueOnDiagonal;

static class TestDescription_TestLinearSystem_TestAddingNonzeroesLater : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestAddingNonzeroesLater() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 241, "TestAddingNonzeroesLater" ) {}
 void runTest() { suite_TestLinearSystem.TestAddingNonzeroesLater(); }
} testDescription_TestLinearSystem_TestAddingNonzeroesLater;

static class TestDescription_TestLinearSystem_TestZeroingLinearSystemByColumn : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestZeroingLinearSystemByColumn() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 266, "TestZeroingLinearSystemByColumn" ) {}
 void runTest() { suite_TestLinearSystem.TestZeroingLinearSystemByColumn(); }
} testDescription_TestLinearSystem_TestZeroingLinearSystemByColumn;

static class TestDescription_TestLinearSystem_TestZeroMatrixRowsAndColumnsWithValueOnDiagonal : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestZeroMatrixRowsAndColumnsWithValueOnDiagonal() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 304, "TestZeroMatrixRowsAndColumnsWithValueOnDiagonal" ) {}
 void runTest() { suite_TestLinearSystem.TestZeroMatrixRowsAndColumnsWithValueOnDiagonal(); }
} testDescription_TestLinearSystem_TestZeroMatrixRowsAndColumnsWithValueOnDiagonal;

static class TestDescription_TestLinearSystem_TestGetMatrixRowDistributed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestGetMatrixRowDistributed() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 347, "TestGetMatrixRowDistributed" ) {}
 void runTest() { suite_TestLinearSystem.TestGetMatrixRowDistributed(); }
} testDescription_TestLinearSystem_TestGetMatrixRowDistributed;

static class TestDescription_TestLinearSystem_TestCreateFromVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestCreateFromVector() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 372, "TestCreateFromVector" ) {}
 void runTest() { suite_TestLinearSystem.TestCreateFromVector(); }
} testDescription_TestLinearSystem_TestCreateFromVector;

static class TestDescription_TestLinearSystem_TestLinearSystem2 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestLinearSystem2() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 389, "TestLinearSystem2" ) {}
 void runTest() { suite_TestLinearSystem.TestLinearSystem2(); }
} testDescription_TestLinearSystem_TestLinearSystem2;

static class TestDescription_TestLinearSystem_TestNullBasis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestNullBasis() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 428, "TestNullBasis" ) {}
 void runTest() { suite_TestLinearSystem.TestNullBasis(); }
} testDescription_TestLinearSystem_TestNullBasis;

static class TestDescription_TestLinearSystem_TestRemoveNullSpace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestRemoveNullSpace() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 485, "TestRemoveNullSpace" ) {}
 void runTest() { suite_TestLinearSystem.TestRemoveNullSpace(); }
} testDescription_TestLinearSystem_TestRemoveNullSpace;

static class TestDescription_TestLinearSystem_TestCreateWithPetscObjects : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestCreateWithPetscObjects() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 534, "TestCreateWithPetscObjects" ) {}
 void runTest() { suite_TestLinearSystem.TestCreateWithPetscObjects(); }
} testDescription_TestLinearSystem_TestCreateWithPetscObjects;

static class TestDescription_TestLinearSystem_TestLinearSystem1WithIntialGuess : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestLinearSystem1WithIntialGuess() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 607, "TestLinearSystem1WithIntialGuess" ) {}
 void runTest() { suite_TestLinearSystem.TestLinearSystem1WithIntialGuess(); }
} testDescription_TestLinearSystem_TestLinearSystem1WithIntialGuess;

static class TestDescription_TestLinearSystem_TestAddMultipleValues : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestAddMultipleValues() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 685, "TestAddMultipleValues" ) {}
 void runTest() { suite_TestLinearSystem.TestAddMultipleValues(); }
} testDescription_TestLinearSystem_TestAddMultipleValues;

static class TestDescription_TestLinearSystem_TestSymmetricMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestSymmetricMatrix() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 736, "TestSymmetricMatrix" ) {}
 void runTest() { suite_TestLinearSystem.TestSymmetricMatrix(); }
} testDescription_TestLinearSystem_TestSymmetricMatrix;

static class TestDescription_TestLinearSystem_TestNonSymmetricMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestNonSymmetricMatrix() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 785, "TestNonSymmetricMatrix" ) {}
 void runTest() { suite_TestLinearSystem.TestNonSymmetricMatrix(); }
} testDescription_TestLinearSystem_TestNonSymmetricMatrix;

static class TestDescription_TestLinearSystem_TestGetSetKSP : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestGetSetKSP() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 848, "TestGetSetKSP" ) {}
 void runTest() { suite_TestLinearSystem.TestGetSetKSP(); }
} testDescription_TestLinearSystem_TestGetSetKSP;

static class TestDescription_TestLinearSystem_TestPetscSaveAndLoad : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestPetscSaveAndLoad() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 952, "TestPetscSaveAndLoad" ) {}
 void runTest() { suite_TestLinearSystem.TestPetscSaveAndLoad(); }
} testDescription_TestLinearSystem_TestPetscSaveAndLoad;

static class TestDescription_TestLinearSystem_TestSaveAndLoadLinearSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestSaveAndLoadLinearSystem() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1074, "TestSaveAndLoadLinearSystem" ) {}
 void runTest() { suite_TestLinearSystem.TestSaveAndLoadLinearSystem(); }
} testDescription_TestLinearSystem_TestSaveAndLoadLinearSystem;

static class TestDescription_TestLinearSystem_TestConsecutiveSolvesDifferentPreconditioner : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestConsecutiveSolvesDifferentPreconditioner() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1209, "TestConsecutiveSolvesDifferentPreconditioner" ) {}
 void runTest() { suite_TestLinearSystem.TestConsecutiveSolvesDifferentPreconditioner(); }
} testDescription_TestLinearSystem_TestConsecutiveSolvesDifferentPreconditioner;

static class TestDescription_TestLinearSystem_TestDifferentMatrixForPreconditioning : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestDifferentMatrixForPreconditioning() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1272, "TestDifferentMatrixForPreconditioning" ) {}
 void runTest() { suite_TestLinearSystem.TestDifferentMatrixForPreconditioning(); }
} testDescription_TestLinearSystem_TestDifferentMatrixForPreconditioning;

static class TestDescription_TestLinearSystem_TestFixedNumberOfIterations : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestFixedNumberOfIterations() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1353, "TestFixedNumberOfIterations" ) {}
 void runTest() { suite_TestLinearSystem.TestFixedNumberOfIterations(); }
} testDescription_TestLinearSystem_TestFixedNumberOfIterations;

static class TestDescription_TestLinearSystem_TestFixedNumberOfIterationsRelativeToleranceCoverage : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestFixedNumberOfIterationsRelativeToleranceCoverage() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1473, "TestFixedNumberOfIterationsRelativeToleranceCoverage" ) {}
 void runTest() { suite_TestLinearSystem.TestFixedNumberOfIterationsRelativeToleranceCoverage(); }
} testDescription_TestLinearSystem_TestFixedNumberOfIterationsRelativeToleranceCoverage;

static class TestDescription_TestLinearSystem_TestSolveZerosInitialGuessForSmallRhs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestSolveZerosInitialGuessForSmallRhs() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1542, "TestSolveZerosInitialGuessForSmallRhs" ) {}
 void runTest() { suite_TestLinearSystem.TestSolveZerosInitialGuessForSmallRhs(); }
} testDescription_TestLinearSystem_TestSolveZerosInitialGuessForSmallRhs;

static class TestDescription_TestLinearSystem_TestSetFromOptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestLinearSystem_TestSetFromOptions() : CxxTest::RealTestDescription( Tests_TestLinearSystem, suiteDescription_TestLinearSystem, 1593, "TestSetFromOptions" ) {}
 void runTest() { suite_TestLinearSystem.TestSetFromOptions(); }
} testDescription_TestLinearSystem_TestSetFromOptions;

#include <cxxtest/Root.cpp>

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
#include "crypt/test/population/TestCryptSimulationBoundaryCondition.hpp"

static TestCryptSimulationBoundaryCondition suite_TestCryptSimulationBoundaryCondition;

static CxxTest::List Tests_TestCryptSimulationBoundaryCondition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptSimulationBoundaryCondition( "crypt/test/population/TestCryptSimulationBoundaryCondition.hpp", 56, "TestCryptSimulationBoundaryCondition", suite_TestCryptSimulationBoundaryCondition, Tests_TestCryptSimulationBoundaryCondition );

static class TestDescription_TestCryptSimulationBoundaryCondition_TestSetAndGetUseJiggledBottomCells : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestSetAndGetUseJiggledBottomCells() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 60, "TestSetAndGetUseJiggledBottomCells" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestSetAndGetUseJiggledBottomCells(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestSetAndGetUseJiggledBottomCells;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 75, "TestConstructorWithCellPopulation1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestConstructorWithCellPopulation1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation2d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 95, "TestConstructorWithCellPopulation2d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestConstructorWithCellPopulation2d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestConstructorWithCellPopulation2d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 116, "TestOutputParameters1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestOutputParameters1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters2d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 139, "TestOutputParameters2d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestOutputParameters2d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestOutputParameters2d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWnt1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWnt1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 162, "TestImposeBoundaryConditionWithNoWnt1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestImposeBoundaryConditionWithNoWnt1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWnt1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntOrJiggling2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntOrJiggling2d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 220, "TestImposeBoundaryConditionWithNoWntOrJiggling2d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestImposeBoundaryConditionWithNoWntOrJiggling2d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntOrJiggling2d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntButWithJiggling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntButWithJiggling() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 270, "TestImposeBoundaryConditionWithNoWntButWithJiggling" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestImposeBoundaryConditionWithNoWntButWithJiggling(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithNoWntButWithJiggling;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWnt1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWnt1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 323, "TestImposeBoundaryConditionWithWnt1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestImposeBoundaryConditionWithWnt1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWnt1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWntButNoJiggling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWntButNoJiggling() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 370, "TestImposeBoundaryConditionWithWntButNoJiggling" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestImposeBoundaryConditionWithWntButNoJiggling(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestImposeBoundaryConditionWithWntButNoJiggling;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 421, "TestVerifyBoundaryCondition1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestVerifyBoundaryCondition1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition2d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 461, "TestVerifyBoundaryCondition2d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestVerifyBoundaryCondition2d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestVerifyBoundaryCondition2d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestArchiving1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestArchiving1d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 496, "TestArchiving1d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestArchiving1d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestArchiving1d;

static class TestDescription_TestCryptSimulationBoundaryCondition_TestArchiving2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulationBoundaryCondition_TestArchiving2d() : CxxTest::RealTestDescription( Tests_TestCryptSimulationBoundaryCondition, suiteDescription_TestCryptSimulationBoundaryCondition, 533, "TestArchiving2d" ) {}
 void runTest() { suite_TestCryptSimulationBoundaryCondition.TestArchiving2d(); }
} testDescription_TestCryptSimulationBoundaryCondition_TestArchiving2d;

#include <cxxtest/Root.cpp>

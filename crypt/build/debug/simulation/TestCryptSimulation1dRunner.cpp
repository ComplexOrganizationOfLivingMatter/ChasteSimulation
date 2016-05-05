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
#include "crypt/test/simulation/TestCryptSimulation1d.hpp"

static TestCryptSimulation1d suite_TestCryptSimulation1d;

static CxxTest::List Tests_TestCryptSimulation1d = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCryptSimulation1d( "crypt/test/simulation/TestCryptSimulation1d.hpp", 66, "TestCryptSimulation1d", suite_TestCryptSimulation1d, Tests_TestCryptSimulation1d );

static class TestDescription_TestCryptSimulation1d_Test1dCryptWithNoBirthOrDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1dCryptWithNoBirthOrDeath() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 76, "Test1dCryptWithNoBirthOrDeath" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1dCryptWithNoBirthOrDeath(); }
} testDescription_TestCryptSimulation1d_Test1dCryptWithNoBirthOrDeath;

static class TestDescription_TestCryptSimulation1d_Test1dCryptWithDeathButNoBirth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1dCryptWithDeathButNoBirth() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 143, "Test1dCryptWithDeathButNoBirth" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1dCryptWithDeathButNoBirth(); }
} testDescription_TestCryptSimulation1d_Test1dCryptWithDeathButNoBirth;

static class TestDescription_TestCryptSimulation1d_Test1dCryptWithBirthButNoDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1dCryptWithBirthButNoDeath() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 205, "Test1dCryptWithBirthButNoDeath" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1dCryptWithBirthButNoDeath(); }
} testDescription_TestCryptSimulation1d_Test1dCryptWithBirthButNoDeath;

static class TestDescription_TestCryptSimulation1d_TestCalculateCellDivisionVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_TestCalculateCellDivisionVector() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 310, "TestCalculateCellDivisionVector" ) {}
 void runTest() { suite_TestCryptSimulation1d.TestCalculateCellDivisionVector(); }
} testDescription_TestCryptSimulation1d_TestCalculateCellDivisionVector;

static class TestDescription_TestCryptSimulation1d_Test1dCryptWithBirthAndDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1dCryptWithBirthAndDeath() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 374, "Test1dCryptWithBirthAndDeath" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1dCryptWithBirthAndDeath(); }
} testDescription_TestCryptSimulation1d_Test1dCryptWithBirthAndDeath;

static class TestDescription_TestCryptSimulation1d_Test1DChainWithTysonNovakCellsAndNoDeath : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1DChainWithTysonNovakCellsAndNoDeath() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 467, "Test1DChainWithTysonNovakCellsAndNoDeath" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1DChainWithTysonNovakCellsAndNoDeath(); }
} testDescription_TestCryptSimulation1d_Test1DChainWithTysonNovakCellsAndNoDeath;

static class TestDescription_TestCryptSimulation1d_Test1dChainCorrectCellNumbers : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_Test1dChainCorrectCellNumbers() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 558, "Test1dChainCorrectCellNumbers" ) {}
 void runTest() { suite_TestCryptSimulation1d.Test1dChainCorrectCellNumbers(); }
} testDescription_TestCryptSimulation1d_Test1dChainCorrectCellNumbers;

static class TestDescription_TestCryptSimulation1d_TestWntCellsCannotMoveAcrossYEqualsZero : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_TestWntCellsCannotMoveAcrossYEqualsZero() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 669, "TestWntCellsCannotMoveAcrossYEqualsZero" ) {}
 void runTest() { suite_TestCryptSimulation1d.TestWntCellsCannotMoveAcrossYEqualsZero(); }
} testDescription_TestCryptSimulation1d_TestWntCellsCannotMoveAcrossYEqualsZero;

static class TestDescription_TestCryptSimulation1d_TestSave : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_TestSave() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 767, "TestSave" ) {}
 void runTest() { suite_TestCryptSimulation1d.TestSave(); }
} testDescription_TestCryptSimulation1d_TestSave;

static class TestDescription_TestCryptSimulation1d_TestLoad : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_TestLoad() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 847, "TestLoad" ) {}
 void runTest() { suite_TestCryptSimulation1d.TestLoad(); }
} testDescription_TestCryptSimulation1d_TestLoad;

static class TestDescription_TestCryptSimulation1d_TestCryptSimulation1DParameterOutput : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCryptSimulation1d_TestCryptSimulation1DParameterOutput() : CxxTest::RealTestDescription( Tests_TestCryptSimulation1d, suiteDescription_TestCryptSimulation1d, 916, "TestCryptSimulation1DParameterOutput" ) {}
 void runTest() { suite_TestCryptSimulation1d.TestCryptSimulation1DParameterOutput(); }
} testDescription_TestCryptSimulation1d_TestCryptSimulation1DParameterOutput;

#include <cxxtest/Root.cpp>

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
#include "crypt/test/population/TestVertexBasedCellPopulationForCrypt.hpp"

static TestVertexBasedCellPopulationForCrypt suite_TestVertexBasedCellPopulationForCrypt;

static CxxTest::List Tests_TestVertexBasedCellPopulationForCrypt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexBasedCellPopulationForCrypt( "crypt/test/population/TestVertexBasedCellPopulationForCrypt.hpp", 58, "TestVertexBasedCellPopulationForCrypt", suite_TestVertexBasedCellPopulationForCrypt, Tests_TestVertexBasedCellPopulationForCrypt );

static class TestDescription_TestVertexBasedCellPopulationForCrypt_TestWntConcentrationWithVertexBasedCellPopulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexBasedCellPopulationForCrypt_TestWntConcentrationWithVertexBasedCellPopulation() : CxxTest::RealTestDescription( Tests_TestVertexBasedCellPopulationForCrypt, suiteDescription_TestVertexBasedCellPopulationForCrypt, 67, "TestWntConcentrationWithVertexBasedCellPopulation" ) {}
 void runTest() { suite_TestVertexBasedCellPopulationForCrypt.TestWntConcentrationWithVertexBasedCellPopulation(); }
} testDescription_TestVertexBasedCellPopulationForCrypt_TestWntConcentrationWithVertexBasedCellPopulation;

#include <cxxtest/Root.cpp>

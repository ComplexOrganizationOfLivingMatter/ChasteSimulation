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
#include "heart/test/postprocessing/TestSpiralWaveAndPhase.hpp"

static TestSpiralWaveAndPhase suite_TestSpiralWaveAndPhase;

static CxxTest::List Tests_TestSpiralWaveAndPhase = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSpiralWaveAndPhase( "heart/test/postprocessing/TestSpiralWaveAndPhase.hpp", 50, "TestSpiralWaveAndPhase", suite_TestSpiralWaveAndPhase, Tests_TestSpiralWaveAndPhase );

static class TestDescription_TestSpiralWaveAndPhase_TestPhaseCalculation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSpiralWaveAndPhase_TestPhaseCalculation() : CxxTest::RealTestDescription( Tests_TestSpiralWaveAndPhase, suiteDescription_TestSpiralWaveAndPhase, 146, "TestPhaseCalculation" ) {}
 void runTest() { suite_TestSpiralWaveAndPhase.TestPhaseCalculation(); }
} testDescription_TestSpiralWaveAndPhase_TestPhaseCalculation;

static class TestDescription_TestSpiralWaveAndPhase_TestMeshalyzerPhasePlot : public CxxTest::RealTestDescription {
public:
 TestDescription_TestSpiralWaveAndPhase_TestMeshalyzerPhasePlot() : CxxTest::RealTestDescription( Tests_TestSpiralWaveAndPhase, suiteDescription_TestSpiralWaveAndPhase, 216, "TestMeshalyzerPhasePlot" ) {}
 void runTest() { suite_TestSpiralWaveAndPhase.TestMeshalyzerPhasePlot(); }
} testDescription_TestSpiralWaveAndPhase_TestMeshalyzerPhasePlot;

#include <cxxtest/Root.cpp>

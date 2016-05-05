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
#include "cell_based/test/simulation/TestOffLatticeSimulationWithBuskeForces.hpp"

static TestOffLatticeSimulationWithBuskeForces suite_TestOffLatticeSimulationWithBuskeForces;

static CxxTest::List Tests_TestOffLatticeSimulationWithBuskeForces = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeSimulationWithBuskeForces( "cell_based/test/simulation/TestOffLatticeSimulationWithBuskeForces.hpp", 59, "TestOffLatticeSimulationWithBuskeForces", suite_TestOffLatticeSimulationWithBuskeForces, Tests_TestOffLatticeSimulationWithBuskeForces );

static class TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeAdhesiveForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeAdhesiveForce() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithBuskeForces, suiteDescription_TestOffLatticeSimulationWithBuskeForces, 67, "TestSimpleMonolayerWithBuskeAdhesiveForce" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithBuskeForces.TestSimpleMonolayerWithBuskeAdhesiveForce(); }
} testDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeAdhesiveForce;

static class TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeElasticForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeElasticForce() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithBuskeForces, suiteDescription_TestOffLatticeSimulationWithBuskeForces, 121, "TestSimpleMonolayerWithBuskeElasticForce" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithBuskeForces.TestSimpleMonolayerWithBuskeElasticForce(); }
} testDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeElasticForce;

static class TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeCompressionForce : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeCompressionForce() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithBuskeForces, suiteDescription_TestOffLatticeSimulationWithBuskeForces, 174, "TestSimpleMonolayerWithBuskeCompressionForce" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithBuskeForces.TestSimpleMonolayerWithBuskeCompressionForce(); }
} testDescription_TestOffLatticeSimulationWithBuskeForces_TestSimpleMonolayerWithBuskeCompressionForce;

static class TestDescription_TestOffLatticeSimulationWithBuskeForces_TestAllBuskeForces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithBuskeForces_TestAllBuskeForces() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithBuskeForces, suiteDescription_TestOffLatticeSimulationWithBuskeForces, 231, "TestAllBuskeForces" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithBuskeForces.TestAllBuskeForces(); }
} testDescription_TestOffLatticeSimulationWithBuskeForces_TestAllBuskeForces;

static class TestDescription_TestOffLatticeSimulationWithBuskeForces_TestBuskeRelaxationForces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulationWithBuskeForces_TestBuskeRelaxationForces() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulationWithBuskeForces, suiteDescription_TestOffLatticeSimulationWithBuskeForces, 272, "TestBuskeRelaxationForces" ) {}
 void runTest() { suite_TestOffLatticeSimulationWithBuskeForces.TestBuskeRelaxationForces(); }
} testDescription_TestOffLatticeSimulationWithBuskeForces_TestBuskeRelaxationForces;

#include <cxxtest/Root.cpp>

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
#include "global/test/TestRandomNumberGenerator.hpp"

static TestRandomNumberGenerator suite_TestRandomNumberGenerator;

static CxxTest::List Tests_TestRandomNumberGenerator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRandomNumberGenerator( "global/test/TestRandomNumberGenerator.hpp", 53, "TestRandomNumberGenerator", suite_TestRandomNumberGenerator, Tests_TestRandomNumberGenerator );

static class TestDescription_TestRandomNumberGenerator_TestRandomNumbersCreation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestRandomNumbersCreation() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 94, "TestRandomNumbersCreation" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestRandomNumbersCreation(); }
} testDescription_TestRandomNumberGenerator_TestRandomNumbersCreation;

static class TestDescription_TestRandomNumberGenerator_TestNewMethodSeed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestNewMethodSeed() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 101, "TestNewMethodSeed" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestNewMethodSeed(); }
} testDescription_TestRandomNumberGenerator_TestNewMethodSeed;

static class TestDescription_TestRandomNumberGenerator_TestOtherRandomStuffDoesNotDestroyRandomSequence : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestOtherRandomStuffDoesNotDestroyRandomSequence() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 110, "TestOtherRandomStuffDoesNotDestroyRandomSequence" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestOtherRandomStuffDoesNotDestroyRandomSequence(); }
} testDescription_TestRandomNumberGenerator_TestOtherRandomStuffDoesNotDestroyRandomSequence;

static class TestDescription_TestRandomNumberGenerator_TestDifferentRandomSeed : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestDifferentRandomSeed() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 146, "TestDifferentRandomSeed" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestDifferentRandomSeed(); }
} testDescription_TestRandomNumberGenerator_TestDifferentRandomSeed;

static class TestDescription_TestRandomNumberGenerator_TestArchiveRandomNumberGenerator : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestArchiveRandomNumberGenerator() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 163, "TestArchiveRandomNumberGenerator" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestArchiveRandomNumberGenerator(); }
} testDescription_TestRandomNumberGenerator_TestArchiveRandomNumberGenerator;

static class TestDescription_TestRandomNumberGenerator_TestPermutationShuffle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestPermutationShuffle() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 264, "TestPermutationShuffle" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestPermutationShuffle(); }
} testDescription_TestRandomNumberGenerator_TestPermutationShuffle;

static class TestDescription_TestRandomNumberGenerator_TestGenericShuffle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestGenericShuffle() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 328, "TestGenericShuffle" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestGenericShuffle(); }
} testDescription_TestRandomNumberGenerator_TestGenericShuffle;

static class TestDescription_TestRandomNumberGenerator_TestDistributionReproducibilityAcrossPlatforms : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestDistributionReproducibilityAcrossPlatforms() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 360, "TestDistributionReproducibilityAcrossPlatforms" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestDistributionReproducibilityAcrossPlatforms(); }
} testDescription_TestRandomNumberGenerator_TestDistributionReproducibilityAcrossPlatforms;

static class TestDescription_TestRandomNumberGenerator_TestExponentialMethodsInsideBoost : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestExponentialMethodsInsideBoost() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 384, "TestExponentialMethodsInsideBoost" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestExponentialMethodsInsideBoost(); }
} testDescription_TestRandomNumberGenerator_TestExponentialMethodsInsideBoost;

static class TestDescription_TestRandomNumberGenerator_TestReproducibilityAcrossPlatforms : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestReproducibilityAcrossPlatforms() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 407, "TestReproducibilityAcrossPlatforms" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestReproducibilityAcrossPlatforms(); }
} testDescription_TestRandomNumberGenerator_TestReproducibilityAcrossPlatforms;

static class TestDescription_TestRandomNumberGenerator_TestReseedingWorksProperly : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestReseedingWorksProperly() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 440, "TestReseedingWorksProperly" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestReseedingWorksProperly(); }
} testDescription_TestRandomNumberGenerator_TestReseedingWorksProperly;

static class TestDescription_TestRandomNumberGenerator_TestGammaRandomDeviate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestGammaRandomDeviate() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 484, "TestGammaRandomDeviate" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestGammaRandomDeviate(); }
} testDescription_TestRandomNumberGenerator_TestGammaRandomDeviate;

static class TestDescription_TestRandomNumberGenerator_TestExponentialRandomDeviate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestRandomNumberGenerator_TestExponentialRandomDeviate() : CxxTest::RealTestDescription( Tests_TestRandomNumberGenerator, suiteDescription_TestRandomNumberGenerator, 496, "TestExponentialRandomDeviate" ) {}
 void runTest() { suite_TestRandomNumberGenerator.TestExponentialRandomDeviate(); }
} testDescription_TestRandomNumberGenerator_TestExponentialRandomDeviate;

#include <cxxtest/Root.cpp>

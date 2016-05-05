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
#include "heart/test/extended_bidomain/TestFibreReaderAbilityExtendedBidomainProblem.hpp"

static TestFibreReaderAbilityExtendedBidomainProblem suite_TestFibreReaderAbilityExtendedBidomainProblem;

static CxxTest::List Tests_TestFibreReaderAbilityExtendedBidomainProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFibreReaderAbilityExtendedBidomainProblem( "heart/test/extended_bidomain/TestFibreReaderAbilityExtendedBidomainProblem.hpp", 81, "TestFibreReaderAbilityExtendedBidomainProblem", suite_TestFibreReaderAbilityExtendedBidomainProblem, Tests_TestFibreReaderAbilityExtendedBidomainProblem );

static class TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestFibreAbilityNoFibreExtendedProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestFibreAbilityNoFibreExtendedProblem() : CxxTest::RealTestDescription( Tests_TestFibreReaderAbilityExtendedBidomainProblem, suiteDescription_TestFibreReaderAbilityExtendedBidomainProblem, 86, "TestFibreAbilityNoFibreExtendedProblem" ) {}
 void runTest() { suite_TestFibreReaderAbilityExtendedBidomainProblem.TestFibreAbilityNoFibreExtendedProblem(); }
} testDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestFibreAbilityNoFibreExtendedProblem;

static class TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestOrthoFibreAbilityExtendedProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestOrthoFibreAbilityExtendedProblem() : CxxTest::RealTestDescription( Tests_TestFibreReaderAbilityExtendedBidomainProblem, suiteDescription_TestFibreReaderAbilityExtendedBidomainProblem, 137, "TestOrthoFibreAbilityExtendedProblem" ) {}
 void runTest() { suite_TestFibreReaderAbilityExtendedBidomainProblem.TestOrthoFibreAbilityExtendedProblem(); }
} testDescription_TestFibreReaderAbilityExtendedBidomainProblem_TestOrthoFibreAbilityExtendedProblem;

static class TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_Test3DAxiFibreAbilityExtendedProblem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestFibreReaderAbilityExtendedBidomainProblem_Test3DAxiFibreAbilityExtendedProblem() : CxxTest::RealTestDescription( Tests_TestFibreReaderAbilityExtendedBidomainProblem, suiteDescription_TestFibreReaderAbilityExtendedBidomainProblem, 214, "Test3DAxiFibreAbilityExtendedProblem" ) {}
 void runTest() { suite_TestFibreReaderAbilityExtendedBidomainProblem.Test3DAxiFibreAbilityExtendedProblem(); }
} testDescription_TestFibreReaderAbilityExtendedBidomainProblem_Test3DAxiFibreAbilityExtendedProblem;

#include <cxxtest/Root.cpp>

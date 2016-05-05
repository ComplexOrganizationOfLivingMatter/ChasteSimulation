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
#include "heart/test/mechanics/TestCardiacElectroMechanicsProblem.hpp"

static TestCardiacElectroMechanicsProblem suite_TestCardiacElectroMechanicsProblem;

static CxxTest::List Tests_TestCardiacElectroMechanicsProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCardiacElectroMechanicsProblem( "heart/test/mechanics/TestCardiacElectroMechanicsProblem.hpp", 74, "TestCardiacElectroMechanicsProblem", suite_TestCardiacElectroMechanicsProblem, Tests_TestCardiacElectroMechanicsProblem );

static class TestDescription_TestCardiacElectroMechanicsProblem_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestExceptions() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 78, "TestExceptions" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestExceptions(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestExceptions;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressible : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressible() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 137, "TestWithHomogeneousEverythingCompressible" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestWithHomogeneousEverythingCompressible(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressible;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressibleBidomain : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressibleBidomain() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 223, "TestWithHomogeneousEverythingCompressibleBidomain" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestWithHomogeneousEverythingCompressibleBidomain(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingCompressibleBidomain;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingIncompressible : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingIncompressible() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 329, "TestWithHomogeneousEverythingIncompressible" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestWithHomogeneousEverythingIncompressible(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestWithHomogeneousEverythingIncompressible;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathImplicit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathImplicit() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 410, "TestMechanicsWithBidomainAndBathImplicit" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestMechanicsWithBidomainAndBathImplicit(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathImplicit;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathExplicit : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathExplicit() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 497, "TestMechanicsWithBidomainAndBathExplicit" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestMechanicsWithBidomainAndBathExplicit(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestMechanicsWithBidomainAndBathExplicit;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestImplicitNhs2dOneMechanicsElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestImplicitNhs2dOneMechanicsElement() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 584, "TestImplicitNhs2dOneMechanicsElement" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestImplicitNhs2dOneMechanicsElement(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestImplicitNhs2dOneMechanicsElement;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestWithKerchoffs : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestWithKerchoffs() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 654, "TestWithKerchoffs" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestWithKerchoffs(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestWithKerchoffs;

static class TestDescription_TestCardiacElectroMechanicsProblem_TestWithCompressibleApproach : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCardiacElectroMechanicsProblem_TestWithCompressibleApproach() : CxxTest::RealTestDescription( Tests_TestCardiacElectroMechanicsProblem, suiteDescription_TestCardiacElectroMechanicsProblem, 733, "TestWithCompressibleApproach" ) {}
 void runTest() { suite_TestCardiacElectroMechanicsProblem.TestWithCompressibleApproach(); }
} testDescription_TestCardiacElectroMechanicsProblem_TestWithCompressibleApproach;

#include <cxxtest/Root.cpp>

/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "pde/test/utilities/TestBoundaryConditionsContainer.hpp"

static TestBoundaryConditionsContainer suite_TestBoundaryConditionsContainer;

static CxxTest::List Tests_TestBoundaryConditionsContainer = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBoundaryConditionsContainer( "pde/test/utilities/TestBoundaryConditionsContainer.hpp", 51, "TestBoundaryConditionsContainer", suite_TestBoundaryConditionsContainer, Tests_TestBoundaryConditionsContainer );

static class TestDescription_TestBoundaryConditionsContainer_TestSetGet : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestSetGet() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 54, "TestSetGet" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestSetGet(); }
} testDescription_TestBoundaryConditionsContainer_TestSetGet;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 222, "TestApplyToLinearSystem" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToLinearSystem(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToSymmetricLinearSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToSymmetricLinearSystem() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 331, "TestApplyToSymmetricLinearSystem" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToSymmetricLinearSystem(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToSymmetricLinearSystem;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 412, "TestApplyToNonlinearSystem" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToNonlinearSystem(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem;

static class TestDescription_TestBoundaryConditionsContainer_TestDefineZeroDirichletOnMeshBoundary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestDefineZeroDirichletOnMeshBoundary() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 474, "TestDefineZeroDirichletOnMeshBoundary" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestDefineZeroDirichletOnMeshBoundary(); }
} testDescription_TestBoundaryConditionsContainer_TestDefineZeroDirichletOnMeshBoundary;

static class TestDescription_TestBoundaryConditionsContainer_TestAnyNonZeroNeumannConditionsAndApplyNeumannToMeshBoundary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestAnyNonZeroNeumannConditionsAndApplyNeumannToMeshBoundary() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 496, "TestAnyNonZeroNeumannConditionsAndApplyNeumannToMeshBoundary" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestAnyNonZeroNeumannConditionsAndApplyNeumannToMeshBoundary(); }
} testDescription_TestBoundaryConditionsContainer_TestAnyNonZeroNeumannConditionsAndApplyNeumannToMeshBoundary;

static class TestDescription_TestBoundaryConditionsContainer_TestValidate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestValidate() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 530, "TestValidate" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestValidate(); }
} testDescription_TestBoundaryConditionsContainer_TestValidate;

static class TestDescription_TestBoundaryConditionsContainer_TestAddNeumannBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestAddNeumannBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 557, "TestAddNeumannBoundaryConditions" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestAddNeumannBoundaryConditions(); }
} testDescription_TestBoundaryConditionsContainer_TestAddNeumannBoundaryConditions;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem2Unknowns : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem2Unknowns() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 596, "TestApplyToLinearSystem2Unknowns" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToLinearSystem2Unknowns(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem2Unknowns;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem3Unknowns : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem3Unknowns() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 674, "TestApplyToLinearSystem3Unknowns" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToLinearSystem3Unknowns(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToLinearSystem3Unknowns;

static class TestDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem3Unknowns : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem3Unknowns() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 747, "TestApplyToNonlinearSystem3Unknowns" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestApplyToNonlinearSystem3Unknowns(); }
} testDescription_TestBoundaryConditionsContainer_TestApplyToNonlinearSystem3Unknowns;

static class TestDescription_TestBoundaryConditionsContainer_TestPerdiodicBoundaryConditions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestPerdiodicBoundaryConditions() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 827, "TestPerdiodicBoundaryConditions" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestPerdiodicBoundaryConditions(); }
} testDescription_TestBoundaryConditionsContainer_TestPerdiodicBoundaryConditions;

static class TestDescription_TestBoundaryConditionsContainer_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBoundaryConditionsContainer_TestArchiving() : CxxTest::RealTestDescription( Tests_TestBoundaryConditionsContainer, suiteDescription_TestBoundaryConditionsContainer, 926, "TestArchiving" ) {}
 void runTest() { suite_TestBoundaryConditionsContainer.TestArchiving(); }
} testDescription_TestBoundaryConditionsContainer_TestArchiving;

#include <cxxtest/Root.cpp>

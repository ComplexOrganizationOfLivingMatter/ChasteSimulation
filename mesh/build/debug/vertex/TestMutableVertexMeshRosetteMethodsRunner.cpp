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
#include "mesh/test/vertex/TestMutableVertexMeshRosetteMethods.hpp"

static TestMutableVertexMeshRosetteMethods suite_TestMutableVertexMeshRosetteMethods;

static CxxTest::List Tests_TestMutableVertexMeshRosetteMethods = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMutableVertexMeshRosetteMethods( "mesh/test/vertex/TestMutableVertexMeshRosetteMethods.hpp", 50, "TestMutableVertexMeshRosetteMethods", suite_TestMutableVertexMeshRosetteMethods, Tests_TestMutableVertexMeshRosetteMethods );

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestSetAndGetMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestSetAndGetMethods() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 217, "TestSetAndGetMethods" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestSetAndGetMethods(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestSetAndGetMethods;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 243, "TestArchiving" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestArchiving(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestArchiving;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestHandleHighOrderJunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestHandleHighOrderJunctions() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 345, "TestHandleHighOrderJunctions" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestHandleHighOrderJunctions(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestHandleHighOrderJunctions;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankIncrease : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankIncrease() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 402, "TestPerformRosetteRankIncrease" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestPerformRosetteRankIncrease(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankIncrease;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteResolution : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteResolution() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 475, "TestPerformProtorosetteResolution" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestPerformProtorosetteResolution(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteResolution;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankDecrease : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankDecrease() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 560, "TestPerformRosetteRankDecrease" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestPerformRosetteRankDecrease(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestPerformRosetteRankDecrease;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestCheckForRosettes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestCheckForRosettes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 619, "TestCheckForRosettes" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestCheckForRosettes(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestCheckForRosettes;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestEnsureCoverangeWhenCheckingForRosettes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestEnsureCoverangeWhenCheckingForRosettes() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 697, "TestEnsureCoverangeWhenCheckingForRosettes" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestEnsureCoverangeWhenCheckingForRosettes(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestEnsureCoverangeWhenCheckingForRosettes;

static class TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteFormationInIdentifySwapType : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteFormationInIdentifySwapType() : CxxTest::RealTestDescription( Tests_TestMutableVertexMeshRosetteMethods, suiteDescription_TestMutableVertexMeshRosetteMethods, 722, "TestPerformProtorosetteFormationInIdentifySwapType" ) {}
 void runTest() { suite_TestMutableVertexMeshRosetteMethods.TestPerformProtorosetteFormationInIdentifySwapType(); }
} testDescription_TestMutableVertexMeshRosetteMethods_TestPerformProtorosetteFormationInIdentifySwapType;

#include <cxxtest/Root.cpp>

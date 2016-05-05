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
#include "mesh/test/mutable/TestCylindrical2dNodesOnlyMesh.hpp"

static TestCylindrical2dNodesOnlyMesh suite_TestCylindrical2dNodesOnlyMesh;

static CxxTest::List Tests_TestCylindrical2dNodesOnlyMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCylindrical2dNodesOnlyMesh( "mesh/test/mutable/TestCylindrical2dNodesOnlyMesh.hpp", 49, "TestCylindrical2dNodesOnlyMesh", suite_TestCylindrical2dNodesOnlyMesh, Tests_TestCylindrical2dNodesOnlyMesh );

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestMeshGetWidth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestMeshGetWidth() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 53, "TestMeshGetWidth" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestMeshGetWidth(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestMeshGetWidth;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestExceptions() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 87, "TestExceptions" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestExceptions(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestExceptions;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestGetVectorFromAtoB : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestGetVectorFromAtoB() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 105, "TestGetVectorFromAtoB" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestGetVectorFromAtoB(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestGetVectorFromAtoB;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestSetNodeLocationForCylindricalMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestSetNodeLocationForCylindricalMesh() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 149, "TestSetNodeLocationForCylindricalMesh" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestSetNodeLocationForCylindricalMesh(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestSetNodeLocationForCylindricalMesh;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestAddNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestAddNode() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 189, "TestAddNode" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestAddNode(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestAddNode;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestConstuctingBoxCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestConstuctingBoxCollection() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 245, "TestConstuctingBoxCollection" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestConstuctingBoxCollection(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestConstuctingBoxCollection;

static class TestDescription_TestCylindrical2dNodesOnlyMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestCylindrical2dNodesOnlyMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestCylindrical2dNodesOnlyMesh, suiteDescription_TestCylindrical2dNodesOnlyMesh, 294, "TestArchiving" ) {}
 void runTest() { suite_TestCylindrical2dNodesOnlyMesh.TestArchiving(); }
} testDescription_TestCylindrical2dNodesOnlyMesh_TestArchiving;

#include <cxxtest/Root.cpp>

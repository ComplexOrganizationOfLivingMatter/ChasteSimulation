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
#include "heart/test/bidomain/TestBidomainDistributedMesh.hpp"

static TestBidomainDistributedMesh suite_TestBidomainDistributedMesh;

static CxxTest::List Tests_TestBidomainDistributedMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBidomainDistributedMesh( "heart/test/bidomain/TestBidomainDistributedMesh.hpp", 51, "TestBidomainDistributedMesh", suite_TestBidomainDistributedMesh, Tests_TestBidomainDistributedMesh );

static class TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2D() : CxxTest::RealTestDescription( Tests_TestBidomainDistributedMesh, suiteDescription_TestBidomainDistributedMesh, 55, "TestBidomainProblemWithDistributedMesh2D" ) {}
 void runTest() { suite_TestBidomainDistributedMesh.TestBidomainProblemWithDistributedMesh2D(); }
} testDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2D;

static class TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2DParMetis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2DParMetis() : CxxTest::RealTestDescription( Tests_TestBidomainDistributedMesh, suiteDescription_TestBidomainDistributedMesh, 163, "TestBidomainProblemWithDistributedMesh2DParMetis" ) {}
 void runTest() { suite_TestBidomainDistributedMesh.TestBidomainProblemWithDistributedMesh2DParMetis(); }
} testDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMesh2DParMetis;

static class TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMeshFromMemfem3DParMetis : public CxxTest::RealTestDescription {
public:
 TestDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMeshFromMemfem3DParMetis() : CxxTest::RealTestDescription( Tests_TestBidomainDistributedMesh, suiteDescription_TestBidomainDistributedMesh, 271, "TestBidomainProblemWithDistributedMeshFromMemfem3DParMetis" ) {}
 void runTest() { suite_TestBidomainDistributedMesh.TestBidomainProblemWithDistributedMeshFromMemfem3DParMetis(); }
} testDescription_TestBidomainDistributedMesh_TestBidomainProblemWithDistributedMeshFromMemfem3DParMetis;

#include <cxxtest/Root.cpp>

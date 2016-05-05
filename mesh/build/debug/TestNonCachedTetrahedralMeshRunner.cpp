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
#include "mesh/test/TestNonCachedTetrahedralMesh.hpp"

static TestNonCachedTetrahedralMesh suite_TestNonCachedTetrahedralMesh;

static CxxTest::List Tests_TestNonCachedTetrahedralMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNonCachedTetrahedralMesh( "mesh/test/TestNonCachedTetrahedralMesh.hpp", 49, "TestNonCachedTetrahedralMesh", suite_TestNonCachedTetrahedralMesh, Tests_TestNonCachedTetrahedralMesh );

static class TestDescription_TestNonCachedTetrahedralMesh_TestConstruct3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonCachedTetrahedralMesh_TestConstruct3D() : CxxTest::RealTestDescription( Tests_TestNonCachedTetrahedralMesh, suiteDescription_TestNonCachedTetrahedralMesh, 86, "TestConstruct3D" ) {}
 void runTest() { suite_TestNonCachedTetrahedralMesh.TestConstruct3D(); }
} testDescription_TestNonCachedTetrahedralMesh_TestConstruct3D;

static class TestDescription_TestNonCachedTetrahedralMesh_TestSameJacobianData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonCachedTetrahedralMesh_TestSameJacobianData() : CxxTest::RealTestDescription( Tests_TestNonCachedTetrahedralMesh, suiteDescription_TestNonCachedTetrahedralMesh, 116, "TestSameJacobianData" ) {}
 void runTest() { suite_TestNonCachedTetrahedralMesh.TestSameJacobianData(); }
} testDescription_TestNonCachedTetrahedralMesh_TestSameJacobianData;

static class TestDescription_TestNonCachedTetrahedralMesh_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonCachedTetrahedralMesh_TestExceptions() : CxxTest::RealTestDescription( Tests_TestNonCachedTetrahedralMesh, suiteDescription_TestNonCachedTetrahedralMesh, 203, "TestExceptions" ) {}
 void runTest() { suite_TestNonCachedTetrahedralMesh.TestExceptions(); }
} testDescription_TestNonCachedTetrahedralMesh_TestExceptions;

static class TestDescription_TestNonCachedTetrahedralMesh_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestNonCachedTetrahedralMesh_TestArchiving() : CxxTest::RealTestDescription( Tests_TestNonCachedTetrahedralMesh, suiteDescription_TestNonCachedTetrahedralMesh, 219, "TestArchiving" ) {}
 void runTest() { suite_TestNonCachedTetrahedralMesh.TestArchiving(); }
} testDescription_TestNonCachedTetrahedralMesh_TestArchiving;

#include <cxxtest/Root.cpp>

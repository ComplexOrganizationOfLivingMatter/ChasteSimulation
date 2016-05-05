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
#include "heart/test/TestHeartGeometryInformation.hpp"

static TestHeartGeometryInformation suite_TestHeartGeometryInformation;

static CxxTest::List Tests_TestHeartGeometryInformation = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeartGeometryInformation( "heart/test/TestHeartGeometryInformation.hpp", 44, "TestHeartGeometryInformation", suite_TestHeartGeometryInformation, Tests_TestHeartGeometryInformation );

static class TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple2dMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple2dMesh() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 80, "TestCalculateRelativeWallPositionSimple2dMesh" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestCalculateRelativeWallPositionSimple2dMesh(); }
} testDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple2dMesh;

static class TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple3dMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple3dMesh() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 130, "TestCalculateRelativeWallPositionSimple3dMesh" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestCalculateRelativeWallPositionSimple3dMesh(); }
} testDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionSimple3dMesh;

static class TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionWithThreeSurfaces : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionWithThreeSurfaces() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 198, "TestCalculateRelativeWallPositionWithThreeSurfaces" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestCalculateRelativeWallPositionWithThreeSurfaces(); }
} testDescription_TestHeartGeometryInformation_TestCalculateRelativeWallPositionWithThreeSurfaces;

static class TestDescription_TestHeartGeometryInformation_TestDetermineLayerForEachNodeWritingAndReading : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestDetermineLayerForEachNodeWritingAndReading() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 289, "TestDetermineLayerForEachNodeWritingAndReading" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestDetermineLayerForEachNodeWritingAndReading(); }
} testDescription_TestHeartGeometryInformation_TestDetermineLayerForEachNodeWritingAndReading;

static class TestDescription_TestHeartGeometryInformation_TestHeartGeometryTakingMeshFromFile : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestHeartGeometryTakingMeshFromFile() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 391, "TestHeartGeometryTakingMeshFromFile" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestHeartGeometryTakingMeshFromFile(); }
} testDescription_TestHeartGeometryInformation_TestHeartGeometryTakingMeshFromFile;

static class TestDescription_TestHeartGeometryInformation_TestHeartGeometryOnlyLeftVentricle : public CxxTest::RealTestDescription {
public:
 TestDescription_TestHeartGeometryInformation_TestHeartGeometryOnlyLeftVentricle() : CxxTest::RealTestDescription( Tests_TestHeartGeometryInformation, suiteDescription_TestHeartGeometryInformation, 518, "TestHeartGeometryOnlyLeftVentricle" ) {}
 void runTest() { suite_TestHeartGeometryInformation.TestHeartGeometryOnlyLeftVentricle(); }
} testDescription_TestHeartGeometryInformation_TestHeartGeometryOnlyLeftVentricle;

#include <cxxtest/Root.cpp>

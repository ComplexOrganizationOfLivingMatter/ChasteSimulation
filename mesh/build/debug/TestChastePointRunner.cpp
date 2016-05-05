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
#include "mesh/test/TestChastePoint.hpp"

static TestChastePoint suite_TestChastePoint;

static CxxTest::List Tests_TestChastePoint = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestChastePoint( "mesh/test/TestChastePoint.hpp", 48, "TestChastePoint", suite_TestChastePoint, Tests_TestChastePoint );

static class TestDescription_TestChastePoint_TestSetAndGetCoordinate : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestSetAndGetCoordinate() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 57, "TestSetAndGetCoordinate" ) {}
 void runTest() { suite_TestChastePoint.TestSetAndGetCoordinate(); }
} testDescription_TestChastePoint_TestSetAndGetCoordinate;

static class TestDescription_TestChastePoint_TestGetLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestGetLocation() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 111, "TestGetLocation" ) {}
 void runTest() { suite_TestChastePoint.TestGetLocation(); }
} testDescription_TestChastePoint_TestGetLocation;

static class TestDescription_TestChastePoint_TestSameChastePoints : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestSameChastePoints() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 127, "TestSameChastePoints" ) {}
 void runTest() { suite_TestChastePoint.TestSameChastePoints(); }
} testDescription_TestChastePoint_TestSameChastePoints;

static class TestDescription_TestChastePoint_TestZeroDimPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestZeroDimPoint() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 136, "TestZeroDimPoint" ) {}
 void runTest() { suite_TestChastePoint.TestZeroDimPoint(); }
} testDescription_TestChastePoint_TestZeroDimPoint;

static class TestDescription_TestChastePoint_TestCreateFromCvector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestCreateFromCvector() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 142, "TestCreateFromCvector" ) {}
 void runTest() { suite_TestChastePoint.TestCreateFromCvector(); }
} testDescription_TestChastePoint_TestCreateFromCvector;

static class TestDescription_TestChastePoint_TestCreateFromStdVector : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestCreateFromStdVector() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 152, "TestCreateFromStdVector" ) {}
 void runTest() { suite_TestChastePoint.TestCreateFromStdVector(); }
} testDescription_TestChastePoint_TestCreateFromStdVector;

static class TestDescription_TestChastePoint_TestArchivingPoint : public CxxTest::RealTestDescription {
public:
 TestDescription_TestChastePoint_TestArchivingPoint() : CxxTest::RealTestDescription( Tests_TestChastePoint, suiteDescription_TestChastePoint, 165, "TestArchivingPoint" ) {}
 void runTest() { suite_TestChastePoint.TestArchivingPoint(); }
} testDescription_TestChastePoint_TestArchivingPoint;

#include <cxxtest/Root.cpp>

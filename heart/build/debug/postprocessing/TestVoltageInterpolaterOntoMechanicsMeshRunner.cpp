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
#include "heart/test/postprocessing/TestVoltageInterpolaterOntoMechanicsMesh.hpp"

static TestVoltageInterpolaterOntoMechanicsMesh suite_TestVoltageInterpolaterOntoMechanicsMesh;

static CxxTest::List Tests_TestVoltageInterpolaterOntoMechanicsMesh = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVoltageInterpolaterOntoMechanicsMesh( "heart/test/postprocessing/TestVoltageInterpolaterOntoMechanicsMesh.hpp", 47, "TestVoltageInterpolaterOntoMechanicsMesh", suite_TestVoltageInterpolaterOntoMechanicsMesh, Tests_TestVoltageInterpolaterOntoMechanicsMesh );

static class TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith1dData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith1dData() : CxxTest::RealTestDescription( Tests_TestVoltageInterpolaterOntoMechanicsMesh, suiteDescription_TestVoltageInterpolaterOntoMechanicsMesh, 61, "TestWith1dData" ) {}
 void runTest() { suite_TestVoltageInterpolaterOntoMechanicsMesh.TestWith1dData(); }
} testDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith1dData;

static class TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith2dData : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith2dData() : CxxTest::RealTestDescription( Tests_TestVoltageInterpolaterOntoMechanicsMesh, suiteDescription_TestVoltageInterpolaterOntoMechanicsMesh, 135, "TestWith2dData" ) {}
 void runTest() { suite_TestVoltageInterpolaterOntoMechanicsMesh.TestWith2dData(); }
} testDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWith2dData;

static class TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWithMultipleVariables1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWithMultipleVariables1D() : CxxTest::RealTestDescription( Tests_TestVoltageInterpolaterOntoMechanicsMesh, suiteDescription_TestVoltageInterpolaterOntoMechanicsMesh, 180, "TestWithMultipleVariables1D" ) {}
 void runTest() { suite_TestVoltageInterpolaterOntoMechanicsMesh.TestWithMultipleVariables1D(); }
} testDescription_TestVoltageInterpolaterOntoMechanicsMesh_TestWithMultipleVariables1D;

#include <cxxtest/Root.cpp>

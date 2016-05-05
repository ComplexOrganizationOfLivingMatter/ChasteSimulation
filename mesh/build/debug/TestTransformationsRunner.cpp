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
#include "mesh/test/TestTransformations.hpp"

static TestTransformations suite_TestTransformations;

static CxxTest::List Tests_TestTransformations = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTransformations( "mesh/test/TestTransformations.hpp", 52, "TestTransformations", suite_TestTransformations, Tests_TestTransformations );

static class TestDescription_TestTransformations_TestRefreshMeshByScaling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestRefreshMeshByScaling() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 56, "TestRefreshMeshByScaling" ) {}
 void runTest() { suite_TestTransformations.TestRefreshMeshByScaling(); }
} testDescription_TestTransformations_TestRefreshMeshByScaling;

static class TestDescription_TestTransformations_TestTranslation3DWithUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestTranslation3DWithUblas() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 83, "TestTranslation3DWithUblas" ) {}
 void runTest() { suite_TestTransformations.TestTranslation3DWithUblas(); }
} testDescription_TestTransformations_TestTranslation3DWithUblas;

static class TestDescription_TestTransformations_TestTranslation2DWithUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestTranslation2DWithUblas() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 119, "TestTranslation2DWithUblas" ) {}
 void runTest() { suite_TestTransformations.TestTranslation2DWithUblas(); }
} testDescription_TestTransformations_TestTranslation2DWithUblas;

static class TestDescription_TestTransformations_TestTranslationMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestTranslationMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 154, "TestTranslationMethod" ) {}
 void runTest() { suite_TestTransformations.TestTranslationMethod(); }
} testDescription_TestTransformations_TestTranslationMethod;

static class TestDescription_TestTransformations_Test3DMeshTranslationWithUblasMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_Test3DMeshTranslationWithUblasMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 180, "Test3DMeshTranslationWithUblasMethod" ) {}
 void runTest() { suite_TestTransformations.Test3DMeshTranslationWithUblasMethod(); }
} testDescription_TestTransformations_Test3DMeshTranslationWithUblasMethod;

static class TestDescription_TestTransformations_TestXaxisRotation3DWithHomogeneousUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestXaxisRotation3DWithHomogeneousUblas() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 223, "TestXaxisRotation3DWithHomogeneousUblas" ) {}
 void runTest() { suite_TestTransformations.TestXaxisRotation3DWithHomogeneousUblas(); }
} testDescription_TestTransformations_TestXaxisRotation3DWithHomogeneousUblas;

static class TestDescription_TestTransformations_TestXaxisRotation3DWithMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestXaxisRotation3DWithMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 281, "TestXaxisRotation3DWithMethod" ) {}
 void runTest() { suite_TestTransformations.TestXaxisRotation3DWithMethod(); }
} testDescription_TestTransformations_TestXaxisRotation3DWithMethod;

static class TestDescription_TestTransformations_TestYaxisRotation3DWithMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestYaxisRotation3DWithMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 305, "TestYaxisRotation3DWithMethod" ) {}
 void runTest() { suite_TestTransformations.TestYaxisRotation3DWithMethod(); }
} testDescription_TestTransformations_TestYaxisRotation3DWithMethod;

static class TestDescription_TestTransformations_TestZaxisRotation3DWithMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestZaxisRotation3DWithMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 324, "TestZaxisRotation3DWithMethod" ) {}
 void runTest() { suite_TestTransformations.TestZaxisRotation3DWithMethod(); }
} testDescription_TestTransformations_TestZaxisRotation3DWithMethod;

static class TestDescription_TestTransformations_TestGeneralConvolution3DWithHomogeneousUblas : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestGeneralConvolution3DWithHomogeneousUblas() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 343, "TestGeneralConvolution3DWithHomogeneousUblas" ) {}
 void runTest() { suite_TestTransformations.TestGeneralConvolution3DWithHomogeneousUblas(); }
} testDescription_TestTransformations_TestGeneralConvolution3DWithHomogeneousUblas;

static class TestDescription_TestTransformations_TestGeneralConvolution3DWithMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestGeneralConvolution3DWithMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 433, "TestGeneralConvolution3DWithMethod" ) {}
 void runTest() { suite_TestTransformations.TestGeneralConvolution3DWithMethod(); }
} testDescription_TestTransformations_TestGeneralConvolution3DWithMethod;

static class TestDescription_TestTransformations_Test3DAngleAxisRotation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_Test3DAngleAxisRotation() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 455, "Test3DAngleAxisRotation" ) {}
 void runTest() { suite_TestTransformations.Test3DAngleAxisRotation(); }
} testDescription_TestTransformations_Test3DAngleAxisRotation;

static class TestDescription_TestTransformations_Test2DMeshRotation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_Test2DMeshRotation() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 496, "Test2DMeshRotation" ) {}
 void runTest() { suite_TestTransformations.Test2DMeshRotation(); }
} testDescription_TestTransformations_Test2DMeshRotation;

static class TestDescription_TestTransformations_TestScalingWithMethod : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestScalingWithMethod() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 531, "TestScalingWithMethod" ) {}
 void runTest() { suite_TestTransformations.TestScalingWithMethod(); }
} testDescription_TestTransformations_TestScalingWithMethod;

static class TestDescription_TestTransformations_TestExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestTransformations_TestExceptions() : CxxTest::RealTestDescription( Tests_TestTransformations, suiteDescription_TestTransformations, 593, "TestExceptions" ) {}
 void runTest() { suite_TestTransformations.TestExceptions(); }
} testDescription_TestTransformations_TestExceptions;

#include <cxxtest/Root.cpp>

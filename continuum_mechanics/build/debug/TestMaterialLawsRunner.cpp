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
#include "continuum_mechanics/test/TestMaterialLaws.hpp"

static TestMaterialLaws suite_TestMaterialLaws;

static CxxTest::List Tests_TestMaterialLaws = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMaterialLaws( "continuum_mechanics/test/TestMaterialLaws.hpp", 55, "TestMaterialLaws", suite_TestMaterialLaws, Tests_TestMaterialLaws );

static class TestDescription_TestMaterialLaws_TestMooneyRivlinLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestMooneyRivlinLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 272, "TestMooneyRivlinLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestMooneyRivlinLaw(); }
} testDescription_TestMaterialLaws_TestMooneyRivlinLaw;

static class TestDescription_TestMaterialLaws_TestExponentialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestExponentialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 393, "TestExponentialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestExponentialLaw(); }
} testDescription_TestMaterialLaws_TestExponentialLaw;

static class TestDescription_TestMaterialLaws_TestPolynomialMaterialLawAgainstMooneyRivlin : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestPolynomialMaterialLawAgainstMooneyRivlin() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 430, "TestPolynomialMaterialLawAgainstMooneyRivlin" ) {}
 void runTest() { suite_TestMaterialLaws.TestPolynomialMaterialLawAgainstMooneyRivlin(); }
} testDescription_TestMaterialLaws_TestPolynomialMaterialLawAgainstMooneyRivlin;

static class TestDescription_TestMaterialLaws_TestQuadraticPolynomialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestQuadraticPolynomialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 472, "TestQuadraticPolynomialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestQuadraticPolynomialLaw(); }
} testDescription_TestMaterialLaws_TestQuadraticPolynomialLaw;

static class TestDescription_TestMaterialLaws_TestPoleZeroMaterialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestPoleZeroMaterialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 608, "TestPoleZeroMaterialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestPoleZeroMaterialLaw(); }
} testDescription_TestMaterialLaws_TestPoleZeroMaterialLaw;

static class TestDescription_TestMaterialLaws_TestPoleZeroMaterialLaw3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestPoleZeroMaterialLaw3d() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 739, "TestPoleZeroMaterialLaw3d" ) {}
 void runTest() { suite_TestMaterialLaws.TestPoleZeroMaterialLaw3d(); }
} testDescription_TestMaterialLaws_TestPoleZeroMaterialLaw3d;

static class TestDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw3d() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 820, "TestNashHunterPoleZeroLaw3d" ) {}
 void runTest() { suite_TestMaterialLaws.TestNashHunterPoleZeroLaw3d(); }
} testDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw3d;

static class TestDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw2d() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 867, "TestNashHunterPoleZeroLaw2d" ) {}
 void runTest() { suite_TestMaterialLaws.TestNashHunterPoleZeroLaw2d(); }
} testDescription_TestMaterialLaws_TestNashHunterPoleZeroLaw2d;

static class TestDescription_TestMaterialLaws_TestSchmidCostaExponentialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestSchmidCostaExponentialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 899, "TestSchmidCostaExponentialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestSchmidCostaExponentialLaw(); }
} testDescription_TestMaterialLaws_TestSchmidCostaExponentialLaw;

static class TestDescription_TestMaterialLaws_TestCompressibleLawsUsingToyCompressibleMaterialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestCompressibleLawsUsingToyCompressibleMaterialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 944, "TestCompressibleLawsUsingToyCompressibleMaterialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestCompressibleLawsUsingToyCompressibleMaterialLaw(); }
} testDescription_TestMaterialLaws_TestCompressibleLawsUsingToyCompressibleMaterialLaw;

static class TestDescription_TestMaterialLaws_TestCompressibleMooneyRivlinLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestCompressibleMooneyRivlinLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 1048, "TestCompressibleMooneyRivlinLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestCompressibleMooneyRivlinLaw(); }
} testDescription_TestMaterialLaws_TestCompressibleMooneyRivlinLaw;

static class TestDescription_TestMaterialLaws_TestCompressibleExponentialLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestCompressibleExponentialLaw() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 1098, "TestCompressibleExponentialLaw" ) {}
 void runTest() { suite_TestMaterialLaws.TestCompressibleExponentialLaw(); }
} testDescription_TestMaterialLaws_TestCompressibleExponentialLaw;

static class TestDescription_TestMaterialLaws_TestCompressibleExponentialLaw3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMaterialLaws_TestCompressibleExponentialLaw3d() : CxxTest::RealTestDescription( Tests_TestMaterialLaws, suiteDescription_TestMaterialLaws, 1146, "TestCompressibleExponentialLaw3d" ) {}
 void runTest() { suite_TestMaterialLaws.TestCompressibleExponentialLaw3d(); }
} testDescription_TestMaterialLaws_TestCompressibleExponentialLaw3d;

#include <cxxtest/Root.cpp>

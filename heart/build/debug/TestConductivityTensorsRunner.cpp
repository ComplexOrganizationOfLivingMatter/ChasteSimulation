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
#include "heart/test/TestConductivityTensors.hpp"

static TestConductivityTensors suite_TestConductivityTensors;

static CxxTest::List Tests_TestConductivityTensors = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestConductivityTensors( "heart/test/TestConductivityTensors.hpp", 49, "TestConductivityTensors", suite_TestConductivityTensors, Tests_TestConductivityTensors );

static class TestDescription_TestConductivityTensors_TestConstantTensor3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestConstantTensor3D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 52, "TestConstantTensor3D" ) {}
 void runTest() { suite_TestConductivityTensors.TestConstantTensor3D(); }
} testDescription_TestConductivityTensors_TestConstantTensor3D;

static class TestDescription_TestConductivityTensors_TestTensorException : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestTensorException() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 92, "TestTensorException" ) {}
 void runTest() { suite_TestConductivityTensors.TestTensorException(); }
} testDescription_TestConductivityTensors_TestTensorException;

static class TestDescription_TestConductivityTensors_TestFibreOrientationFileExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestFibreOrientationFileExceptions() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 116, "TestFibreOrientationFileExceptions" ) {}
 void runTest() { suite_TestConductivityTensors.TestFibreOrientationFileExceptions(); }
} testDescription_TestConductivityTensors_TestFibreOrientationFileExceptions;

static class TestDescription_TestConductivityTensors_TestFibreOrientationTensor3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestFibreOrientationTensor3D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 183, "TestFibreOrientationTensor3D" ) {}
 void runTest() { suite_TestConductivityTensors.TestFibreOrientationTensor3D(); }
} testDescription_TestConductivityTensors_TestFibreOrientationTensor3D;

static class TestDescription_TestConductivityTensors_TestCompareOrthotropicAxisymmetricTensors : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestCompareOrthotropicAxisymmetricTensors() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 214, "TestCompareOrthotropicAxisymmetricTensors" ) {}
 void runTest() { suite_TestConductivityTensors.TestCompareOrthotropicAxisymmetricTensors(); }
} testDescription_TestConductivityTensors_TestCompareOrthotropicAxisymmetricTensors;

static class TestDescription_TestConductivityTensors_TestFibreOrientationAxisymmetric3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestFibreOrientationAxisymmetric3D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 250, "TestFibreOrientationAxisymmetric3D" ) {}
 void runTest() { suite_TestConductivityTensors.TestFibreOrientationAxisymmetric3D(); }
} testDescription_TestConductivityTensors_TestFibreOrientationAxisymmetric3D;

static class TestDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensor3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensor3D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 282, "TestHeterogeneousConductivitiesTensor3D" ) {}
 void runTest() { suite_TestConductivityTensors.TestHeterogeneousConductivitiesTensor3D(); }
} testDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensor3D;

static class TestDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensorDistributed3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensorDistributed3D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 332, "TestHeterogeneousConductivitiesTensorDistributed3D" ) {}
 void runTest() { suite_TestConductivityTensors.TestHeterogeneousConductivitiesTensorDistributed3D(); }
} testDescription_TestConductivityTensors_TestHeterogeneousConductivitiesTensorDistributed3D;

static class TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor1D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 389, "TestHeterogeneousCondPlusFibreOrientationTensor1D" ) {}
 void runTest() { suite_TestConductivityTensors.TestHeterogeneousCondPlusFibreOrientationTensor1D(); }
} testDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor1D;

static class TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor2D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor2D() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 412, "TestHeterogeneousCondPlusFibreOrientationTensor2D" ) {}
 void runTest() { suite_TestConductivityTensors.TestHeterogeneousCondPlusFibreOrientationTensor2D(); }
} testDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor2D;

static class TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor3DDistributedTetrahedralMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor3DDistributedTetrahedralMesh() : CxxTest::RealTestDescription( Tests_TestConductivityTensors, suiteDescription_TestConductivityTensors, 440, "TestHeterogeneousCondPlusFibreOrientationTensor3DDistributedTetrahedralMesh" ) {}
 void runTest() { suite_TestConductivityTensors.TestHeterogeneousCondPlusFibreOrientationTensor3DDistributedTetrahedralMesh(); }
} testDescription_TestConductivityTensors_TestHeterogeneousCondPlusFibreOrientationTensor3DDistributedTetrahedralMesh;

#include <cxxtest/Root.cpp>

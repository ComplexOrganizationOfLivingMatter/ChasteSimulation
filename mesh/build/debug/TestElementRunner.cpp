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
#include "mesh/test/TestElement.hpp"

static TestElement suite_TestElement;

static CxxTest::List Tests_TestElement = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestElement( "mesh/test/TestElement.hpp", 52, "TestElement", suite_TestElement, Tests_TestElement );

static class TestDescription_TestElement_TestConstructionForLinearBasisFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestConstructionForLinearBasisFunctions() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 72, "TestConstructionForLinearBasisFunctions" ) {}
 void runTest() { suite_TestElement.TestConstructionForLinearBasisFunctions(); }
} testDescription_TestElement_TestConstructionForLinearBasisFunctions;

static class TestDescription_TestElement_TestEquals : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestEquals() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 104, "TestEquals" ) {}
 void runTest() { suite_TestElement.TestEquals(); }
} testDescription_TestElement_TestEquals;

static class TestDescription_TestElement_TestGetSetAbstractTetrahedralElementMethods : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestGetSetAbstractTetrahedralElementMethods() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 138, "TestGetSetAbstractTetrahedralElementMethods" ) {}
 void runTest() { suite_TestElement.TestGetSetAbstractTetrahedralElementMethods(); }
} testDescription_TestElement_TestGetSetAbstractTetrahedralElementMethods;

static class TestDescription_TestElement_TestJacobian : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestJacobian() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 157, "TestJacobian" ) {}
 void runTest() { suite_TestElement.TestJacobian(); }
} testDescription_TestElement_TestJacobian;

static class TestDescription_TestElement_TestNodeToElementConversion : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestNodeToElementConversion() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 290, "TestNodeToElementConversion" ) {}
 void runTest() { suite_TestElement.TestNodeToElementConversion(); }
} testDescription_TestElement_TestNodeToElementConversion;

static class TestDescription_TestElement_TestGetNodeLocation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestGetNodeLocation() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 307, "TestGetNodeLocation" ) {}
 void runTest() { suite_TestElement.TestGetNodeLocation(); }
} testDescription_TestElement_TestGetNodeLocation;

static class TestDescription_TestElement_TestElementSwapsNodesIfJacobianIsNegative : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestElementSwapsNodesIfJacobianIsNegative() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 334, "TestElementSwapsNodesIfJacobianIsNegative" ) {}
 void runTest() { suite_TestElement.TestElementSwapsNodesIfJacobianIsNegative(); }
} testDescription_TestElement_TestElementSwapsNodesIfJacobianIsNegative;

static class TestDescription_TestElement_TestElementCopyConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestElementCopyConstructor() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 414, "TestElementCopyConstructor" ) {}
 void runTest() { suite_TestElement.TestElementCopyConstructor(); }
} testDescription_TestElement_TestElementCopyConstructor;

static class TestDescription_TestElement_TestBoundaryElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestBoundaryElement() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 455, "TestBoundaryElement" ) {}
 void runTest() { suite_TestElement.TestBoundaryElement(); }
} testDescription_TestElement_TestBoundaryElement;

static class TestDescription_TestElement_TestCircum1d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestCircum1d() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 532, "TestCircum1d" ) {}
 void runTest() { suite_TestElement.TestCircum1d(); }
} testDescription_TestElement_TestCircum1d;

static class TestDescription_TestElement_TestCircum2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestCircum2d() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 555, "TestCircum2d" ) {}
 void runTest() { suite_TestElement.TestCircum2d(); }
} testDescription_TestElement_TestCircum2d;

static class TestDescription_TestElement_TestCircum3d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestCircum3d() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 608, "TestCircum3d" ) {}
 void runTest() { suite_TestElement.TestCircum3d(); }
} testDescription_TestElement_TestCircum3d;

static class TestDescription_TestElement_TestNormal1dIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestNormal1dIn2d() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 663, "TestNormal1dIn2d" ) {}
 void runTest() { suite_TestElement.TestNormal1dIn2d(); }
} testDescription_TestElement_TestNormal1dIn2d;

static class TestDescription_TestElement_TestCentroidAndDirection : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestCentroidAndDirection() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 679, "TestCentroidAndDirection" ) {}
 void runTest() { suite_TestElement.TestCentroidAndDirection(); }
} testDescription_TestElement_TestCentroidAndDirection;

static class TestDescription_TestElement_Test1DRefineElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test1DRefineElement() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 748, "Test1DRefineElement" ) {}
 void runTest() { suite_TestElement.Test1DRefineElement(); }
} testDescription_TestElement_Test1DRefineElement;

static class TestDescription_TestElement_Test1DRefineElementWithPointTooFarRightFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test1DRefineElementWithPointTooFarRightFails() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 810, "Test1DRefineElementWithPointTooFarRightFails" ) {}
 void runTest() { suite_TestElement.Test1DRefineElementWithPointTooFarRightFails(); }
} testDescription_TestElement_Test1DRefineElementWithPointTooFarRightFails;

static class TestDescription_TestElement_Test1DRefineElementWithPointTooFarLeftFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test1DRefineElementWithPointTooFarLeftFails() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 825, "Test1DRefineElementWithPointTooFarLeftFails" ) {}
 void runTest() { suite_TestElement.Test1DRefineElementWithPointTooFarLeftFails(); }
} testDescription_TestElement_Test1DRefineElementWithPointTooFarLeftFails;

static class TestDescription_TestElement_Test1DRefineElementManyNodes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test1DRefineElementManyNodes() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 840, "Test1DRefineElementManyNodes" ) {}
 void runTest() { suite_TestElement.Test1DRefineElementManyNodes(); }
} testDescription_TestElement_Test1DRefineElementManyNodes;

static class TestDescription_TestElement_Test2DRefineElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test2DRefineElement() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 857, "Test2DRefineElement" ) {}
 void runTest() { suite_TestElement.Test2DRefineElement(); }
} testDescription_TestElement_Test2DRefineElement;

static class TestDescription_TestElement_Test2DRefineElementFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test2DRefineElementFails() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 909, "Test2DRefineElementFails" ) {}
 void runTest() { suite_TestElement.Test2DRefineElementFails(); }
} testDescription_TestElement_Test2DRefineElementFails;

static class TestDescription_TestElement_Test3DRefineElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test3DRefineElement() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 926, "Test3DRefineElement" ) {}
 void runTest() { suite_TestElement.Test3DRefineElement(); }
} testDescription_TestElement_Test3DRefineElement;

static class TestDescription_TestElement_Test3DRefineElementFails : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_Test3DRefineElementFails() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 976, "Test3DRefineElementFails" ) {}
 void runTest() { suite_TestElement.Test3DRefineElementFails(); }
} testDescription_TestElement_Test3DRefineElementFails;

static class TestDescription_TestElement_TestGetStiffnessMatrixGlobalIndices : public CxxTest::RealTestDescription {
public:
 TestDescription_TestElement_TestGetStiffnessMatrixGlobalIndices() : CxxTest::RealTestDescription( Tests_TestElement, suiteDescription_TestElement, 999, "TestGetStiffnessMatrixGlobalIndices" ) {}
 void runTest() { suite_TestElement.TestGetStiffnessMatrixGlobalIndices(); }
} testDescription_TestElement_TestGetStiffnessMatrixGlobalIndices;

#include <cxxtest/Root.cpp>

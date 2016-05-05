/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
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
#include "mesh/test/vertex/TestVertexElement.hpp"

static TestVertexElement suite_TestVertexElement;

static CxxTest::List Tests_TestVertexElement = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVertexElement( "mesh/test/vertex/TestVertexElement.hpp", 48, "TestVertexElement", suite_TestVertexElement, Tests_TestVertexElement );

static class TestDescription_TestVertexElement_Test1dVertexElementIn2d : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_Test1dVertexElementIn2d() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 52, "Test1dVertexElementIn2d" ) {}
 void runTest() { suite_TestVertexElement.Test1dVertexElementIn2d(); }
} testDescription_TestVertexElement_Test1dVertexElementIn2d;

static class TestDescription_TestVertexElement_TestCreateVertexElement : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestCreateVertexElement() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 129, "TestCreateVertexElement" ) {}
 void runTest() { suite_TestVertexElement.TestCreateVertexElement(); }
} testDescription_TestVertexElement_TestCreateVertexElement;

static class TestDescription_TestVertexElement_TestVertexElementFaceConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestVertexElementFaceConstructor() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 223, "TestVertexElementFaceConstructor" ) {}
 void runTest() { suite_TestVertexElement.TestVertexElementFaceConstructor(); }
} testDescription_TestVertexElement_TestVertexElementFaceConstructor;

static class TestDescription_TestVertexElement_TestAltenativeConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestAltenativeConstructor() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 277, "TestAltenativeConstructor" ) {}
 void runTest() { suite_TestVertexElement.TestAltenativeConstructor(); }
} testDescription_TestVertexElement_TestAltenativeConstructor;

static class TestDescription_TestVertexElement_TestVertexElementDeleteAndAddNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestVertexElementDeleteAndAddNode() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 288, "TestVertexElementDeleteAndAddNode" ) {}
 void runTest() { suite_TestVertexElement.TestVertexElementDeleteAndAddNode(); }
} testDescription_TestVertexElement_TestVertexElementDeleteAndAddNode;

static class TestDescription_TestVertexElement_TestMarkAsDeleted : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestMarkAsDeleted() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 354, "TestMarkAsDeleted" ) {}
 void runTest() { suite_TestVertexElement.TestMarkAsDeleted(); }
} testDescription_TestVertexElement_TestMarkAsDeleted;

static class TestDescription_TestVertexElement_TestUpdateNode : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestUpdateNode() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 386, "TestUpdateNode" ) {}
 void runTest() { suite_TestVertexElement.TestUpdateNode(); }
} testDescription_TestVertexElement_TestUpdateNode;

static class TestDescription_TestVertexElement_TestAddFace : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestAddFace() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 417, "TestAddFace" ) {}
 void runTest() { suite_TestVertexElement.TestAddFace(); }
} testDescription_TestVertexElement_TestAddFace;

static class TestDescription_TestVertexElement_TestGetNodeLocalIndex : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestGetNodeLocalIndex() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 493, "TestGetNodeLocalIndex" ) {}
 void runTest() { suite_TestVertexElement.TestGetNodeLocalIndex(); }
} testDescription_TestVertexElement_TestGetNodeLocalIndex;

static class TestDescription_TestVertexElement_TestIsElementOnBoundary : public CxxTest::RealTestDescription {
public:
 TestDescription_TestVertexElement_TestIsElementOnBoundary() : CxxTest::RealTestDescription( Tests_TestVertexElement, suiteDescription_TestVertexElement, 523, "TestIsElementOnBoundary" ) {}
 void runTest() { suite_TestVertexElement.TestIsElementOnBoundary(); }
} testDescription_TestVertexElement_TestIsElementOnBoundary;

#include <cxxtest/Root.cpp>

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
#include "heart/test/monodomain/TestMonodomainProblem.hpp"

static TestMonodomainProblem suite_TestMonodomainProblem;

static CxxTest::List Tests_TestMonodomainProblem = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMonodomainProblem( "heart/test/monodomain/TestMonodomainProblem.hpp", 151, "TestMonodomainProblem", suite_TestMonodomainProblem, Tests_TestMonodomainProblem );

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemSimplestMesh1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemSimplestMesh1D() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 168, "TestMonodomainProblemSimplestMesh1D" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemSimplestMesh1D(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemSimplestMesh1D;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem1D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem1D() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 228, "TestMonodomainProblem1D" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem1D(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem1D;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem1DWithRelativeTolerance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem1DWithRelativeTolerance() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 305, "TestMonodomainProblem1DWithRelativeTolerance" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem1DWithRelativeTolerance(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem1DWithRelativeTolerance;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem1Din3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem1Din3D() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 351, "TestMonodomainProblem1Din3D" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem1Din3D(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem1Din3D;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem1DWithAbsoluteTolerance : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem1DWithAbsoluteTolerance() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 399, "TestMonodomainProblem1DWithAbsoluteTolerance" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem1DWithAbsoluteTolerance(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem1DWithAbsoluteTolerance;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithEdgeStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithEdgeStimulus() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 449, "TestMonodomainProblem2DWithEdgeStimulus" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem2DWithEdgeStimulus(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem2DWithEdgeStimulus;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithPointStimulusInTheVeryCentreOfTheMesh : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithPointStimulusInTheVeryCentreOfTheMesh() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 541, "TestMonodomainProblem2DWithPointStimulusInTheVeryCentreOfTheMesh" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem2DWithPointStimulusInTheVeryCentreOfTheMesh(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem2DWithPointStimulusInTheVeryCentreOfTheMesh;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemPrintsOnlyAtRequestedTimes : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemPrintsOnlyAtRequestedTimes() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 667, "TestMonodomainProblemPrintsOnlyAtRequestedTimes" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemPrintsOnlyAtRequestedTimes(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemPrintsOnlyAtRequestedTimes;

static class TestDescription_TestMonodomainProblem_TestMonodomainWithMeshInMemoryToMeshalyzer : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainWithMeshInMemoryToMeshalyzer() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 704, "TestMonodomainWithMeshInMemoryToMeshalyzer" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainWithMeshInMemoryToMeshalyzer(); }
} testDescription_TestMonodomainProblem_TestMonodomainWithMeshInMemoryToMeshalyzer;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates1DGeometry : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates1DGeometry() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 795, "TestMonodomainProblemCreates1DGeometry" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemCreates1DGeometry(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemCreates1DGeometry;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates2DGeometry : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates2DGeometry() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 837, "TestMonodomainProblemCreates2DGeometry" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemCreates2DGeometry(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemCreates2DGeometry;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates3DGeometry : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemCreates3DGeometry() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 862, "TestMonodomainProblemCreates3DGeometry" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemCreates3DGeometry(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemCreates3DGeometry;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemPrintsMultipleVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemPrintsMultipleVariables() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 990, "TestMonodomainProblemPrintsMultipleVariables" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemPrintsMultipleVariables(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemPrintsMultipleVariables;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblemExceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblemExceptions() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1028, "TestMonodomainProblemExceptions" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblemExceptions(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblemExceptions;

static class TestDescription_TestMonodomainProblem_TestArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestArchiving() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1099, "TestArchiving" ) {}
 void runTest() { suite_TestMonodomainProblem.TestArchiving(); }
} testDescription_TestMonodomainProblem_TestArchiving;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem1dInTwoHalves : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem1dInTwoHalves() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1190, "TestMonodomainProblem1dInTwoHalves" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem1dInTwoHalves(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem1dInTwoHalves;

static class TestDescription_TestMonodomainProblem_TestMonodomain2dOriginalPermutationInParallel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomain2dOriginalPermutationInParallel() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1240, "TestMonodomain2dOriginalPermutationInParallel" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomain2dOriginalPermutationInParallel(); }
} testDescription_TestMonodomainProblem_TestMonodomain2dOriginalPermutationInParallel;

static class TestDescription_TestMonodomainProblem_TestOutputDoesNotDependOnPrintTimestep : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestOutputDoesNotDependOnPrintTimestep() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1347, "TestOutputDoesNotDependOnPrintTimestep" ) {}
 void runTest() { suite_TestMonodomainProblem.TestOutputDoesNotDependOnPrintTimestep(); }
} testDescription_TestMonodomainProblem_TestOutputDoesNotDependOnPrintTimestep;

static class TestDescription_TestMonodomainProblem_TestCvodeErrorHandling : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestCvodeErrorHandling() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1428, "TestCvodeErrorHandling" ) {}
 void runTest() { suite_TestMonodomainProblem.TestCvodeErrorHandling(); }
} testDescription_TestMonodomainProblem_TestCvodeErrorHandling;

static class TestDescription_TestMonodomainProblem_TestArchivingOfSingleTraceOutputModifier : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestArchivingOfSingleTraceOutputModifier() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1453, "TestArchivingOfSingleTraceOutputModifier" ) {}
 void runTest() { suite_TestMonodomainProblem.TestArchivingOfSingleTraceOutputModifier(); }
} testDescription_TestMonodomainProblem_TestArchivingOfSingleTraceOutputModifier;

static class TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestMonodomainProblem_TestMonodomainProblem2DWithArchiving() : CxxTest::RealTestDescription( Tests_TestMonodomainProblem, suiteDescription_TestMonodomainProblem, 1505, "TestMonodomainProblem2DWithArchiving" ) {}
 void runTest() { suite_TestMonodomainProblem.TestMonodomainProblem2DWithArchiving(); }
} testDescription_TestMonodomainProblem_TestMonodomainProblem2DWithArchiving;

#include <cxxtest/Root.cpp>

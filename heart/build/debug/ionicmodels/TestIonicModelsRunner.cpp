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
#include "heart/test/ionicmodels/TestIonicModels.hpp"

static TestIonicModels suite_TestIonicModels;

static CxxTest::List Tests_TestIonicModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestIonicModels( "heart/test/ionicmodels/TestIonicModels.hpp", 94, "TestIonicModels", suite_TestIonicModels, Tests_TestIonicModels );

static class TestDescription_TestIonicModels_TestSolveForNoble98WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForNoble98WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 97, "TestSolveForNoble98WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForNoble98WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolveForNoble98WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolveForNoble98WithSacWithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForNoble98WithSacWithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 163, "TestSolveForNoble98WithSacWithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForNoble98WithSacWithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolveForNoble98WithSacWithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolveForNoble98WithSacStretchActivated : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForNoble98WithSacStretchActivated() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 216, "TestSolveForNoble98WithSacStretchActivated" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForNoble98WithSacStretchActivated(); }
} testDescription_TestIonicModels_TestSolveForNoble98WithSacStretchActivated;

static class TestDescription_TestIonicModels_TestSolveForOptimisedNoble98WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForOptimisedNoble98WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 243, "TestSolveForOptimisedNoble98WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForOptimisedNoble98WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolveForOptimisedNoble98WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForHH52WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForHH52WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 297, "TestSolverForHH52WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForHH52WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolverForHH52WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForFHN61WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForFHN61WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 343, "TestSolverForFHN61WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForFHN61WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolverForFHN61WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForLR91WithDelayedSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForLR91WithDelayedSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 398, "TestSolverForLR91WithDelayedSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForLR91WithDelayedSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolverForLR91WithDelayedSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForLR91WithRegularStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForLR91WithRegularStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 459, "TestSolverForLR91WithRegularStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForLR91WithRegularStimulus(); }
} testDescription_TestIonicModels_TestSolverForLR91WithRegularStimulus;

static class TestDescription_TestIonicModels_TestBackwardEulerLr91WithDelayedSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestBackwardEulerLr91WithDelayedSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 493, "TestBackwardEulerLr91WithDelayedSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestBackwardEulerLr91WithDelayedSimpleStimulus(); }
} testDescription_TestIonicModels_TestBackwardEulerLr91WithDelayedSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForFR2000WithDelayedSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForFR2000WithDelayedSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 569, "TestSolverForFR2000WithDelayedSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForFR2000WithDelayedSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolverForFR2000WithDelayedSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolverForFR2000WithVariablePotassiumCurrents : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForFR2000WithVariablePotassiumCurrents() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 628, "TestSolverForFR2000WithVariablePotassiumCurrents" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForFR2000WithVariablePotassiumCurrents(); }
} testDescription_TestIonicModels_TestSolverForFR2000WithVariablePotassiumCurrents;

static class TestDescription_TestIonicModels_TestSolverForFox2002WithRegularStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolverForFox2002WithRegularStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 680, "TestSolverForFox2002WithRegularStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolverForFox2002WithRegularStimulus(); }
} testDescription_TestIonicModels_TestSolverForFox2002WithRegularStimulus;

static class TestDescription_TestIonicModels_TestSolveForBackwardNoble98WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForBackwardNoble98WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 732, "TestSolveForBackwardNoble98WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForBackwardNoble98WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolveForBackwardNoble98WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestSolveForTT06WithSimpleStimulus : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestSolveForTT06WithSimpleStimulus() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 773, "TestSolveForTT06WithSimpleStimulus" ) {}
 void runTest() { suite_TestIonicModels.TestSolveForTT06WithSimpleStimulus(); }
} testDescription_TestIonicModels_TestSolveForTT06WithSimpleStimulus;

static class TestDescription_TestIonicModels_TestBackwardEulerTenTusscher06 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestBackwardEulerTenTusscher06() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 817, "TestBackwardEulerTenTusscher06" ) {}
 void runTest() { suite_TestIonicModels.TestBackwardEulerTenTusscher06(); }
} testDescription_TestIonicModels_TestBackwardEulerTenTusscher06;

static class TestDescription_TestIonicModels_TestDifrancescoNoble1985 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestDifrancescoNoble1985() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 863, "TestDifrancescoNoble1985" ) {}
 void runTest() { suite_TestIonicModels.TestDifrancescoNoble1985(); }
} testDescription_TestIonicModels_TestDifrancescoNoble1985;

static class TestDescription_TestIonicModels_TestMahajan2008 : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestMahajan2008() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 890, "TestMahajan2008" ) {}
 void runTest() { suite_TestIonicModels.TestMahajan2008(); }
} testDescription_TestIonicModels_TestMahajan2008;

static class TestDescription_TestIonicModels_TestBackwardEulerMahajan : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestBackwardEulerMahajan() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 921, "TestBackwardEulerMahajan" ) {}
 void runTest() { suite_TestIonicModels.TestBackwardEulerMahajan(); }
} testDescription_TestIonicModels_TestBackwardEulerMahajan;

static class TestDescription_TestIonicModels_TestMaleckar : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestMaleckar() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 967, "TestMaleckar" ) {}
 void runTest() { suite_TestIonicModels.TestMaleckar(); }
} testDescription_TestIonicModels_TestMaleckar;

static class TestDescription_TestIonicModels_TestLR1991AndN98WithSacArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestLR1991AndN98WithSacArchiving() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 1063, "TestLR1991AndN98WithSacArchiving" ) {}
 void runTest() { suite_TestIonicModels.TestLR1991AndN98WithSacArchiving(); }
} testDescription_TestIonicModels_TestLR1991AndN98WithSacArchiving;

static class TestDescription_TestIonicModels_TestMaleckar2009Archiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestMaleckar2009Archiving() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 1133, "TestMaleckar2009Archiving" ) {}
 void runTest() { suite_TestIonicModels.TestMaleckar2009Archiving(); }
} testDescription_TestIonicModels_TestMaleckar2009Archiving;

static class TestDescription_TestIonicModels_TestBackwardCellsArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestBackwardCellsArchiving() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 1189, "TestBackwardCellsArchiving" ) {}
 void runTest() { suite_TestIonicModels.TestBackwardCellsArchiving(); }
} testDescription_TestIonicModels_TestBackwardCellsArchiving;

static class TestDescription_TestIonicModels_TestPyCMLArchiving : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestPyCMLArchiving() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 1307, "TestPyCMLArchiving" ) {}
 void runTest() { suite_TestIonicModels.TestPyCMLArchiving(); }
} testDescription_TestIonicModels_TestPyCMLArchiving;

static class TestDescription_TestIonicModels_TestBackwardEulerDifficultCase : public CxxTest::RealTestDescription {
public:
 TestDescription_TestIonicModels_TestBackwardEulerDifficultCase() : CxxTest::RealTestDescription( Tests_TestIonicModels, suiteDescription_TestIonicModels, 1383, "TestBackwardEulerDifficultCase" ) {}
 void runTest() { suite_TestIonicModels.TestBackwardEulerDifficultCase(); }
} testDescription_TestIonicModels_TestBackwardEulerDifficultCase;

#include <cxxtest/Root.cpp>

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
#include "cell_based/test/simulation/TestOffLatticeSimulation3d.hpp"

static TestOffLatticeSimulation3d suite_TestOffLatticeSimulation3d;

static CxxTest::List Tests_TestOffLatticeSimulation3d = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestOffLatticeSimulation3d( "cell_based/test/simulation/TestOffLatticeSimulation3d.hpp", 64, "TestOffLatticeSimulation3d", suite_TestOffLatticeSimulation3d, Tests_TestOffLatticeSimulation3d );

static class TestDescription_TestOffLatticeSimulation3d_TestDoCellBirth : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation3d_TestDoCellBirth() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation3d, suiteDescription_TestOffLatticeSimulation3d, 82, "TestDoCellBirth" ) {}
 void runTest() { suite_TestOffLatticeSimulation3d.TestDoCellBirth(); }
} testDescription_TestOffLatticeSimulation3d_TestDoCellBirth;

static class TestDescription_TestOffLatticeSimulation3d_TestBirthOccursDuringSolve : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation3d_TestBirthOccursDuringSolve() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation3d, suiteDescription_TestOffLatticeSimulation3d, 109, "TestBirthOccursDuringSolve" ) {}
 void runTest() { suite_TestOffLatticeSimulation3d.TestBirthOccursDuringSolve(); }
} testDescription_TestOffLatticeSimulation3d_TestBirthOccursDuringSolve;

static class TestDescription_TestOffLatticeSimulation3d_TestSolveMethodSpheroidSimulation3D : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation3d_TestSolveMethodSpheroidSimulation3D() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation3d, suiteDescription_TestOffLatticeSimulation3d, 156, "TestSolveMethodSpheroidSimulation3D" ) {}
 void runTest() { suite_TestOffLatticeSimulation3d.TestSolveMethodSpheroidSimulation3D(); }
} testDescription_TestOffLatticeSimulation3d_TestSolveMethodSpheroidSimulation3D;

static class TestDescription_TestOffLatticeSimulation3d_TestGhostNodesSpheroidSimulation3DandSave : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation3d_TestGhostNodesSpheroidSimulation3DandSave() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation3d, suiteDescription_TestOffLatticeSimulation3d, 200, "TestGhostNodesSpheroidSimulation3DandSave" ) {}
 void runTest() { suite_TestOffLatticeSimulation3d.TestGhostNodesSpheroidSimulation3DandSave(); }
} testDescription_TestOffLatticeSimulation3d_TestGhostNodesSpheroidSimulation3DandSave;

static class TestDescription_TestOffLatticeSimulation3d_TestLoadOf3DSimulation : public CxxTest::RealTestDescription {
public:
 TestDescription_TestOffLatticeSimulation3d_TestLoadOf3DSimulation() : CxxTest::RealTestDescription( Tests_TestOffLatticeSimulation3d, suiteDescription_TestOffLatticeSimulation3d, 317, "TestLoadOf3DSimulation" ) {}
 void runTest() { suite_TestOffLatticeSimulation3d.TestLoadOf3DSimulation(); }
} testDescription_TestOffLatticeSimulation3d_TestLoadOf3DSimulation;

#include <cxxtest/Root.cpp>

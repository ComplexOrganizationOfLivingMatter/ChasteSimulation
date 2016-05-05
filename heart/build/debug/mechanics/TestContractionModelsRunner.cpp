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
#include "heart/test/mechanics/TestContractionModels.hpp"

static TestContractionModels suite_TestContractionModels;

static CxxTest::List Tests_TestContractionModels = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestContractionModels( "heart/test/mechanics/TestContractionModels.hpp", 78, "TestContractionModels", suite_TestContractionModels, Tests_TestContractionModels );

static class TestDescription_TestContractionModels_TestNonPhysiologicalContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNonPhysiologicalContractionModel() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 81, "TestNonPhysiologicalContractionModel" ) {}
 void runTest() { suite_TestContractionModels.TestNonPhysiologicalContractionModel(); }
} testDescription_TestContractionModels_TestNonPhysiologicalContractionModel;

static class TestDescription_TestContractionModels_TestNhsContractionModelSimple : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNhsContractionModelSimple() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 123, "TestNhsContractionModelSimple" ) {}
 void runTest() { suite_TestContractionModels.TestNhsContractionModelSimple(); }
} testDescription_TestContractionModels_TestNhsContractionModelSimple;

static class TestDescription_TestContractionModels_TestNhsConstantStretchVaryingCa : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNhsConstantStretchVaryingCa() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 183, "TestNhsConstantStretchVaryingCa" ) {}
 void runTest() { suite_TestContractionModels.TestNhsConstantStretchVaryingCa(); }
} testDescription_TestContractionModels_TestNhsConstantStretchVaryingCa;

static class TestDescription_TestContractionModels_TestNhsConstantCaVaryingStretch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNhsConstantCaVaryingStretch() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 294, "TestNhsConstantCaVaryingStretch" ) {}
 void runTest() { suite_TestContractionModels.TestNhsConstantCaVaryingStretch(); }
} testDescription_TestContractionModels_TestNhsConstantCaVaryingStretch;

static class TestDescription_TestContractionModels_TestNhsIsometricTwitch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNhsIsometricTwitch() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 396, "TestNhsIsometricTwitch" ) {}
 void runTest() { suite_TestContractionModels.TestNhsIsometricTwitch(); }
} testDescription_TestContractionModels_TestNhsIsometricTwitch;

static class TestDescription_TestContractionModels_TestRunDoNotUpdateEtcUsingKerchoff : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestRunDoNotUpdateEtcUsingKerchoff() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 468, "TestRunDoNotUpdateEtcUsingKerchoff" ) {}
 void runTest() { suite_TestContractionModels.TestRunDoNotUpdateEtcUsingKerchoff(); }
} testDescription_TestContractionModels_TestRunDoNotUpdateEtcUsingKerchoff;

static class TestDescription_TestContractionModels_TestKerchoffs2003ContractionModelIsometricTwitch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestKerchoffs2003ContractionModelIsometricTwitch() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 522, "TestKerchoffs2003ContractionModelIsometricTwitch" ) {}
 void runTest() { suite_TestContractionModels.TestKerchoffs2003ContractionModelIsometricTwitch(); }
} testDescription_TestContractionModels_TestKerchoffs2003ContractionModelIsometricTwitch;

static class TestDescription_TestContractionModels_TestKerchoffs2003ContractionModelVaryingStetch : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestKerchoffs2003ContractionModelVaryingStetch() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 594, "TestKerchoffs2003ContractionModelVaryingStetch" ) {}
 void runTest() { suite_TestContractionModels.TestKerchoffs2003ContractionModelVaryingStetch(); }
} testDescription_TestContractionModels_TestKerchoffs2003ContractionModelVaryingStetch;

static class TestDescription_TestContractionModels_TestNash2004ContractionLaw : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestNash2004ContractionLaw() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 674, "TestNash2004ContractionLaw" ) {}
 void runTest() { suite_TestContractionModels.TestNash2004ContractionLaw(); }
} testDescription_TestContractionModels_TestNash2004ContractionLaw;

static class TestDescription_TestContractionModels_TestFakeBathContractionModel : public CxxTest::RealTestDescription {
public:
 TestDescription_TestContractionModels_TestFakeBathContractionModel() : CxxTest::RealTestDescription( Tests_TestContractionModels, suiteDescription_TestContractionModels, 729, "TestFakeBathContractionModel" ) {}
 void runTest() { suite_TestContractionModels.TestFakeBathContractionModel(); }
} testDescription_TestContractionModels_TestFakeBathContractionModel;

#include <cxxtest/Root.cpp>

//! @file
//! 
//! This source file was generated from CellML.
//! 
//! Model: luo_rudy_1991
//! 
//! Processed by pycml - CellML Tools in Python
//!     (translators: 25950, pycml: 25949, optimize: 25790)
//! on Wed May  4 17:38:35 2016
//! 
//! <autogenerated>

#include "LuoRudy1991.hpp"
#include <cmath>
#include <cassert>
#include <memory>
#include "Exception.hpp"
#include "OdeSystemInformation.hpp"
#include "RegularStimulus.hpp"
#include "HeartConfig.hpp"
#include "IsNan.hpp"
#include "MathsCustomFunctions.hpp"

    boost::shared_ptr<RegularStimulus> CellLuoRudy1991FromCellML::UseCellMLDefaultStimulus()
    {
        // Use the default stimulus specified by CellML metadata
        const double var_chaste_interface__membrane__stim_start = 100.0; // millisecond
        const double var_chaste_interface__membrane__stim_period = 1000.0; // millisecond
        const double var_chaste_interface__membrane__stim_duration = 2.0; // millisecond
        const double var_chaste_interface__membrane__stim_amplitude =  -25.5; // uA_per_cm2
        boost::shared_ptr<RegularStimulus> p_cellml_stim(new RegularStimulus(
                -fabs(var_chaste_interface__membrane__stim_amplitude),
                var_chaste_interface__membrane__stim_duration,
                var_chaste_interface__membrane__stim_period,
                var_chaste_interface__membrane__stim_start
                ));
        mpIntracellularStimulus = p_cellml_stim;
        return p_cellml_stim;
    }
    
    double CellLuoRudy1991FromCellML::GetIntracellularCalciumConcentration()
    {
        return mStateVariables[7];
    }
    
    CellLuoRudy1991FromCellML::CellLuoRudy1991FromCellML(boost::shared_ptr<AbstractIvpOdeSolver> pSolver, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus)
        : AbstractCardiacCell(
                pSolver,
                8,
                0,
                pIntracellularStimulus)
    {
        // Time units: millisecond
        // 
        this->mpSystemInfo = OdeSystemInformation<CellLuoRudy1991FromCellML>::Instance();
        Init();

        // We have a default stimulus specified in the CellML file metadata
        this->mHasDefaultStimulusFromCellML = true;
        this->mParameters[0] = 0.09; // (c,slow_inward_current__P_si) [milliS_per_cm2]
        this->mParameters[1] = 23; // (c,fast_sodium_current__g_Na) [milliS_per_cm2]
        this->mParameters[2] = 0.282; // (c,time_dependent_potassium_current__g_Kmax) [milliS_per_cm2]
    }
    
    CellLuoRudy1991FromCellML::~CellLuoRudy1991FromCellML()
    {
    }
    
    void CellLuoRudy1991FromCellML::VerifyStateVariables()
    {
        std::vector<double>& rY = rGetStateVariables();
        double var_chaste_interface__fast_sodium_current_m_gate__m = rY[1];
        // Units: dimensionless; Initial value: 0.00187018
        
        if (var_chaste_interface__fast_sodium_current_m_gate__m < 0)
        {
            EXCEPTION(DumpState("State variable fast_sodium_current_m_gate__m has gone out of range. Check numerical parameters, for example time and space stepsizes, and/or solver tolerances"));
        }
        if (var_chaste_interface__fast_sodium_current_m_gate__m > 1)
        {
            EXCEPTION(DumpState("State variable fast_sodium_current_m_gate__m has gone out of range. Check numerical parameters, for example time and space stepsizes, and/or solver tolerances"));
        }
    }
    
    double CellLuoRudy1991FromCellML::GetIIonic(const std::vector<double>* pStateVariables)
    {
        // For state variable interpolation (SVI) we read in interpolated state variables,
        // otherwise for ionic current interpolation (ICI) we use the state variables of this model (node).
        if (!pStateVariables) pStateVariables = &rGetStateVariables();
        const std::vector<double>& rY = *pStateVariables;
        double var_chaste_interface__membrane__V = (mSetVoltageDerivativeToZero ? this->mFixedVoltage : rY[0]);
        // Units: millivolt; Initial value: -83.853
        double var_chaste_interface__fast_sodium_current_m_gate__m = rY[1];
        // Units: dimensionless; Initial value: 0.00187018
        double var_chaste_interface__fast_sodium_current_h_gate__h = rY[2];
        // Units: dimensionless; Initial value: 0.9804713
        double var_chaste_interface__fast_sodium_current_j_gate__j = rY[3];
        // Units: dimensionless; Initial value: 0.98767124
        double var_chaste_interface__slow_inward_current_d_gate__d = rY[4];
        // Units: dimensionless; Initial value: 0.00316354
        double var_chaste_interface__slow_inward_current_f_gate__f = rY[5];
        // Units: dimensionless; Initial value: 0.99427859
        double var_chaste_interface__time_dependent_potassium_current_X_gate__X = rY[6];
        // Units: dimensionless; Initial value: 0.16647703
        double var_chaste_interface__intracellular_calcium_concentration__Cai = rY[7];
        // Units: millimolar; Initial value: 0.0002
        
        const double var_time_dependent_potassium_current__i_K = (mParameters[2] * 1.0) * var_chaste_interface__time_dependent_potassium_current_X_gate__X * ((var_chaste_interface__membrane__V >  -100.0) ? ((2.8370000000000002 * (exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 77.0)) - 1.0)) / ((var_chaste_interface__membrane__V + 77.0) * exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 35.0)))) : 1.0) * (var_chaste_interface__membrane__V -  -77.567584385319392); // microA_per_cm2
        const double var_plateau_potassium_current__i_Kp = 0.0183 * (1.0 / (1.0 + exp((7.4880000000000004 - var_chaste_interface__membrane__V) * 0.16722408026755853))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
        const double var_time_independent_potassium_current_K1_gate__alpha_K1 = 1.02 / (1.0 + exp(0.23849999999999999 * ((var_chaste_interface__membrane__V -  -87.892901713802502) - 59.215000000000003))); // per_millisecond
        const double var_time_independent_potassium_current__i_K1 = 0.60470000000000002 * (var_time_independent_potassium_current_K1_gate__alpha_K1 / (var_time_independent_potassium_current_K1_gate__alpha_K1 + (((0.49124000000000001 * exp(0.080320000000000003 * ((var_chaste_interface__membrane__V + 5.476) -  -87.892901713802502))) + (1.0 * exp(0.061749999999999999 * (var_chaste_interface__membrane__V - 506.41709828619742)))) / (1.0 + exp( -0.51429999999999998 * ((var_chaste_interface__membrane__V -  -87.892901713802502) + 4.7530000000000001)))))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
        const double var_fast_sodium_current__i_Na = mParameters[1] * pow(var_chaste_interface__fast_sodium_current_m_gate__m, 3.0) * var_chaste_interface__fast_sodium_current_h_gate__h * var_chaste_interface__fast_sodium_current_j_gate__j * (var_chaste_interface__membrane__V - 54.794463935091848); // microA_per_cm2
        const double var_slow_inward_current__i_si = mParameters[0] * var_chaste_interface__slow_inward_current_d_gate__d * var_chaste_interface__slow_inward_current_f_gate__f * (var_chaste_interface__membrane__V - (7.7000000000000002 - (13.028700000000001 * log(var_chaste_interface__intracellular_calcium_concentration__Cai * 1.0)))); // microA_per_cm2
        const double var_background_current__i_b = 0.039210000000000002 * (var_chaste_interface__membrane__V -  -59.869999999999997); // microA_per_cm2
        const double var_chaste_interface__slow_inward_current__i_si = var_slow_inward_current__i_si; // microA_per_cm2
        const double var_chaste_interface__i_ionic = var_fast_sodium_current__i_Na + var_chaste_interface__slow_inward_current__i_si + var_time_dependent_potassium_current__i_K + var_time_independent_potassium_current__i_K1 + var_plateau_potassium_current__i_Kp + var_background_current__i_b; // uA_per_cm2
        
        const double i_ionic = var_chaste_interface__i_ionic;
        EXCEPT_IF_NOT(!std::isnan(i_ionic));
        return i_ionic;
    }
    
    void CellLuoRudy1991FromCellML::EvaluateYDerivatives(double var_chaste_interface__environment__time, const std::vector<double>& rY, std::vector<double>& rDY)
    {
        // Inputs:
        // Time units: millisecond
        double var_chaste_interface__membrane__V = (mSetVoltageDerivativeToZero ? this->mFixedVoltage : rY[0]);
        // Units: millivolt; Initial value: -83.853
        double var_chaste_interface__fast_sodium_current_m_gate__m = rY[1];
        // Units: dimensionless; Initial value: 0.00187018
        double var_chaste_interface__fast_sodium_current_h_gate__h = rY[2];
        // Units: dimensionless; Initial value: 0.9804713
        double var_chaste_interface__fast_sodium_current_j_gate__j = rY[3];
        // Units: dimensionless; Initial value: 0.98767124
        double var_chaste_interface__slow_inward_current_d_gate__d = rY[4];
        // Units: dimensionless; Initial value: 0.00316354
        double var_chaste_interface__slow_inward_current_f_gate__f = rY[5];
        // Units: dimensionless; Initial value: 0.99427859
        double var_chaste_interface__time_dependent_potassium_current_X_gate__X = rY[6];
        // Units: dimensionless; Initial value: 0.16647703
        double var_chaste_interface__intracellular_calcium_concentration__Cai = rY[7];
        // Units: millimolar; Initial value: 0.0002
        
        
        // Mathematics
        double d_dt_chaste_interface__membrane__V;
        const double var_slow_inward_current__i_si = mParameters[0] * var_chaste_interface__slow_inward_current_d_gate__d * var_chaste_interface__slow_inward_current_f_gate__f * (var_chaste_interface__membrane__V - (7.7000000000000002 - (13.028700000000001 * log(var_chaste_interface__intracellular_calcium_concentration__Cai * 1.0)))); // microA_per_cm2
        const double d_dt_chaste_interface__fast_sodium_current_m_gate__m = (((0.32000000000000001 * (var_chaste_interface__membrane__V + 47.130000000000003)) / (1.0 - exp( -0.10000000000000001 * (var_chaste_interface__membrane__V + 47.130000000000003)))) * (1.0 - var_chaste_interface__fast_sodium_current_m_gate__m)) - ((0.080000000000000002 * exp((-var_chaste_interface__membrane__V) * 0.090909090909090912)) * var_chaste_interface__fast_sodium_current_m_gate__m); // per_millisecond
        const double d_dt_chaste_interface__fast_sodium_current_h_gate__h = (((var_chaste_interface__membrane__V <  -40.0) ? (0.13500000000000001 * exp((80.0 + var_chaste_interface__membrane__V) *  -0.14705882352941177)) : 0.0) * (1.0 - var_chaste_interface__fast_sodium_current_h_gate__h)) - (((var_chaste_interface__membrane__V <  -40.0) ? ((3.5600000000000001 * exp(0.079000000000000001 * var_chaste_interface__membrane__V)) + (310000.0 * exp(0.34999999999999998 * var_chaste_interface__membrane__V))) : (1.0 / (0.13 * (1.0 + exp((var_chaste_interface__membrane__V + 10.66) *  -0.0900900900900901))))) * var_chaste_interface__fast_sodium_current_h_gate__h); // per_millisecond
        const double d_dt_chaste_interface__fast_sodium_current_j_gate__j = (((var_chaste_interface__membrane__V <  -40.0) ? (((( -127140.0 * exp(0.24440000000000001 * var_chaste_interface__membrane__V)) - (3.4740000000000003e-05 * exp( -0.043909999999999998 * var_chaste_interface__membrane__V))) * (var_chaste_interface__membrane__V + 37.780000000000001)) / (1.0 + exp(0.311 * (var_chaste_interface__membrane__V + 79.230000000000004)))) : 0.0) * (1.0 - var_chaste_interface__fast_sodium_current_j_gate__j)) - (((var_chaste_interface__membrane__V <  -40.0) ? ((0.1212 * exp( -0.01052 * var_chaste_interface__membrane__V)) / (1.0 + exp( -0.13780000000000001 * (var_chaste_interface__membrane__V + 40.140000000000001)))) : ((0.29999999999999999 * exp( -2.5349999999999999e-07 * var_chaste_interface__membrane__V)) / (1.0 + exp( -0.10000000000000001 * (var_chaste_interface__membrane__V + 32.0))))) * var_chaste_interface__fast_sodium_current_j_gate__j); // per_millisecond
        const double d_dt_chaste_interface__slow_inward_current_d_gate__d = (((0.095000000000000001 * exp( -0.01 * (var_chaste_interface__membrane__V - 5.0))) / (1.0 + exp( -0.071999999999999995 * (var_chaste_interface__membrane__V - 5.0)))) * (1.0 - var_chaste_interface__slow_inward_current_d_gate__d)) - (((0.070000000000000007 * exp( -0.017000000000000001 * (var_chaste_interface__membrane__V + 44.0))) / (1.0 + exp(0.050000000000000003 * (var_chaste_interface__membrane__V + 44.0)))) * var_chaste_interface__slow_inward_current_d_gate__d); // per_millisecond
        const double d_dt_chaste_interface__slow_inward_current_f_gate__f = (((0.012 * exp( -0.0080000000000000002 * (var_chaste_interface__membrane__V + 28.0))) / (1.0 + exp(0.14999999999999999 * (var_chaste_interface__membrane__V + 28.0)))) * (1.0 - var_chaste_interface__slow_inward_current_f_gate__f)) - (((0.0064999999999999997 * exp( -0.02 * (var_chaste_interface__membrane__V + 30.0))) / (1.0 + exp( -0.20000000000000001 * (var_chaste_interface__membrane__V + 30.0)))) * var_chaste_interface__slow_inward_current_f_gate__f); // per_millisecond
        const double d_dt_chaste_interface__time_dependent_potassium_current_X_gate__X = (((0.00050000000000000001 * exp(0.083000000000000004 * (var_chaste_interface__membrane__V + 50.0))) / (1.0 + exp(0.057000000000000002 * (var_chaste_interface__membrane__V + 50.0)))) * (1.0 - var_chaste_interface__time_dependent_potassium_current_X_gate__X)) - (((0.0012999999999999999 * exp( -0.059999999999999998 * (var_chaste_interface__membrane__V + 20.0))) / (1.0 + exp( -0.040000000000000001 * (var_chaste_interface__membrane__V + 20.0)))) * var_chaste_interface__time_dependent_potassium_current_X_gate__X); // per_millisecond
        const double d_dt_chaste_interface__intracellular_calcium_concentration__Cai = ( -0.0001 * var_slow_inward_current__i_si) + (0.070000000000000007 * (0.0001 - var_chaste_interface__intracellular_calcium_concentration__Cai)); // 'millimole per litre per millisecond'
        
        if (mSetVoltageDerivativeToZero)
        {
            d_dt_chaste_interface__membrane__V = 0.0;
        }
        else
        {
            const double var_time_dependent_potassium_current__i_K = (mParameters[2] * 1.0) * var_chaste_interface__time_dependent_potassium_current_X_gate__X * ((var_chaste_interface__membrane__V >  -100.0) ? ((2.8370000000000002 * (exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 77.0)) - 1.0)) / ((var_chaste_interface__membrane__V + 77.0) * exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 35.0)))) : 1.0) * (var_chaste_interface__membrane__V -  -77.567584385319392); // microA_per_cm2
            const double var_plateau_potassium_current__i_Kp = 0.0183 * (1.0 / (1.0 + exp((7.4880000000000004 - var_chaste_interface__membrane__V) * 0.16722408026755853))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
            const double var_time_independent_potassium_current_K1_gate__alpha_K1 = 1.02 / (1.0 + exp(0.23849999999999999 * ((var_chaste_interface__membrane__V -  -87.892901713802502) - 59.215000000000003))); // per_millisecond
            const double var_time_independent_potassium_current__i_K1 = 0.60470000000000002 * (var_time_independent_potassium_current_K1_gate__alpha_K1 / (var_time_independent_potassium_current_K1_gate__alpha_K1 + (((0.49124000000000001 * exp(0.080320000000000003 * ((var_chaste_interface__membrane__V + 5.476) -  -87.892901713802502))) + (1.0 * exp(0.061749999999999999 * (var_chaste_interface__membrane__V - 506.41709828619742)))) / (1.0 + exp( -0.51429999999999998 * ((var_chaste_interface__membrane__V -  -87.892901713802502) + 4.7530000000000001)))))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
            const double var_membrane__C = 1.0; // microF_per_cm2
            const double var_chaste_interface__membrane__I_stim = GetIntracellularAreaStimulus(var_chaste_interface__environment__time);
            const double var_fast_sodium_current__i_Na = mParameters[1] * pow(var_chaste_interface__fast_sodium_current_m_gate__m, 3.0) * var_chaste_interface__fast_sodium_current_h_gate__h * var_chaste_interface__fast_sodium_current_j_gate__j * (var_chaste_interface__membrane__V - 54.794463935091848); // microA_per_cm2
            const double var_background_current__i_b = 0.039210000000000002 * (var_chaste_interface__membrane__V -  -59.869999999999997); // microA_per_cm2
            d_dt_chaste_interface__membrane__V = ( -1.0 / var_membrane__C) * (var_chaste_interface__membrane__I_stim + var_fast_sodium_current__i_Na + var_slow_inward_current__i_si + var_time_dependent_potassium_current__i_K + var_time_independent_potassium_current__i_K1 + var_plateau_potassium_current__i_Kp + var_background_current__i_b); // 'millivolt per millisecond'
        }
        
        rDY[0] = d_dt_chaste_interface__membrane__V;
        rDY[1] = d_dt_chaste_interface__fast_sodium_current_m_gate__m;
        rDY[2] = d_dt_chaste_interface__fast_sodium_current_h_gate__h;
        rDY[3] = d_dt_chaste_interface__fast_sodium_current_j_gate__j;
        rDY[4] = d_dt_chaste_interface__slow_inward_current_d_gate__d;
        rDY[5] = d_dt_chaste_interface__slow_inward_current_f_gate__f;
        rDY[6] = d_dt_chaste_interface__time_dependent_potassium_current_X_gate__X;
        rDY[7] = d_dt_chaste_interface__intracellular_calcium_concentration__Cai;
    }
    
    std::vector<double> CellLuoRudy1991FromCellML::ComputeDerivedQuantities(double var_chaste_interface__environment__time, const std::vector<double> & rY)
    {
        // Inputs:
        // Time units: millisecond
        double var_chaste_interface__membrane__V = (mSetVoltageDerivativeToZero ? this->mFixedVoltage : rY[0]);
        // Units: millivolt; Initial value: -83.853
        double var_chaste_interface__time_dependent_potassium_current_X_gate__X = rY[6];
        // Units: dimensionless; Initial value: 0.16647703
        
        
        // Mathematics
        const double var_membrane__FonRT = 0.037435728309031795; // per_millivolt
        const double var_time_dependent_potassium_current__i_K = (mParameters[2] * 1.0) * var_chaste_interface__time_dependent_potassium_current_X_gate__X * ((var_chaste_interface__membrane__V >  -100.0) ? ((2.8370000000000002 * (exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 77.0)) - 1.0)) / ((var_chaste_interface__membrane__V + 77.0) * exp(0.040000000000000001 * (var_chaste_interface__membrane__V + 35.0)))) : 1.0) * (var_chaste_interface__membrane__V -  -77.567584385319392); // microA_per_cm2
        const double var_plateau_potassium_current__i_Kp = 0.0183 * (1.0 / (1.0 + exp((7.4880000000000004 - var_chaste_interface__membrane__V) * 0.16722408026755853))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
        const double var_time_independent_potassium_current_K1_gate__alpha_K1 = 1.02 / (1.0 + exp(0.23849999999999999 * ((var_chaste_interface__membrane__V -  -87.892901713802502) - 59.215000000000003))); // per_millisecond
        const double var_time_independent_potassium_current__i_K1 = 0.60470000000000002 * (var_time_independent_potassium_current_K1_gate__alpha_K1 / (var_time_independent_potassium_current_K1_gate__alpha_K1 + (((0.49124000000000001 * exp(0.080320000000000003 * ((var_chaste_interface__membrane__V + 5.476) -  -87.892901713802502))) + (1.0 * exp(0.061749999999999999 * (var_chaste_interface__membrane__V - 506.41709828619742)))) / (1.0 + exp( -0.51429999999999998 * ((var_chaste_interface__membrane__V -  -87.892901713802502) + 4.7530000000000001)))))) * (var_chaste_interface__membrane__V -  -87.892901713802502); // microA_per_cm2
        const double var_membrane__potassium_currents = var_time_dependent_potassium_current__i_K + var_time_independent_potassium_current__i_K1 + var_plateau_potassium_current__i_Kp; // microA_per_cm2
        
        std::vector<double> dqs(2);
        dqs[0] = var_membrane__FonRT;
        dqs[1] = var_membrane__potassium_currents;
        return dqs;
    }
    
template<>
void OdeSystemInformation<CellLuoRudy1991FromCellML>::Initialise(void)
{
    this->mSystemName = "luo_rudy_1991";
    this->mFreeVariableName = "environment_time";
    this->mFreeVariableUnits = "millisecond";
    
    this->mVariableNames.push_back("membrane_voltage");
    this->mVariableUnits.push_back("millivolt");
    this->mInitialConditions.push_back(-83.853);

    this->mVariableNames.push_back("fast_sodium_current_m_gate__m");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.00187018);

    this->mVariableNames.push_back("fast_sodium_current_h_gate__h");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.9804713);

    this->mVariableNames.push_back("fast_sodium_current_j_gate__j");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.98767124);

    this->mVariableNames.push_back("slow_inward_current_d_gate__d");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.00316354);

    this->mVariableNames.push_back("slow_inward_current_f_gate__f");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.99427859);

    this->mVariableNames.push_back("time_dependent_potassium_current_X_gate__X");
    this->mVariableUnits.push_back("dimensionless");
    this->mInitialConditions.push_back(0.16647703);

    this->mVariableNames.push_back("cytosolic_calcium_concentration");
    this->mVariableUnits.push_back("millimolar");
    this->mInitialConditions.push_back(0.0002);

    this->mParameterNames.push_back("membrane_L_type_calcium_current_conductance");
    this->mParameterUnits.push_back("milliS_per_cm2");
    
    this->mParameterNames.push_back("membrane_fast_sodium_current_conductance");
    this->mParameterUnits.push_back("milliS_per_cm2");
    
    this->mParameterNames.push_back("membrane_rapid_delayed_rectifier_potassium_current_conductance");
    this->mParameterUnits.push_back("milliS_per_cm2");
    
    this->mDerivedQuantityNames.push_back("FonRT");
    this->mDerivedQuantityUnits.push_back("per_millivolt");
    
    this->mDerivedQuantityNames.push_back("potassium_currents");
    this->mDerivedQuantityUnits.push_back("microA_per_cm2");
    
    this->mAttributes["SuggestedCycleLength"] = 750;
    this->mAttributes["SuggestedForwardEulerTimestep"] = 0.005;
    
    this->mInitialised = true;
}


// Serialization for Boost >= 1.36
#include "SerializationExportWrapperForCpp.hpp"
CHASTE_CLASS_EXPORT(CellLuoRudy1991FromCellML)

#ifndef CELLNOBLEVARGHESEKOHLNOBLE1998AFROMCELLMLBACKWARDEULER_HPP_
#define CELLNOBLEVARGHESEKOHLNOBLE1998AFROMCELLMLBACKWARDEULER_HPP_

//! @file
//! 
//! This source file was generated from CellML.
//! 
//! Model: noble_varghese_kohl_noble_1998_basic
//! 
//! Processed by pycml - CellML Tools in Python
//!     (translators: 25950, pycml: 25949, optimize: 25790)
//! on Thu May  5 09:15:42 2016
//! 
//! <autogenerated>

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "AbstractBackwardEulerCardiacCell.hpp"
#include "AbstractStimulusFunction.hpp"

class CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler : public AbstractBackwardEulerCardiacCell<12>
{
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
        archive & boost::serialization::base_object<AbstractBackwardEulerCardiacCell<12> >(*this);
    }
    
    // 
    // Settable parameters and readable variables
    // 
    
public:
    boost::shared_ptr<RegularStimulus> UseCellMLDefaultStimulus();
    CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler(boost::shared_ptr<AbstractIvpOdeSolver> /* unused; should be empty */, boost::shared_ptr<AbstractStimulusFunction> pIntracellularStimulus);
    ~CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler();
    AbstractLookupTableCollection* GetLookupTableCollection();
    double GetIIonic(const std::vector<double>* pStateVariables=NULL);
    void ComputeResidual(double var_chaste_interface__environment__time, const double rCurrentGuess[12], double rResidual[12]);
    void ComputeJacobian(double var_chaste_interface__environment__time, const double rCurrentGuess[12], double rJacobian[12][12]);
protected:
    void UpdateTransmembranePotential(double var_chaste_interface__environment__time);
    void ComputeOneStepExceptVoltage(double var_chaste_interface__environment__time);
};


// Needs to be included last
#include "SerializationExportWrapper.hpp"
CHASTE_CLASS_EXPORT(CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler)

namespace boost
{
    namespace serialization
    {
        template<class Archive>
        inline void save_construct_data(
            Archive & ar, const CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler * t, const unsigned int fileVersion)
        {
            const boost::shared_ptr<AbstractIvpOdeSolver> p_solver = t->GetSolver();
            const boost::shared_ptr<AbstractStimulusFunction> p_stimulus = t->GetStimulusFunction();
            ar << p_solver;
            ar << p_stimulus;
        }
        
        template<class Archive>
        inline void load_construct_data(
            Archive & ar, CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler * t, const unsigned int fileVersion)
        {
            boost::shared_ptr<AbstractIvpOdeSolver> p_solver;
            boost::shared_ptr<AbstractStimulusFunction> p_stimulus;
            ar >> p_solver;
            ar >> p_stimulus;
            ::new(t)CellNobleVargheseKohlNoble1998aFromCellMLBackwardEuler(p_solver, p_stimulus);
        }
        
    }
    
}

#endif // CELLNOBLEVARGHESEKOHLNOBLE1998AFROMCELLMLBACKWARDEULER_HPP_

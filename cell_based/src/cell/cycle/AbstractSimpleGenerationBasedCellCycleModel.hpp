/*

Copyright (c) 2005-2016, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef ABSTRACTSIMPLEGENERATIONBASEDCYCLEMODEL_HPP_
#define ABSTRACTSIMPLEGENERATIONBASEDCYCLEMODEL_HPP_

#include "ChasteSerialization.hpp"
#include "ClassIsAbstract.hpp"
#include <boost/serialization/base_object.hpp>

#include "AbstractSimpleCellCycleModel.hpp"

/**
 * This class contains all the things common to simple generation-based cell cycle
 * models, i.e. models in which the length of cell cycle phases are determined
 * when the cell-cycle model is created, rather than evaluated 'on the fly'
 * by ODEs and suchlike, and in which each cell has a 'generation'.
 *
 * N.B. Whether or not the cell should actually divide may depend on
 * Wnt / Oxygen etc. in subclasses.
 */
class AbstractSimpleGenerationBasedCellCycleModel : public AbstractSimpleCellCycleModel
{
private:

    /** Needed for serialization. */
    friend class boost::serialization::access;
    /**
     * Archive the cell-cycle model.
     *
     * @param archive the archive
     * @param version the current version of this class
     */
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
        archive & boost::serialization::base_object<AbstractSimpleCellCycleModel>(*this);
        archive & mGeneration;
        archive & mMaxTransitGenerations;
    }

protected:

    /** The generation of this cell (cells with a StemCellProliferativeType have a generation of 0) */
    unsigned mGeneration;

    /** How many generations a transit cell lives for before becoming fully differentiated. */
    unsigned mMaxTransitGenerations;

public:

    /**
     * Default constructor - creates an AbstractSimpleCellCycleModel.
     */
    AbstractSimpleGenerationBasedCellCycleModel();

    /**
     * Destructor.
     */
    virtual ~AbstractSimpleGenerationBasedCellCycleModel();

    /** Overridden ResetForDivision() method. */
    void ResetForDivision();

    /**
     * Set the new cell's G1 duration once it has been created after division.
     * The duration will be based on cell type.
     */
    void InitialiseDaughterCell();

    /**
     * Sets the cell's generation.
     *
     * @param generation the cell's generation
     */
    void SetGeneration(unsigned generation);

    /**
     * @return the cell's generation.
     */
    unsigned GetGeneration() const;

    /**
     * Set mMaxTransitGenerations.
     *
     * @param maxTransitGenerations the new value of mMaxTransitGenerations
     */
    void SetMaxTransitGenerations(unsigned maxTransitGenerations);

    /**
     * @return mMaxTransitGenerations
     */
    unsigned GetMaxTransitGenerations() const;

    /**
     * Outputs cell cycle model parameters to file.
     *
     * @param rParamsFile the file stream to which the parameters are output
     */
    virtual void OutputCellCycleModelParameters(out_stream& rParamsFile);
};

CLASS_IS_ABSTRACT(AbstractSimpleGenerationBasedCellCycleModel)

#endif /*ABSTRACTSIMPLEGENERATIONBASEDCYCLEMODEL_HPP_*/

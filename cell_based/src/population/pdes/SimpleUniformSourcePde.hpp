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

#ifndef SIMPLEUNIFORMSOURCEPDE_HPP_
#define SIMPLEUNIFORMSOURCEPDE_HPP_

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>

#include "AbstractLinearEllipticPde.hpp"

/**
 *  A simple nutrient PDE which is not directly coupled to the cell population.
 */
template<unsigned DIM>
class SimpleUniformSourcePde : public AbstractLinearEllipticPde<DIM,DIM>
{
    friend class TestCellBasedPdes;

private:

    /** Needed for serialization.*/
    friend class boost::serialization::access;
    /**
     * Serialize the PDE and its member variables.
     *
     * @param archive the archive
     * @param version the current version of this class
     */
    template<class Archive>
    void serialize(Archive & archive, const unsigned int version)
    {
       archive & boost::serialization::base_object<AbstractLinearEllipticPde<DIM, DIM> >(*this);
       archive & mCoefficient;
    }

    /** Coefficient of consumption of nutrient by cells. */
    double mCoefficient;

public:

    /**
     * Constructor.
     *
     * @param coefficient the coefficient of consumption of nutrient by cells (defaults to 0.0)
     */
    SimpleUniformSourcePde(double coefficient=0.0);

    /**
     * @return mCoefficient
     */
    double GetCoefficient() const;

    /**
     * Overridden ComputeConstantInUSourceTerm() method.
     *
     * @param rX The point in space
     * @param pElement The element
     *
     * @return the constant in u part of the source term, i.e g(x) in
     *  Div(D Grad u)  +  f(x)u + g(x) = 0.
     */
    double ComputeConstantInUSourceTerm(const ChastePoint<DIM>& rX, Element<DIM,DIM>* pElement);

    /**
     * Overridden ComputeLinearInUCoeffInSourceTerm() method.
     *
     * @param rX The point in space
     * @param pElement the element
     *
     * @return the coefficient of u in the linear part of the source term, i.e f(x) in
     *  Div(D Grad u)  +  f(x)u + g(x) = 0.
     */
    double ComputeLinearInUCoeffInSourceTerm(const ChastePoint<DIM>& rX, Element<DIM,DIM>* pElement);

    /**
     * Overridden ComputeDiffusionTerm() method.
     *
     * @param rX The point in space at which the diffusion term is computed
     *
     * @return a matrix.
     */
    c_matrix<double,DIM,DIM> ComputeDiffusionTerm(const ChastePoint<DIM>& rX);
};

#include "SerializationExportWrapper.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(SimpleUniformSourcePde)

#endif /*SIMPLEUNIFORMSOURCEPDE_HPP_*/

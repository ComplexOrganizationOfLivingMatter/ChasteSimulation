/*
 * FarhadifarDifferentialByLabelForce.h
 *
 *  Created on: May 18, 2016
 *      Author: pablo
 */

#ifndef PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_
#define PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_

#include <FarhadifarForce.hpp>

#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>

//https://chaste.cs.ox.ac.uk/public-docs/classFarhadifarForce.html
//https://chaste.cs.ox.ac.uk/public-docs/classNagaiHondaDifferentialAdhesionForce.html
template<unsigned DIM>
class FarhadifarDifferentialByLabelForce : public FarhadifarForce<DIM> {
public:
	FarhadifarDifferentialByLabelForce();
	virtual ~FarhadifarDifferentialByLabelForce();
};

#endif /* PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_ */

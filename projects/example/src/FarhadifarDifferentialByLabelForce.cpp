/*
 * FarhadifarDifferentialByLabelForce.cpp
 *
 *  Created on: May 18, 2016
 *      Author: Palo Vicente-Munuera
 */

#include <projects/example/src/FarhadifarDifferentialByLabelForce.h>

template<unsigned DIM>
FarhadifarDifferentialByLabelForce<DIM>::FarhadifarDifferentialByLabelForce() :
		FarhadifarForce(), mAreaElasticityCellLabelledParameter(1.0), // These parameters are Case I in Farhadifar's paper
		mPerimeterContractilityCellLabelledParameter(0.04), mLineTensionCellLabelledParameter(
				0.12), mBoundaryLineTensionCellLabelledParameter(0.12) // this parameter as such does not exist in Farhadifar's model.
{
	// TODO Auto-generated constructor stub
}

template<unsigned DIM>
FarhadifarDifferentialByLabelForce<DIM>::~FarhadifarDifferentialByLabelForce() {
	// TODO Auto-generated destructor stub
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetAreaElasticityCellLabelledParameter() const {
	return mAreaElasticityCellLabelledParameter;
}
template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetAreaElasticityCellLabelledParameter(
		double areaElasticityCellLabelledParameter) {
	mAreaElasticityCellLabelledParameter = areaElasticityCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetBoundaryLineTensionCellLabelledParameter() const {
	return mBoundaryLineTensionCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetBoundaryLineTensionCellLabelledParameter(
		double boundaryLineTensionCellLabelledParameter) {
	mBoundaryLineTensionCellLabelledParameter =
			boundaryLineTensionCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetLineTensionCellLabelledParameter() const {
	return mLineTensionCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetLineTensionCellLabelledParameter(
		double lineTensionCellLabelledParameter) {
	mLineTensionCellLabelledParameter = lineTensionCellLabelledParameter;
}

template<unsigned DIM>
double FarhadifarDifferentialByLabelForce<DIM>::GetPerimeterContractilityCellLabelledParameter() const {
	return mPerimeterContractilityCellLabelledParameter;
}

template<unsigned DIM>
void FarhadifarDifferentialByLabelForce<DIM>::SetPerimeterContractilityCellLabelledParameter(
		double perimeterContractilityCellLabelledParameter) {
	mPerimeterContractilityCellLabelledParameter =
			perimeterContractilityCellLabelledParameter;
}

/*
 * FarhadifarDifferentialByLabelForce.h
 *
 *  Created on: May 18, 2016
 *      Author: Pablo Vicente-Munuera
 */

#ifndef PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_
#define PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_

//Serialization
#include "ChasteSerialization.hpp"
#include <boost/serialization/base_object.hpp>
#include "Exception.hpp"

//Inherited class
#include "FarhadifarForce.hpp"

#include "VertexBasedCellPopulation.hpp"
#include "CellLabel.hpp"


//https://chaste.cs.ox.ac.uk/public-docs/classFarhadifarForce.html
//https://chaste.cs.ox.ac.uk/public-docs/classNagaiHondaDifferentialAdhesionForce.html
template<unsigned DIM>
class FarhadifarDifferentialByLabelForce: public FarhadifarForce<DIM> {
protected:

	/**
	 * The strength of the area term in the model. Corresponds to K_alpha in Farhadifar's paper.
	 *  Refers to the labelled cell in the case it existed.
	 */
	double mAreaElasticityCellLabelledParameter;

	/**
	 * The strength of the perimeter term in the model. Corresponds to Gamma_alpha in Farhadifar's paper.
	 *  Refers to the labelled cell in the case it existed.
	 */
	double mPerimeterContractilityCellLabelledParameter;

	/**
	 * The strength of the line tension term in the model. Lambda_{i,j} in Farhadifar's paper.
	 * Refers to the labelled cell in the case it existed.
	 */
	double mLineTensionCellLabelledParameter;

	/**
	 * The strength of the line tension at the boundary. This term does correspond to Lambda_{i,j} in Farhadifar's paper.
	 *  Refers to the labelled cell in the case it existed.
	 */
	double mBoundaryLineTensionCellLabelledParameter;


private:

	friend class boost::serialization::access;
	/**
	 * Boost Serialization method for archiving/checkpointing.
	 * Archives the object and its member variables.
	 *
	 * @param archive  The boost archive.
	 * @param version  The current version of this class.
	 */
	template<class Archive>
	void serialize(Archive & archive, const unsigned int version) {
		archive
				& boost::serialization::base_object<FarhadifarForce<DIM> >(
						*this);
		archive & mAreaElasticityCellLabelledParameter;
		archive & mPerimeterContractilityCellLabelledParameter;
		archive & mLineTensionCellLabelledParameter;
		archive & mBoundaryLineTensionCellLabelledParameter;
	}

public:
	FarhadifarDifferentialByLabelForce();
	virtual ~FarhadifarDifferentialByLabelForce();
	/**
	 * Get the line tension parameter for the edge between two given nodes.
	 *
	 * @param pNodeA one node
	 * @param pNodeB the other node
	 * @param rVertexCellPopulation reference to the cell population
	 *
	 * @return the line tension parameter for this edge.
	 */
	virtual double GetLineTensionParameter(Node<DIM>* pNodeA, Node<DIM>* pNodeB,
			VertexBasedCellPopulation<DIM>& rVertexCellPopulation);
	double GetAreaElasticityCellLabelledParameter() const;
	void SetAreaElasticityCellLabelledParameter(
			double areaElasticityCellLabelledParameter);
	double GetBoundaryLineTensionCellLabelledParameter() const;
	void SetBoundaryLineTensionCellLabelledParameter(
			double boundaryLineTensionCellLabelledParameter);
	double GetLineTensionCellLabelledParameter() const;
	void SetLineTensionCellLabelledParameter(
			double lineTensionCellLabelledParameter);
	double GetPerimeterContractilityCellLabelledParameter() const;
	void SetPerimeterContractilityCellLabelledParameter(
			double perimeterContractilityCellLabelledParameter);
};

#include "SerializationExportWrapper.hpp"
EXPORT_TEMPLATE_CLASS_SAME_DIMS(FarhadifarDifferentialByLabelForce)

#endif /* PROJECTS_EXAMPLE_SRC_FARHADIFARDIFFERENTIALBYLABELFORCE_H_ */

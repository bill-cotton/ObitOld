/* $Id$        */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2011                                               */
/*;  Associated Universities, Inc. Washington DC, USA.                */
/*;                                                                   */
/*;  This program is free software; you can redistribute it and/or    */
/*;  modify it under the terms of the GNU General Public License as   */
/*;  published by the Free Software Foundation; either version 2 of   */
/*;  the License, or (at your option) any later version.              */
/*;                                                                   */
/*;  This program is distributed in the hope that it will be useful,  */
/*;  but WITHOUT ANY WARRANTY; without even the implied warranty of   */
/*;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    */
/*;  GNU General Public License for more details.                     */
/*;                                                                   */
/*;  You should have received a copy of the GNU General Public        */
/*;  License along with this program; if not, write to the Free       */
/*;  Software Foundation, Inc., 675 Massachusetts Ave, Cambridge,     */
/*;  MA 02139, USA.                                                   */
/*;                                                                   */
/*;Correspondence about this software should be addressed as follows: */
/*;         Internet email: bcotton@nrao.edu.                         */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
#ifndef OBITPIXHISTO_H 
#define OBITPIXHISTO_H 

#include "Obit.h"
#include "ObitImage.h"
#include "ObitFArray.h"
#include "ObitErr.h"

/*-------- Obit: Merx mollis mortibus nuper ------------------*/
/**
 * \file ObitPixHisto.h
 *
 * ObitPixHisto Pixel histogram and false detection class
 *
 * This class manages image pixel histograms and estimates the probably of
 * false detections based on such histograms.
 * 
 * \section ObitPixHistoaccess Creators and Destructors
 * An ObitPixHisto will usually be created using ObitPixHistoCreate which allows 
 * specifying a name for the object as well as other information.
 *
 * A copy of a pointer to an ObitPixHisto should always be made using the
 * #ObitPixHistoRef function which updates the reference count in the object.
 * Then whenever freeing an ObitPixHisto or changing a pointer, the function
 * #ObitPixHistoUnref will decrement the reference count and destroy the object
 * when the reference count hits 0.
 * There is no explicit destructor.
 */

/*--------------Class definitions-------------------------------------*/
/** ObitPixHisto Class structure. */
typedef struct {
#include "ObitPixHistoDef.h"   /* this class definition */
} ObitPixHisto;

/*----------------- Macroes ---------------------------*/
/** 
 * Macro to unreference (and possibly destroy) an ObitPixHisto
 * returns a ObitPixHisto*.
 * in = object to unreference
 */
#define ObitPixHistoUnref(in) ObitUnref (in)

/** 
 * Macro to reference (update reference count) an ObitPixHisto.
 * returns a ObitPixHisto*.
 * in = object to reference
 */
#define ObitPixHistoRef(in) ObitRef (in)

/** 
 * Macro to determine if an object is the member of this or a 
 * derived class.
 * Returns TRUE if a member, else FALSE
 * in = object to reference
 */
#define ObitPixHistoIsA(in) ObitIsA (in, ObitPixHistoGetClass())

/*---------------Public functions---------------------------*/
/** Public: Class initializer. */
void ObitPixHistoClassInit (void);

/** Public: Default Constructor. */
ObitPixHisto* newObitPixHisto (gchar* name);

/** Public: Create/initialize ObitPixHisto structures */
ObitPixHisto* ObitPixHistoCreate (gchar* name, ObitImage *image, 
				  ObitErr *err);
/** Typedef for definition of class pointer structure */
typedef ObitPixHisto* (*ObitPixHistoCreateFP) (gchar* name, 
					       ObitImage *image, 
					       ObitErr *err);

/** Public: Calculate histogram */
void ObitPixHistoHisto (ObitPixHisto *in, olong *blc, olong *trc,
			olong nbin, ofloat range,
			ObitErr *err);
/** Typedef for definition of class pointer structure */
typedef void (*ObitPixHistoHistoFP) (ObitPixHisto *in, 
				     olong *blc, olong *trc,
				     olong nbin, ofloat range,
				     ObitErr *err);

/** Public: Calculate minimum flux density for a given FDR */
ofloat ObitPixHistoFDRFlux (ObitPixHisto *in, ofloat maxFDR,
			    ObitErr *err);
/** Typedef for definition of class pointer structure */
typedef ofloat (*ObitPixHistoFDRFluxFP) (ObitPixHisto *in, 
					 ofloat maxFDR,
					 ObitErr *err);

/** Public: ClassInfo pointer */
gconstpointer ObitPixHistoGetClass (void);

/** Public: Copy (deep) constructor. */
ObitPixHisto* ObitPixHistoCopy  (ObitPixHisto *in, ObitPixHisto *out, ObitErr *err);

/** Public: Copy structure. */
void ObitPixHistoClone (ObitPixHisto *in, ObitPixHisto *out, ObitErr *err);

/*----------- ClassInfo Structure -----------------------------------*/
/**
 * ClassInfo Structure.
 * Contains class name, a pointer to any parent class
 * (NULL if none) and function pointers.
 */
typedef struct  {
#include "ObitPixHistoClassDef.h"
} ObitPixHistoClassInfo; 

#endif /* OBITPIXHISTO_H */ 

/* $Id$ */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2006,2019                                          */
/*;  Associated Universities, Inc. Washington DC, USA.                */
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
/*  Define the basic components of the ObitFitModel structure         */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitFitModelDef.h
 * ObitFitModel structure members for this and any derived classes.
 */
#include "ObitDef.h"  /* Parent class instance definitions */
/** Model type of the model component */
ObitFitModelCompType type;
/** Peak Flux density of component*/
ofloat Peak;
/** Component X position. */
ofloat DeltaX;
/** Component Y position. */
ofloat DeltaY;
/** Number of parameters */
olong nparm;
/** Model parameters, type dependent */
ofloat *parms;
/** Error in Peak flux density */
ofloat ePeak;
/** Error in Component X position. */
ofloat eDeltaX;
/** Error in Component Y position. */
ofloat eDeltaY;
/** Maximum size for component if >= 0.0 (pixels) */
ofloat maxSize;
/** Error in Model parameters, type dependent */
ofloat *eparms;

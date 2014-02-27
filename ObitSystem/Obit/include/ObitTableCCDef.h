/* $Id$   */
/* DO NOT EDIT - file generated by ObitTables.pl                      */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2014                                              */
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
/*  Define the basic components of the ObitTableCC  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableCCDef.h
 * ObitTableCC structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** Number of parameters for non point components, usually 0 or 4+ */
oint  noParms;
/** Column offset for Component flux density in table record */
olong  FluxOff;
/** Physical column number for Component flux density in table record */
olong  FluxCol;
/** Column offset for Component X position. in table record */
olong  DeltaXOff;
/** Physical column number for Component X position. in table record */
olong  DeltaXCol;
/** Column offset for Component Y position. in table record */
olong  DeltaYOff;
/** Physical column number for Component Y position. in table record */
olong  DeltaYCol;
/** Column offset for [OPTIONAL]Component Z position. in table record */
olong  DeltaZOff;
/** Physical column number for [OPTIONAL]Component Z position. in table record */
olong  DeltaZCol;
/** Column offset for [OPTIONAL] Component parameters; in table record */
olong  parmsOff;
/** Physical column number for [OPTIONAL] Component parameters; in table record */
olong  parmsCol;

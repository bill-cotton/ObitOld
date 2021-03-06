/* $Id:  $  */
/* DO NOT EDIT - file generated by ObitSDTables.pl                    */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2009                                              */
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
/*;         Internet email: bcotton@nrao.edu.                        */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitTableGBTPARDATA2  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableGBTPARDATA2Def.h
 * ObitTableGBTPARDATA2 structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** If true, configuration has not changed during scan */
gboolean  cfgvalid;
/** Column offset for MJD. in table record */
olong  DMJDOff;
/** Physical column number for MJD. in table record */
olong  DMJDCol;
/** Column offset for daccounts in table record */
olong  daccountsOff;
/** Physical column number for daccounts in table record */
olong  daccountsCol;
/** Column offset for saecounts in table record */
olong  saecountsOff;
/** Physical column number for saecounts in table record */
olong  saecountsCol;
/** Column offset for DigInput in table record */
olong  DigInputOff;
/** Physical column number for DigInput in table record */
olong  DigInputCol;

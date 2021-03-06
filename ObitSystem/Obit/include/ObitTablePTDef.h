/* $Id:  $   */
/* DO NOT EDIT - file generated by ObitTables.pl                      */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2016                                              */
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
/*  Define the basic components of the ObitTablePT  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTablePTDef.h
 * ObitTablePT structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** Revision number of the table definition. */
oint  revision;
/** The number of terms in model polynomial */
oint  numTerm;
/** Reference date as "YYYYMMDD" */
gchar  RefDate[MAXKEYCHARTABLEPT];
/** Column offset for The beginning time wrt RefDate in table record */
olong  TimeOff;
/** Physical column number for The beginning time wrt RefDate in table record */
olong  TimeCol;
/** Column offset for Interval over which pointing valid. in table record */
olong  TimeIOff;
/** Physical column number for Interval over which pointing valid. in table record */
olong  TimeICol;
/** Column offset for Antenna number in table record */
olong  antNoOff;
/** Physical column number for Antenna number in table record */
olong  antNoCol;
/** Column offset for The antenna was in tracking mode? in table record */
olong  pointingTrackingOff;
/** Physical column number for The antenna was in tracking mode? in table record */
olong  pointingTrackingCol;
/** Column offset for Use polynomials expansions? in table record */
olong  usePolynomialsOff;
/** Physical column number for Use polynomials expansions? in table record */
olong  usePolynomialsCol;
/** Column offset for The value used as origin in the polynomials expansions in table record */
olong  timeOriginOff;
/** Physical column number for The value used as origin in the polynomials expansions in table record */
olong  timeOriginCol;
/** Column offset for Refers to a collection of rows in PointingModelTable. in table record */
olong  pointingModelIdOff;
/** Physical column number for Refers to a collection of rows in PointingModelTable. in table record */
olong  pointingModelIdCol;
/** Column offset for [OPTIONAL] Pointing at elevations larger than 90 degrees (true) or lower (false). in table record */
olong  overTheTopOff;
/** Physical column number for [OPTIONAL] Pointing at elevations larger than 90 degrees (true) or lower (false). in table record */
olong  overTheTopCol;
/** Column offset for [OPTIONAL] The direction reference code associated to the source offset. in table record */
olong  SourceReferenceCodeOffsetOff;
/** Physical column number for [OPTIONAL] The direction reference code associated to the source offset. in table record */
olong  SourceReferenceCodeOffsetCol;
/** Column offset for [OPTIONAL] The equinox information (if needed by sourceReferenceCode). in table record */
olong  sourceEquinoxOffsetOff;
/** Physical column number for [OPTIONAL] The equinox information (if needed by sourceReferenceCode). in table record */
olong  sourceEquinoxOffsetCol;
/** Column offset for Encoder values in Az,El in table record */
olong  EncoderOff;
/** Physical column number for Encoder values in Az,El in table record */
olong  EncoderCol;
/** Column offset for The commanded pointing direction in Az,El per term in table record */
olong  PointingDirectionOff;
/** Physical column number for The commanded pointing direction in Az,El per term in table record */
olong  PointingDirectionCol;
/** Column offset for The direction of the field center in Az,El per term. in table record */
olong  targetOff;
/** Physical column number for The direction of the field center in Az,El per term. in table record */
olong  targetCol;
/** Column offset for The offset of the pointing direction at the time of the visibility in table record */
olong  offsetOff;
/** Physical column number for The offset of the pointing direction at the time of the visibility in table record */
olong  offsetCol;
/** Column offset for [OPTIONAL] Sources offset in Az,El per term of the polynomia). in table record */
olong  SourceOffsetOff;
/** Physical column number for [OPTIONAL] Sources offset in Az,El per term of the polynomia). in table record */
olong  SourceOffsetCol;
/** Column offset for [OPTIONAL] An array of start, end of interval which must be given explicitly i in table record */
olong  sampledTimeIntervalOff;
/** Physical column number for [OPTIONAL] An array of start, end of interval which must be given explicitly i in table record */
olong  sampledTimeIntervalCol;
/** Column offset for [OPTIONAL] This is the correction applied to the commanded position in Az,El to take in table record */
olong  AtmosphericCorrectionOff;
/** Physical column number for [OPTIONAL] This is the correction applied to the commanded position in Az,El to take in table record */
olong  AtmosphericCorrectionCol;

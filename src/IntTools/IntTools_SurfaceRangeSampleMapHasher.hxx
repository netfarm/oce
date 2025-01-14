// Created on: 2005-10-14
// Created by: Mikhail KLOKOV
// Copyright (c) 2005-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _IntTools_SurfaceRangeSampleMapHasher_HeaderFile
#define _IntTools_SurfaceRangeSampleMapHasher_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <IntTools_SurfaceRangeSample.hxx>
class IntTools_SurfaceRangeSample;



class IntTools_SurfaceRangeSampleMapHasher 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a HasCode value  for  the  Key <K>  in the
  //! range 0..Upper.
    static Standard_Integer HashCode (const IntTools_SurfaceRangeSample& K, const Standard_Integer Upper);
  
  //! Returns True  when the two  keys are the same. Two
  //! same  keys  must   have  the  same  hashcode,  the
  //! contrary is not necessary.
    static Standard_Boolean IsEqual (const IntTools_SurfaceRangeSample& S1, const IntTools_SurfaceRangeSample& S2);




protected:





private:





};


#include <IntTools_SurfaceRangeSampleMapHasher.lxx>





#endif // _IntTools_SurfaceRangeSampleMapHasher_HeaderFile

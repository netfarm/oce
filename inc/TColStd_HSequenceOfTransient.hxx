// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HSequenceOfTransient_HeaderFile
#define _TColStd_HSequenceOfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif

#ifndef _TColStd_SequenceOfTransient_HeaderFile
#include <TColStd_SequenceOfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Standard_Transient;
class TColStd_SequenceOfTransient;



class TColStd_HSequenceOfTransient : public MMgt_TShared {

public:

  
      TColStd_HSequenceOfTransient();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(Standard_Transient)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(TColStd_HSequenceOfTransient)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(Standard_Transient)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(TColStd_HSequenceOfTransient)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Standard_Transient)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfTransient)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Standard_Transient)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(TColStd_HSequenceOfTransient)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfTransient Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(Standard_Transient)& anItem) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_Standard_Transient& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const TColStd_SequenceOfTransient& Sequence() const;
  
        TColStd_SequenceOfTransient& ChangeSequence() ;
  
  Standard_EXPORT     Handle_TColStd_HSequenceOfTransient ShallowCopy() const;




  DEFINE_STANDARD_RTTI(TColStd_HSequenceOfTransient)

protected:




private: 


TColStd_SequenceOfTransient mySequence;


};

#define Item Handle_Standard_Transient
#define Item_hxx <Standard_Transient.hxx>
#define TheSequence TColStd_SequenceOfTransient
#define TheSequence_hxx <TColStd_SequenceOfTransient.hxx>
#define TCollection_HSequence TColStd_HSequenceOfTransient
#define TCollection_HSequence_hxx <TColStd_HSequenceOfTransient.hxx>
#define Handle_TCollection_HSequence Handle_TColStd_HSequenceOfTransient
#define TCollection_HSequence_Type_() TColStd_HSequenceOfTransient_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_TColStd_HSequenceOfTransient ShallowCopy(const Handle_TColStd_HSequenceOfTransient& me) {
 return me->ShallowCopy();
}



#endif
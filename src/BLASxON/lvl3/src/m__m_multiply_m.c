/*! /file m__m_multiply_m.c
 *
 */


#include "../inc/m__m_multiply_m.h"


#include "../../gnd/datatypes/inc/matrix.h"


#include "../../gnd/lvlZ/inc/array_zero.h"


//

void m__m_multiply_m(
  struct matrix * mRes,
  struct matrix * mOprA,
  struct matrix * mOprB
) {
  unsigned int R  = mRes->r;   // Number of columns that will be polulated in the resulting matrix, mRes
  unsigned int rc = mOprA->c;  // The inner dimension of the multiplication (Num of A's Columns & Num of B's Rows)
  unsigned int C  = mRes->c;   // Number of columns that will be polulated in the resulting matrix, mRes 


  float * mR = *(mRes->m );
  float * mA = *(mOprA->m);
  float * mB = *(mOprB->m);

  mmultm_favor_result_matrix(
    *(mRes->m ),
    *(mOprA->m),
    *(mOprB->m),
    mOprA->r,
    mOprA->c,
    mOprB->c,
    mRes-> l
  );


  return;
}

/*
  // Clear out matrix
  array_zero(mR, 0, mRes->l);


  if(R > C) {
    if(C > rc) {
      // Favor Res
      unsigned int L  = mRes->l;   // Total number of elements to be populated in mRes
    } else {
      // Favor Opr A
      unsigned int L  = mOprA->l;   // Total number of elements to be populated in mRes
    }
  } else {
    if(R > rc) {
      // Favor Res
      unsigned int L  = mRes->l;   // Total number of elements to be populated in mRes
    } else {
      // Favor Opr B
      unsigned int L  = mOprB->l;   // Total number of elements to be populated in mRes
    }
  }
*/


// These notes describe the naming scheme for the indexing variables and sizes of Matrix
// The reader should be able to see the variables and just know what they are,
//   but in case your really tired or just having one of those moments
//   I have explicilty noted what each variables is.
//
//
//  Shorthand notes:
//     R ~ RESULT MATRIX
//     A ~ 1st OPERAND MATRIX
//     B ~ 2nd OPERAND MATRIX
//     Num ~ "Number"
//     WRT ~ "With respect to the"
//
//
// ----- Size Variables -----
//
//  Re ~ Num of elements in Result Matrix
//  Ae ~ Num of elements in 1st Operand Matrix
//  Be ~ Num of elements in 2nd Operand Matrix
//
//  Rr ~ Num of Rows in Result Matrix
//  Ar ~ Num of Rows in 1st Operand Matrix
//  Br ~ Num of Rows in 2nd Operand Matrix
//
//  Rc ~ Num of Columns in Result Matrix
//  Ac ~ Num of Columns in 1st Operand Matrix
//  Bc ~ Num of Columns in 2nd Operand Matrix
//
//  AcBr ~ This is BOTH the AC and BR
//
//  notes:
//    In Matrix multiplication
//      1) The following variables must always have the same values (size)
//        ~ Rr = Ar
//        ~ Rc = Bc
//        ~ Ac = Br
//    
//      2) The following Relationships are always true
//        ~ 
//
//
// ----- Index Variables -----
//
// IRe ~ WRT the Num of Elements in mR, Index of  RESULT MATRIX      for  Element  that is being worked on
// IAe ~ WRT the Num of Elements in mA, Index of  1st OPERAND MATRIX for  Element  that is being worked on
// IBe ~ WRT the Num of Elements in mB, Index of  2nd OPERAND MATRIX for  Element  that is being worked on
//
// IRr ~ WRT the Num of Rows in mR,     Index of  RESULT MATRIX      for  Row      that is being worked on
// IAr ~ WRT the Num of Rows in mA,     Index of  1st OPERAND MATRIX for  Row      that is being worked on
// IBr ~ WRT the Num of Rows in mB,     Index of  2nd OPERAND MATRIX for  Row      that is being worked on
//
// IRc ~ WRT the Num of Columns in mR,  Index of  RESULT MATRIX      for  Column   that is being worked on
// IAc ~ WRT the Num of Columns in mA,  Index of  1st OPERAND MATRIX for  Column   that is being worked on
// IBc ~ WRT the Num of Columns in mB,  Index of  2nd OPERAND MATRIX for  Column   that is being worked on
//
//


inline void BLASxON__FuncHEAD mmultm_favor_result_matrix(
  float * mR,
  float * mA,
  float * mB,
  unsigned int Ar,
  unsigned int AcBr,
  unsigned int Bc,
  unsigned int Re
) {

  unsigned int IRe = 0;
  //unsigned int IRr = 0;
  //unsigned int IRc = 0;

  unsigned int IAe = 0;
  //unsigned int IAr = 0;
  //unsigned int IAc = 0;

  unsigned int IBe = 0;
  //unsigned int IBr = 0;
  //unsigned int IBc = 0;

  unsigned int IAinit = 0;
  unsigned int IBinit = 0;
  float Element_product = 0.0f;

  for(IRe=0; IRe<Re; ++IRe) {

    Element_product = 0.0f;

    IAinit = AcBr * (IRe / Bc);
    IBinit = IRe % Bc;

    for(IAe=IAinit, IBe=IBinit;  IAe<IAinit+AcBr;  ++IAe, IBe+=Bc) {
      Element_product += mA[IAe] * mB[IBe];
    }

    mR[IRe] = Element_product;
  }

  return;
}



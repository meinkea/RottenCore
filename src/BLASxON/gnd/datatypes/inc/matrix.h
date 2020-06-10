/*! /file matrix.h 
 * 
 * Data type for Matricies used in Linear Algebra
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */


#ifndef BLASxON_MATRIX_H
  #define BLASxON_MATRIX_H
  
  
  /*! General Matrix datastructure used by BLAS 
   */
  struct matrix {
    int flags;       //!< Flags for matrix
    unsigned int r;  //!< Number of Rows in matrix
    unsigned int c;  //!< Number of Columns in matrix
    unsigned int l;  //!< Number of elements in matrix (l=r*c)
    char * name;     //!< String identifier for matrix
    float ** m;      //!< Data pointer for matrix
  };
  
  
  //! Used to initilize matrix on call
  //! 
  extern struct matrix new_matrix;
  
  
#endif // BLASxON_MATRIX_H



/*! Data type for Vatricies used in Linear Algebra
 *
 *
 *
 */


#ifndef BLASxOFF_VECTOR_H
  #define BLASxOFF_VECTOR_H
 
  
  //! General Vector datastructure used by BLAS 
  //!
  struct vector {
    int flags;      //!< Flags for vector
    unsigned int l; //!< Number of elements in vector
    char * name;    //!< String identifier for vector
    float * v;      //!< Data pointer for vector
  };
  
  
  //! Used to initilize vector on call
  //! 
  extern struct vector new_vector;


#endif // BLASxOFF_VECTOR_H



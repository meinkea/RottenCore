/*! Easy Zero-initializer for when making a new matrix
 *
 */


#include <stddef.h>

#include "../inc/vector.h"


extern struct vector new_vector = {
  .flags = 0,
  .l = 0,
  .v = NULL
};



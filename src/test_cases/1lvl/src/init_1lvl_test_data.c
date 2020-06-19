#include "../inc/init_1lvl_test_data.h"
#include "../inc/1lvl_test_data.h"


void init_1lvl_test_arrays(
) {
  v__init(&v1, 3, "v0", MALLOC_CAP_8BIT);
  v__init(&v1, 3, "v1", MALLOC_CAP_8BIT);
  v__init(&v1, 3, "v2", MALLOC_CAP_8BIT);
  v__init(&v1, 3, "v3", MALLOC_CAP_8BIT);
  v__init(&v1, 3, "v4", MALLOC_CAP_8BIT);
  v__init(&v1, 3, "v5", MALLOC_CAP_8BIT);


  float data0 = { 0.0f,  0.0f,  0.0f};
  float data1 = { 1.0f,  2.0f,  3.0f};
  float data2 = { 5.0f,  4.0f,  3.0f};
  float data3 = {-1.5f, -1.5f,  4.2f};
  float data4 = {-7.1f,  3.6f,  1.8f};
  float data5 = { 2.3f,  1.2f,  1.2f};


  v__set(&v0, data0);
  v__set(&v1, data1);
  v__set(&v2, data2);
  v__set(&v3, data3);
  v__set(&v4, data4);
  v__set(&v5, data5);

  return;
}



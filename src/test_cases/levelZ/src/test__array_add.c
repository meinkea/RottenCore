#include "../../../BLASxON/gnd/lvlZ/inc/array_add.h"


#define CASES 5


int test__array_add(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_add...\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4};


  // Keys
  float key0[L] = {  -0.5f,   0.5f,   1.5f,   2.5f};
  float key1[L] = {   6.0f,   7.0f,   0.0f,   7.0f};
  float key2[L] = {  10.0f,   9.0f,   0.0f,   5.0f};
  float key3[L] = {  -9.5f,  14.5f,   0.5f,  -1.5f};
  float key4[L] = {  -3.0f,  20.0f,   5.0f,   2.0f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4};


  array_add(ans0, arr1, arr3, 0, L);
  array_add(ans1, arr1, arr2, 0, L);
  array_add(ans2, arr2, arr4, 0, L);
  array_add(ans3, arr5, arr3, 0, L);
  array_add(ans4, arr4, arr5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

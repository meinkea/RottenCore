#include "../../../BLASxON/gnd/lvlZ/inc/array_mscladd.h"


#define CASES 6


int test__array_mscladd(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_mscl..\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {     1.00000f,     2.00000f,    3.00000f,     4.00000f};
  float key1[L] = {     7.00000f,     8.00000f,    9.00000f,    10.00000f};
  float key2[L] = {   -22.50000f,   -22.50000f,   11.10000f,   -14.10000f};
  float key3[L] = {    -7.50000f,    16.50000f,    2.50000f,     0.50000f};
  float key4[L] = {   -16.06075f,   -11.64860f,   -7.23645f,    -2.82430f};
  float key5[L] = { -3317.00808f,  6649.01616f,  827.50202f,     3.00000f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_mscladd(ans0, arr0,    (1.0f/3.0f), arr1, 0, L);
  array_mscladd(ans1, arr1,           2.0f, arr4, 0, L);
  array_mscladd(ans2, arr2,          -4.2f, arr3, 0, L);
  array_mscladd(ans3, arr3, (-1.0f) * tmp1, arr5, 0, L);
  array_mscladd(ans4, arr4, LVLZ_TEST_VAR2, arr1, 0, L);
  array_mscladd(ans5, arr5,     415.25101f, arr2, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

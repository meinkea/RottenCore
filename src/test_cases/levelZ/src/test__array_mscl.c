#include "../../../BLASxON/gnd/lvlZ/inc/array_mscl.h"


#define CASES 6


int test__array_mscl(char * buf) {
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
  float key0[L] = {     0.00000f,     0.00000f,    0.00000f,     0.00000f};
  float key1[L] = {     2.00000f,     4.00000f,    6.00000f,     8.00000f};
  float key2[L] = {   -21.00000f,   -21.00000f,   12.60000f,   -12.60000f};
  float key3[L] = {     0.50000f,     0.50000f,    0.50000f,     0.50000f};
  float key4[L] = {   -17.06075f,   -13.64860f,  -10.23645f,    -6.82430f};
  float key5[L] = { -3322.00808f,  6644.01616f,  830.50202f,     0.00000f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_mscl(ans0, arr0,     (1.0f/3.0f), 0, L);
  array_mscl(ans1, arr1,            2.0f, 0, L);
  array_mscl(ans2, arr2,           -4.2f, 0, L);
  array_mscl(ans3, arr3,  (-1.0f) * tmp1, 0, L);
  array_mscl(ans4, arr4,  LVLZ_TEST_VAR2, 0, L);
  array_mscl(ans5, arr5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

#include "../../../BLASxON/gnd/lvlZ/inc/array_asum.h"


#define CASES 6


int test__array_asum(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_asum...\n"); // 21 chars
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
  float key0[L] = {      0.000f};
  float key1[L] = {     10.000f};
  float key2[L] = {     10.000f};
  float key3[L] = {     -6.000f};
  float key4[L] = {     14.000f};
  float key5[L] = {     10.000f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_asum(ans0, arr0, 0, L);
  array_asum(ans1, arr1, 0, L);
  array_asum(ans2, arr2, 0, L);
  array_asum(ans3, arr3, 0, L);
  array_asum(ans4, arr4, 0, L);
  array_asum(ans5, arr5, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

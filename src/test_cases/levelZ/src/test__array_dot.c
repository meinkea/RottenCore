#include "../../../BLASxON/gnd/lvlZ/inc/array_dot.h"


#define CASES 6


int test__array_dot(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_dot...\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;


  // Answers
  float ans0[1] = {0.0f};
  float ans1[1] = {0.0f};
  float ans2[1] = {0.0f};
  float ans3[1] = {0.0f};
  float ans4[1] = {0.0f};
  float ans5[1] = {0.0f};
  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[1] = {        0.0f};
  float key1[1] = {      -15.0f};
  float key2[1] = {       34.0f};
  float key3[1] = {       30.0f};
  float key4[1] = {       30.0f};
  float key5[1] = {      -21.0f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_dot(ans0, arr0, arr1, 0, L);
  array_dot(ans1, arr5, arr3, 0, L);
  array_dot(ans2, arr2, arr5, 0, L);
  array_dot(ans3, arr1, arr1, 0, L);
  array_dot(ans4, arr4, arr5, 0, L);
  array_dot(ans5, arr4, arr3, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

#include "../../../BLASxON/gnd/lvlZ/inc/array_zero.h"


#define CASES 6


int test__array_zero(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_zero...\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;


  // Answers
  float ans0[L] = { arr0[0], arr0[1], arr0[2], arr0[3]};
  float ans1[L] = { arr1[0], arr1[1], arr1[2], arr1[3]};
  float ans2[L] = { arr2[0], arr2[1], arr2[2], arr2[3]};
  float ans3[L] = { arr3[0], arr3[1], arr3[2], arr3[3]};
  float ans4[L] = { arr4[0], arr4[1], arr4[2], arr4[3]};
  float ans5[L] = { arr5[0], arr5[1], arr5[2], arr5[3]};
  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = {0.0f};
  float key1[L] = {0.0f};
  float key2[L] = {0.0f};
  float key3[L] = {0.0f};
  float key4[L] = {0.0f};
  float key5[L] = {0.0f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_zero(ans0, 0, L);
  array_zero(ans1, 0, L);
  array_zero(ans2, 0, L);
  array_zero(ans3, 0, L);
  array_zero(ans4, 0, L);
  array_zero(ans5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

#include "../../../BLASxON/gnd/lvlZ/inc/array_sub.h"


#define CASES 6


int test__array_sub(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_sub...\n"); // 21 chars
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


  // Keys
  float key0[L] = {  -1.0f,  -2.0f,  -3.0f,  -4.0f};
  float key1[L] = {   2.5f,   3.5f,   4.5f,   5.5f};
  float key2[L] = {   4.0f,   3.0f,  -6.0f,  -1.0f};
  float key3[L] = {   0.0f,   1.0f,  -6.0f,   1.0f};
  float key4[L] = {  -6.5f,  17.5f,   3.5f,   1.5f};
  float key5[L] = {  13.0f, -12.0f,   1.0f,   2.0f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_sub(ans0, arr0, arr1, 0, L);
  array_sub(ans1, arr1, arr3, 0, L);
  array_sub(ans2, arr2, arr1, 0, L);
  array_sub(ans3, arr2, arr4, 0, L);
  array_sub(ans4, arr5, arr3, 0, L);
  array_sub(ans5, arr4, arr5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

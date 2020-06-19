#include "../../../BLASxON/gnd/lvlZ/inc/array_ascl.h"


#define CASES 6


int test__array_ascl(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_ascl...\n"); // 21 chars
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
  float key0[L] = {   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f};
  float key1[L] = {        3.0f,        4.0f,        5.0f,        6.0f};
  float key2[L] = {        0.8f,        0.8f,       -7.2f,       -1.2f};
  float key3[L] = { -11.0f/6.0f, -11.0f/6.0f, -11.0f/6.0f, -11.0f/6.0f};
  float key4[L] = {    1.58785f,    0.58785f,   -0.41215f,   -1.41215f};
  float key5[L] = {  407.25101f,  431.25101f,  417.25101f,  415.25101f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_ascl(ans0, arr0,     (1.0f/3.0f), 0, L);
  array_ascl(ans1, arr1,            2.0f, 0, L);
  array_ascl(ans2, arr2,           -4.2f, 0, L);
  array_ascl(ans3, arr3,  (-1.0f) * tmp1, 0, L);
  array_ascl(ans4, arr4,  LVLZ_TEST_VAR2, 0, L);
  array_ascl(ans5, arr5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

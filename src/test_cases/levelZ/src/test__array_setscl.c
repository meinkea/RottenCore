#include "../../../BLASxON/gnd/lvlZ/inc/array_setscl.h"


#define CASES 6


int test__array_setscl(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_setscl..\n"); // 21 chars
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
  float key1[L] = {      2.000f,      2.000f,      2.000f,     2.0000f};
  float key2[L] = {     -4.200f,     -4.200f,     -4.200f,     -4.200f};
  float key3[L] = {  -1.0f/3.0f,  -1.0f/3.0f,  -1.0f/3.0f,  -1.0f/3.0f};
  float key4[L] = {   -3.41215f,   -3.41215f,   -3.41215f,   -3.41215f};
  float key5[L] = {  415.25101f,  415.25101f,  415.25101f,  415.25101f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_setscl(ans0,     (1.0f/3.0f), 0, L);
  array_setscl(ans1,            2.0f, 0, L);
  array_setscl(ans2,           -4.2f, 0, L);
  array_setscl(ans3,  (-1.0f) * tmp1, 0, L);
  array_setscl(ans4,  LVLZ_TEST_VAR2, 0, L);
  array_setscl(ans5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, CASES, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

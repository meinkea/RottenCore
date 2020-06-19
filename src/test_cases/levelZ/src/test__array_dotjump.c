#include "../../../BLASxON/gnd/lvlZ/inc/array_dotjump.h"


#define CASES 6


int test__array_dotjump(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_dotjump...\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;

  // Test Matrix
  float matrix[4][5] = {{ -1.555f,  3.509f, -2.051f,  0.000f,  1.000f},
                        { -1.900f,  2.718f,  0.051f,  0.000f,  0.000f},
                        { -1.660f,  3.214f,  2.081f,  0.000f,  5.000f},
                        { -1.555f,  4.872f, -4.051f,  0.000f,  2.000f}};


  // Answers
  float ans0[1] = {0.0f};
  float ans1[1] = {0.0f};
  float ans2[1] = {0.0f};
  float ans3[1] = {0.0f};
  float ans4[1] = {0.0f};
  float ans5[1] = {0.0f};
  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4, ans5};

  // Keys
  float key0[1] = {      0.000f};
  float key1[1] = {     38.075f};
  float key2[1] = {    -11.910f};
  float key3[1] = {      0.000f};
  float key4[1] = {     -4.000f};
  float key5[1] = {     21.386f};
  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5};


  array_dotjump(ans0, arr0, *matrix, 0, 0, L, 5);
  array_dotjump(ans1, arr1, *matrix, 0, 1, L, 5);
  array_dotjump(ans2, arr4, *matrix, 0, 2, L, 5);
  array_dotjump(ans3, arr3, *matrix, 0, 3, L, 5);
  array_dotjump(ans4, arr2, *matrix, 0, 4, L, 5);
  array_dotjump(ans5, arr5, *matrix, 0, 2, L, 5);


  needle = batchTest(buf, keyArr, ansArr, CASES, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

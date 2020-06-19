/*  For testing the Level Z array_add routine
 *
 *
 */


int test__array_add(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_add...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 5;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4};


  // Keys
  float key0[L] = {  -0.5f,   0.5f,   1.5f,   2.5f};
  float key1[L] = {   6.0f,   7.0f,   0.0f,   7.0f};
  float key2[L] = {  10.0f,   9.0f,   0.0f,   5.0f};
  float key3[L] = {  -9.5f,  14.5f,   0.5f,  -1.5f};
  float key4[L] = {  -3.0f,  20.0f,   5.0f,   2.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4};


  array_add(ans0, arr1, arr3, 0, L);
  array_add(ans1, arr1, arr2, 0, L);
  array_add(ans2, arr2, arr4, 0, L);
  array_add(ans3, arr5, arr3, 0, L);
  array_add(ans4, arr4, arr5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_ascl(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_ascl...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f};
  float key1[L] = {        3.0f,        4.0f,        5.0f,        6.0f};
  float key2[L] = {        0.8f,        0.8f,       -7.2f,       -1.2f};
  float key3[L] = { -11.0f/6.0f, -11.0f/6.0f, -11.0f/6.0f, -11.0f/6.0f};
  float key4[L] = {    1.58785f,    0.58785f,   -0.41215f,   -1.41215f};
  float key5[L] = {  407.25101f,  431.25101f,  417.25101f,  415.25101f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_ascl(ans0, arr0,     (1.0f/3.0f), 0, L);
  array_ascl(ans1, arr1,            2.0f, 0, L);
  array_ascl(ans2, arr2,           -4.2f, 0, L);
  array_ascl(ans3, arr3,  (-1.0f) * tmp1, 0, L);
  array_ascl(ans4, arr4,  LVLZ_TEST_VAR2, 0, L);
  array_ascl(ans5, arr5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_asum(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_asum...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {      0.000f};
  float key1[L] = {     10.000f};
  float key2[L] = {     10.000f};
  float key3[L] = {     -6.000f};
  float key4[L] = {     14.000f};
  float key5[L] = {     10.000f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_asum(ans0, arr0, 0, L);
  array_asum(ans1, arr1, 0, L);
  array_asum(ans2, arr2, 0, L);
  array_asum(ans3, arr3, 0, L);
  array_asum(ans4, arr4, 0, L);
  array_asum(ans5, arr5, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_copy(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_copy...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = { arr0[0], arr0[1], arr0[2], arr0[3]};
  float key1[L] = { arr1[0], arr1[1], arr1[2], arr1[3]};
  float key2[L] = { arr2[0], arr2[1], arr2[2], arr2[3]};
  float key3[L] = { arr3[0], arr3[1], arr3[2], arr3[3]};
  float key4[L] = { arr4[0], arr4[1], arr4[2], arr4[3]};
  float key5[L] = { arr5[0], arr5[1], arr5[2], arr5[3]};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_copy(ans0, arr0, 0, L);
  array_copy(ans1, arr1, 0, L);
  array_copy(ans2, arr2, 0, L);
  array_copy(ans3, arr3, 0, L);
  array_copy(ans4, arr4, 0, L);
  array_copy(ans5, arr5, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_dot(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_dot...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[1] = {0.0f};
  float ans1[1] = {0.0f};
  float ans2[1] = {0.0f};
  float ans3[1] = {0.0f};
  float ans4[1] = {0.0f};
  float ans5[1] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[1] = {        0.0f};
  float key1[1] = {      -15.0f};
  float key2[1] = {       34.0f};
  float key3[1] = {       30.0f};
  float key4[1] = {       30.0f};
  float key5[1] = {      -21.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_dot(ans0, arr0, arr1, 0, L);
  array_dot(ans1, arr5, arr3, 0, L);
  array_dot(ans2, arr2, arr5, 0, L);
  array_dot(ans3, arr1, arr1, 0, L);
  array_dot(ans4, arr4, arr5, 0, L);
  array_dot(ans5, arr4, arr3, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_dotjump(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_dotjump...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
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
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  // Keys
  float key0[1] = {      0.000f};
  float key1[1] = {     38.075f};
  float key2[1] = {    -11.910f};
  float key3[1] = {      0.000f};
  float key4[1] = {     -4.000f};
  float key5[1] = {     21.386f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_dotjump(ans0, arr0, *matrix, 0, 0, L, 5);
  array_dotjump(ans1, arr1, *matrix, 0, 1, L, 5);
  array_dotjump(ans2, arr4, *matrix, 0, 2, L, 5);
  array_dotjump(ans3, arr3, *matrix, 0, 3, L, 5);
  array_dotjump(ans4, arr2, *matrix, 0, 4, L, 5);
  array_dotjump(ans5, arr5, *matrix, 0, 2, L, 5);


  needle = batchTest(buf, keyArr, ansArr, cases, 1, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_mscl(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_mscl..\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {     0.00000f,     0.00000f,    0.00000f,     0.00000f};
  float key1[L] = {     2.00000f,     4.00000f,    6.00000f,     8.00000f};
  float key2[L] = {   -21.00000f,   -21.00000f,   12.60000f,   -12.60000f};
  float key3[L] = {     0.50000f,     0.50000f,    0.50000f,     0.50000f};
  float key4[L] = {   -17.06075f,   -13.64860f,  -10.23645f,    -6.82430f};
  float key5[L] = { -3322.00808f,  6644.01616f,  830.50202f,     0.00000f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_mscl(ans0, arr0,     (1.0f/3.0f), 0, L);
  array_mscl(ans1, arr1,            2.0f, 0, L);
  array_mscl(ans2, arr2,           -4.2f, 0, L);
  array_mscl(ans3, arr3,  (-1.0f) * tmp1, 0, L);
  array_mscl(ans4, arr4,  LVLZ_TEST_VAR2, 0, L);
  array_mscl(ans5, arr5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_mscladd(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_mscl..\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {     1.00000f,     2.00000f,    3.00000f,     4.00000f};
  float key1[L] = {     7.00000f,     8.00000f,    9.00000f,    10.00000f};
  float key2[L] = {   -22.50000f,   -22.50000f,   11.10000f,   -14.10000f};
  float key3[L] = {    -7.50000f,    16.50000f,    2.50000f,     0.50000f};
  float key4[L] = {   -16.06075f,   -11.64860f,   -7.23645f,    -2.82430f};
  float key5[L] = { -3317.00808f,  6649.01616f,  827.50202f,     3.00000f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_mscladd(ans0, arr0,    (1.0f/3.0f), arr1, 0, L);
  array_mscladd(ans1, arr1,           2.0f, arr4, 0, L);
  array_mscladd(ans2, arr2,          -4.2f, arr3, 0, L);
  array_mscladd(ans3, arr3, (-1.0f) * tmp1, arr5, 0, L);
  array_mscladd(ans4, arr4, LVLZ_TEST_VAR2, arr1, 0, L);
  array_mscladd(ans5, arr5,     415.25101f, arr2, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_mult(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_mult...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = {   0.0f,   0.0f,   0.0f,   0.0f};
  float key1[L] = {  -1.5f,  -3.0f,  -4.5f,  -6.0f};
  float key2[L] = {   5.0f,  10.0f,  -9.0f,  12.0f};
  float key3[L] = {  25.0f,  20.0f,  -9.0f,   6.0f};
  float key4[L] = {  12.0f, -24.0f,  -3.0f,   0.0f};
  float key5[L] = { -40.0f,  64.0f,   6.0f,   0.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_mult(ans0, arr0, arr1, 0, L);
  array_mult(ans1, arr1, arr3, 0, L);
  array_mult(ans2, arr2, arr1, 0, L);
  array_mult(ans3, arr2, arr4, 0, L);
  array_mult(ans4, arr5, arr3, 0, L);
  array_mult(ans5, arr4, arr5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_setscl(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_setscl..\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f,   1.0f/3.0f};
  float key1[L] = {      2.000f,      2.000f,      2.000f,     2.0000f};
  float key2[L] = {     -4.200f,     -4.200f,     -4.200f,     -4.200f};
  float key3[L] = {  -1.0f/3.0f,  -1.0f/3.0f,  -1.0f/3.0f,  -1.0f/3.0f};
  float key4[L] = {   -3.41215f,   -3.41215f,   -3.41215f,   -3.41215f};
  float key5[L] = {  415.25101f,  415.25101f,  415.25101f,  415.25101f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_setscl(ans0,     (1.0f/3.0f), 0, L);
  array_setscl(ans1,            2.0f, 0, L);
  array_setscl(ans2,           -4.2f, 0, L);
  array_setscl(ans3,  (-1.0f) * tmp1, 0, L);
  array_setscl(ans4,  LVLZ_TEST_VAR2, 0, L);
  array_setscl(ans5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array_sub(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_sub...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = {  -1.0f,  -2.0f,  -3.0f,  -4.0f};
  float key1[L] = {   2.5f,   3.5f,   4.5f,   5.5f};
  float key2[L] = {   4.0f,   3.0f,  -6.0f,  -1.0f};
  float key3[L] = {   0.0f,   1.0f,  -6.0f,   1.0f};
  float key4[L] = {  -6.5f,  17.5f,   3.5f,   1.5f};
  float key5[L] = {  13.0f, -12.0f,   1.0f,   2.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_sub(ans0, arr0, arr1, 0, L);
  array_sub(ans1, arr1, arr3, 0, L);
  array_sub(ans2, arr2, arr1, 0, L);
  array_sub(ans3, arr2, arr4, 0, L);
  array_sub(ans4, arr5, arr3, 0, L);
  array_sub(ans5, arr4, arr5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_swap(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_mscl..\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {arr0[0], arr0[1], arr0[2], arr0[3]};
  float ans1[L] = {arr1[0], arr1[1], arr1[2], arr1[3]};
  float ans2[L] = {arr2[0], arr2[1], arr2[2], arr2[3]};
  float ans3[L] = {arr3[0], arr3[1], arr3[2], arr3[3]};
  float ans4[L] = {arr4[0], arr4[1], arr4[2], arr4[3]};
  float ans5[L] = {arr5[0], arr5[1], arr5[2], arr5[3]};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = {arr1[0], arr1[1], arr1[2], arr1[3]};
  float key1[L] = {arr0[0], arr0[1], arr0[2], arr0[3]};
  float key2[L] = {arr3[0], arr3[1], arr3[2], arr3[3]};
  float key3[L] = {arr2[0], arr2[1], arr2[2], arr2[3]};
  float key4[L] = {arr5[0], arr5[1], arr5[2], arr5[3]};
  float key5[L] = {arr4[0], arr4[1], arr4[2], arr4[3]};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_swap(ans0, ans1, 0, L);
  array_swap(ans3, ans2, 0, L);
  array_swap(ans4, ans5, 0, L);

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail
}




int test__array_zero(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_zero...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = { arr0[0], arr0[1], arr0[2], arr0[3]};
  float ans1[L] = { arr1[0], arr1[1], arr1[2], arr1[3]};
  float ans2[L] = { arr2[0], arr2[1], arr2[2], arr2[3]};
  float ans3[L] = { arr3[0], arr3[1], arr3[2], arr3[3]};
  float ans4[L] = { arr4[0], arr4[1], arr4[2], arr4[3]};
  float ans5[L] = { arr5[0], arr5[1], arr5[2], arr5[3]};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};


  // Keys
  float key0[L] = {0.0f};
  float key1[L] = {0.0f};
  float key2[L] = {0.0f};
  float key3[L] = {0.0f};
  float key4[L] = {0.0f};
  float key5[L] = {0.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  array_zero(ans0, 0, L);
  array_zero(ans1, 0, L);
  array_zero(ans2, 0, L);
  array_zero(ans3, 0, L);
  array_zero(ans4, 0, L);
  array_zero(ans5, 0, L);


  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}




int test__array(char * buf) {
  int needle = 0;

  needle = sprintf(buf, "Testing array_...\n"); // 21 chars
  buf += needle;

  unsigned int cases = 6;
  unsigned int pass = 0;


  // Answers
  float ans0[L] = {0.0f};
  float ans1[L] = {0.0f};
  float ans2[L] = {0.0f};
  float ans3[L] = {0.0f};
  float ans4[L] = {0.0f};
  float ans5[L] = {0.0f};
  float * ansArr[cases] = {ans0, ans1, ans2, ans3, ans4, ans5};

  float const tmp1 = 1.0f/3.0f;
  #define LVLZ_TEST_VAR2 -3.41215

  // Keys
  float key0[L] = {0.0f};
  float key1[L] = {0.0f};
  float key2[L] = {0.0f};
  float key3[L] = {0.0f};
  float key4[L] = {0.0f};
  float key5[L] = {0.0f};
  float * keyArr[cases] = {key0, key1, key2, key3, key4, key5};


  //array_(ans0, arr0,     (1.0f/3.0f), 0, L);
  //array_(ans1, arr1,            2.0f, 0, L);
  //array_(ans2, arr2,           -4.2f, 0, L);
  //array_(ans3, arr3,  (-1.0f) * tmp1, 0, L);
  //array_(ans4, arr4,  LVLZ_TEST_VAR2, 0, L);
  //array_(ans5, arr5,      415.25101f, 0, L);

  #undef LVLZ_TEST_VAR2

  needle = batchTest(buf, keyArr, ansArr, cases, L, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, cases);

  return ( (pass==cases) ? 1 : 0); // returns 1 if pass or 0 on fail


}



/*
 *   14 chars for "    case %3lu :: "
 *    6 chars for " FAIL\n" or " pass\n"
 *
 *   13 chars for "      Ans -- " or "      Key -- "
 *   10 chars for the 1st number
 *   12 chars for sequential numbers
 *    1 char  for new line character "\n"
 *  120 chars for 4 numbers
 *
 */



#include "../../../BLASxON/gnd/lvlZ/inc/array_emax.h"


#define CASES 12


int test__array_emax(char * buf) {
  #include "../inc/lvlz_test_arrays.h"


  int needle = 0;

  needle = sprintf(buf, "Testing array_emax...\n"); // 21 chars
  buf += needle;

  unsigned int pass = 0;


  // Test Matrix
  float matrix[5*6] = { -1.555f,  3.509f, -2.051f,  0.000f,  1.000f,  1.000f,
                         1.900f,  2.718f,  9.051f,  2.000f,  0.000f,  0.000f,
                         1.660f,  3.214f,  2.081f,  0.000f,  5.000f,  5.000f,
                        -2.555f,  4.872f, -4.051f,  0.000f,  2.000f,  2.000f,
                        -1.555f,  7.872f, -4.051f,  0.000f,  2.000f,  2.000f};


  // Answers
  unsigned int ansInt0[5]  = {4, 4, 4, 4, 4};
  unsigned int ansInt1[5]  = {3, 3, 3, 3, 3};
  unsigned int ansInt2[5]  = {3, 3, 3, 3, 3};
  unsigned int ansInt3[5]  = {1, 1, 1, 1, 1};
  unsigned int ansInt4[5]  = {4, 4, 4, 4, 4};
  unsigned int ansInt5[5]  = {4, 4, 4, 4, 4};

  unsigned int ansInt6[5]  = {4, 4, 4, 4, 4};
  unsigned int ansInt7[5]  = {4, 4, 4, 0, 4};
  unsigned int ansInt8[5]  = {4, 4, 4, 0, 1};
  unsigned int ansInt9[5]  = {4, 2, 4, 0, 1}; // no change case
  unsigned int ansInt10[5] = {4, 2, 4, 0, 1};
  unsigned int ansInt11[5] = {4, 2, 3, 0, 1};


  // Keys
  float key0[5]  = {4.0f, 4.0f, 4.0f, 0.0f, 4.0f};
  float key1[5]  = {3.0f, 3.0f, 3.0f, 0.0f, 3.0f};
  float key2[5]  = {3.0f, 3.0f, 2.0f, 3.0f, 3.0f};
  float key3[5]  = {1.0f, 0.0f, 1.0f, 1.0f, 1.0f};
  float key4[5]  = {4.0f, 4.0f, 4.0f, 4.0f, 4.0f}; // start and ends on last row
  float key5[5]  = {4.0f, 4.0f, 4.0f, 3.0f, 4.0f};
  
  float key6[5]  = {4.0f, 4.0f, 4.0f, 0.0f, 4.0f};
  float key7[5]  = {4.0f, 4.0f, 4.0f, 0.0f, 1.0f};
  float key8[5]  = {4.0f, 2.0f, 4.0f, 0.0f, 1.0f};
  float key9[5]  = {3.0f, 2.0f, 4.0f, 0.0f, 1.0f}; // no change case
  float key10[5] = {4.0f, 2.0f, 3.0f, 5.0f, 4.0f};
  float key11[5] = {4.0f, 4.0f, 4.0f, 4.0f, 4.0f};

  float * keyArr[CASES] = {key0, key1, key2, key3, key4, key5,
                           key6, key7, key8, key9, key10, key11};


  array_emax( ansInt0, matrix  +0, 0, 5, 6);
  array_emax( ansInt1, matrix  +1, 0, 4, 6);
  array_emax( ansInt2, matrix  +2, 2, 4, 6);
  array_emax( ansInt3, matrix  +3, 0, 2, 6);
  array_emax( ansInt4, matrix  +4, 4, 5, 6);
  array_emax( ansInt5, matrix  +5, 3, 5, 6);

  array_emax( ansInt6, matrix +0, 0, 5, 6);
  array_emax( ansInt7, matrix +1, 1, 5, 6);
  array_emax( ansInt8, matrix +2, 2, 5, 6);
  array_emax( ansInt9, matrix +3, 3, 5, 6);
  array_emax(ansInt10, matrix +4, 4, 5, 6);
  array_emax(ansInt11, matrix +5, 3, 5, 6);



  float ans0[5]  = { ansInt0[0],  ansInt0[1],  ansInt0[2],  ansInt0[3],  ansInt0[4]};
  float ans1[5]  = { ansInt1[0],  ansInt1[1],  ansInt1[2],  ansInt1[3],  ansInt1[4]};
  float ans2[5]  = { ansInt2[0],  ansInt2[1],  ansInt2[2],  ansInt2[3],  ansInt2[4]};
  float ans3[5]  = { ansInt3[0],  ansInt3[1],  ansInt3[2],  ansInt3[3],  ansInt3[4]};
  float ans4[5]  = { ansInt4[0],  ansInt4[1],  ansInt4[2],  ansInt4[3],  ansInt4[4]};
  float ans5[5]  = { ansInt5[0],  ansInt5[1],  ansInt5[2],  ansInt5[3],  ansInt5[4]};

  float ans6[5]  = { ansInt6[0],  ansInt6[1],  ansInt6[2],  ansInt6[3],  ansInt6[4]};
  float ans7[5]  = { ansInt7[0],  ansInt7[1],  ansInt7[2],  ansInt7[3],  ansInt7[4]};
  float ans8[5]  = { ansInt8[0],  ansInt8[1],  ansInt8[2],  ansInt8[3],  ansInt8[4]};
  float ans9[5]  = { ansInt9[0],  ansInt9[1],  ansInt9[2],  ansInt9[3],  ansInt9[4]};
  float ans10[5] = {ansInt10[0], ansInt10[1], ansInt10[2], ansInt10[3], ansInt10[4]};
  float ans11[5] = {ansInt11[0], ansInt11[1], ansInt11[2], ansInt11[3], ansInt11[4]};

  float * ansArr[CASES] = {ans0, ans1, ans2, ans3, ans4, ans5,
                           ans6, ans7, ans8, ans9, ans10, ans11};


  needle = batchTest(buf, keyArr, ansArr, CASES, 5, &pass);
  buf += needle;

  sprintf(buf, "   Passed %3lu/%3lu cases\n", pass, CASES);

  return ( (pass==CASES) ? 1 : 0); // returns 1 if pass or 0 on fail
}

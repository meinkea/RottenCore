#include "RottenCore.h"


#define BUF_SIZE 4000


void setup() {
  Serial.begin(115200); Serial.println("\n\n");

  int test_pf[20];
  for(unsigned int I=0; I<20; ++I) {
    test_pf[I] = 2;
  }

  // Create Matrix             ,    Initialize Matrix
  struct matrix mR0 = new_matrix; m__init(&mR0, 3, 3, "Result 0", MALLOC_CAP_8BIT);
  struct matrix mR1 = new_matrix; m__init(&mR1, 3, 3, "Result 1", MALLOC_CAP_8BIT);
  struct matrix mR2 = new_matrix; m__init(&mR2, 6, 6, "Result 2", MALLOC_CAP_8BIT);

  struct matrix m0 = new_matrix; m__init(&m0, 3, 3, "Work 0", MALLOC_CAP_8BIT);
  struct matrix m1 = new_matrix; m__init(&m1, 3, 3, "Work 1", MALLOC_CAP_8BIT);
  struct matrix m2 = new_matrix; m__init(&m2, 3, 3, "Work 2", MALLOC_CAP_8BIT);
  struct matrix m3 = new_matrix; m__init(&m3, 3, 3, "Work 3", MALLOC_CAP_8BIT);
  struct matrix m4 = new_matrix; m__init(&m4, 6, 6, "Work 4", MALLOC_CAP_8BIT);
  struct matrix m5 = new_matrix; m__init(&m5, 6, 6, "Work 5", MALLOC_CAP_8BIT);


  char * smR0 = NULL; mstringf_init_buffer(&smR0, &mR0);
  char * smR1 = NULL; mstringf_init_buffer(&smR1, &mR1);
  char * smR2 = NULL; mstringf_init_buffer(&smR2, &mR2);

  char * sm0 = NULL; mstringf_init_buffer(&sm0, &m0);
  char * sm1 = NULL; mstringf_init_buffer(&sm1, &m1);
  char * sm2 = NULL; mstringf_init_buffer(&sm2, &m2);
  char * sm3 = NULL; mstringf_init_buffer(&sm3, &m3);
  char * sm4 = NULL; mstringf_init_buffer(&sm4, &m4);
  char * sm5 = NULL; mstringf_init_buffer(&sm5, &m5);



  Serial.println(" -- -- -- BEGINING TEST of LinAlg -- -- -- \n");

  float dm0[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float dm1[3*3] = {  6.0f, -2.0f,  3.0f,
                      4.0f, 11.0f, -6.0f,
                      7.0f, -8.0f,  9.0f};

  float dm2[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float dm3[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float dm4[6*6] = { -13.0f,   2.9f,   3.3f,   0.0f,   0.5f,  13.3f,
                       4.1f,  12.1f,   6.4f,   4.8f,  90.5f,  -9.0f,
                       4.3f,   5.2f,   6.0f,   0.0f,   0.2f,   0.6f,
                       4.3f,  -2.6f,  -2.3f,   4.9f,  23.0f,   0.6f,
                       4.7f,   5.4f,   6.3f,   0.0f, -29.5f,  94.0f,
                       8.3f,   8.4f,   9.0f,  -2.0f,   8.1f,  86.0f};

  float dm5[6*6] = {   1.0f,   2.0f,   3.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       7.0f,   8.0f,   9.0f,   0.0f,   0.0f,   0.0f};

  m__set(&m0, dm0);
  m__set(&m1, dm1);
  m__set(&m2, dm2);
  m__set(&m3, dm3);
  m__set(&m4, dm4);
  m__set(&m5, dm5);


  Serial.print(mstringf(sm0, &m0));
  Serial.print(mstringf(sm1, &m1));
  Serial.print(mstringf(sm2, &m2));
  Serial.print(mstringf(sm3, &m3));
  Serial.print(mstringf(sm4, &m4));
  Serial.print(mstringf(sm5, &m5));


  


}



void loop() {

}

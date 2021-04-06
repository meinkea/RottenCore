#include "RottenCore.h"


#define BUF_SIZE 4000


void setup() {
  Serial.begin(115200); Serial.println("\n\n");

  int test_pf[20];
  for(unsigned int I=0; I<20; ++I) {
    test_pf[I] = 2;
  }


  // Create Matrix              ; Initialize Vector
  struct vector vR0 = new_vector; v__init(&vR0, 3, "Result Vector 0", MALLOC_CAP_8BIT);
  
  struct vector v0 = new_vector;  v__init(&v0, 3, "Vector 0", MALLOC_CAP_8BIT);
  struct vector v1 = new_vector;  v__init(&v1, 3, "Vector 1", MALLOC_CAP_8BIT);
  
  struct vector vW0 = new_vector; v__init(&vW0, 3, "Work Vector 0", MALLOC_CAP_8BIT);
  
  
  char *svR0 = NULL; vstringf_init_buffer(&svR0, &vR0);
  
  char *sv0 = NULL; vstringf_init_buffer(&sv0, &v0);
  char *sv1 = NULL; vstringf_init_buffer(&sv1, &v1);
  
  char *svW0 = NULL; vstringf_init_buffer(&svW0, &vW0);


  // Create Matrix              ; Initialize Matrix
  struct matrix mR0 = new_matrix; m__init(&mR0, 3, 3, "Result Matrix 0", MALLOC_CAP_8BIT);
  struct matrix mR1 = new_matrix; m__init(&mR1, 3, 3, "Result Matrix 1", MALLOC_CAP_8BIT);
  struct matrix mR2 = new_matrix; m__init(&mR2, 6, 6, "Result Matrix 2", MALLOC_CAP_8BIT);
  
  struct matrix m0 = new_matrix;  m__init(&m0, 3, 3, "Matrix 0", MALLOC_CAP_8BIT);
  struct matrix m1 = new_matrix;  m__init(&m1, 3, 3, "Matrix 1", MALLOC_CAP_8BIT);
  struct matrix m2 = new_matrix;  m__init(&m2, 3, 3, "Matrix 2", MALLOC_CAP_8BIT);
  struct matrix m3 = new_matrix;  m__init(&m3, 3, 3, "Matrix 3", MALLOC_CAP_8BIT);
  struct matrix m4 = new_matrix;  m__init(&m4, 6, 6, "Matrix 4", MALLOC_CAP_8BIT);
  struct matrix m5 = new_matrix;  m__init(&m5, 6, 6, "Matrix 5", MALLOC_CAP_8BIT);
  
  struct matrix mW0 = new_matrix;  m__init(&mW0, 3, 3, "Work Matrix 0", MALLOC_CAP_8BIT);
  struct matrix mW1 = new_matrix;  m__init(&mW1, 3, 3, "Work Matrix 1", MALLOC_CAP_8BIT);
  
  
  char * smR0 = NULL; mstringf_init_buffer(&smR0, &mR0);
  char * smR1 = NULL; mstringf_init_buffer(&smR1, &mR1);
  char * smR2 = NULL; mstringf_init_buffer(&smR2, &mR2);
  
  char * sm0 = NULL; mstringf_init_buffer(&sm0, &m0);
  char * sm1 = NULL; mstringf_init_buffer(&sm1, &m1);
  char * sm2 = NULL; mstringf_init_buffer(&sm2, &m2);
  char * sm3 = NULL; mstringf_init_buffer(&sm3, &m3);
  char * sm4 = NULL; mstringf_init_buffer(&sm4, &m4);
  char * sm5 = NULL; mstringf_init_buffer(&sm5, &m5);
  
  char * smW0 = NULL; mstringf_init_buffer(&smW0, &m0);
  char * smW1 = NULL; mstringf_init_buffer(&smW1, &m1);



  Serial.println(" -- -- -- BEGINING TEST of LinAlg -- -- -- \n");

  float V0[3] = {2.0, -4.5, 3.0};

  float MRES[3*3] = {0.0f, 0.0f, 0.0f,
                     0.0f, 0.0f, 0.0f,
                     0.0f, 0.0f, 0.0f};
                     

  float I[3*3] = { 1.0f, 0.0f, 0.0f,
                   0.0f, 1.0f, 0.0f,
                   0.0f, 0.0f, 1.0f};


  float TM0[3*3] = { 9.0f, 1.0f, 4.0f,
                     1.0f, 8.0f, 2.0f,
                     1.0f, 3.0f, 7.0f};


  float DM0[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float DM1[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float DM2[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float DM3[3*3] = {  1.0f,  2.0f,  3.0f,
                      4.0f,  5.0f,  6.0f,
                      7.0f,  8.0f,  9.0f};

  float DM4[6*6] = { -13.0f,   2.9f,   3.3f,   0.0f,   0.5f,  13.3f,
                       4.1f,  12.1f,   6.4f,   4.8f,  90.5f,  -9.0f,
                       4.3f,   5.2f,   6.0f,   0.0f,   0.2f,   0.6f,
                       4.3f,  -2.6f,  -2.3f,   4.9f,  23.0f,   0.6f,
                       4.7f,   5.4f,   6.3f,   0.0f, -29.5f,  94.0f,
                       8.3f,   8.4f,   9.0f,  -2.0f,   8.1f,  86.0f};

  float DM5[6*6] = {   1.0f,   2.0f,   3.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       4.0f,   5.0f,   6.0f,   0.0f,   0.0f,   0.0f,
                       7.0f,   8.0f,   9.0f,   0.0f,   0.0f,   0.0f};

  v__set(&v0, V0);

  m__set(&mR0, MRES);
  m__set(&mR1, MRES);
  m__set(&mR2, MRES);

  m__set(&m0, TM0);
  m__set(&m1, DM1);
  m__set(&m2, DM2);
  m__set(&m3, DM3);
  m__set(&m4, DM4);
  m__set(&m5, DM5);



  Serial.println(mstringf(sm0, &m0));
  Serial.println(mstringf(sm1, &m1));
  Serial.println(mstringf(sm2, &m2));
  Serial.println(mstringf(sm3, &m3));
  Serial.println(mstringf(sm4, &m4));
  Serial.println(mstringf(sm5, &m5));



  delay(1000);
  m__zero(&mW0);

 Serial.println(" ----- m__RREF -----");

  Serial.println("Before:"); Serial.println(mstringf(sm0, &m0));
  m__RREF(&vR0, &mR0, &v0, &m0);
  Serial.println("After:");  Serial.println(mstringf(sm0, &m0));
  Serial.println("Result:"); Serial.println(mstringf(smR0, &mR0));
  Serial.println("V Res:");  Serial.println(vstringf(svR0, &vR0));


 Serial.println(" ----- m__Invert -----");

  delay(1000);

  Serial.println("Before:"); Serial.println(mstringf(sm0, &m0));
  m__Invert(&mR0, &m0, &mW0);
  Serial.println("After:");  Serial.println(mstringf(sm0, &m0));
  Serial.println("Result:"); Serial.println(mstringf(smR0, &mR0));
  Serial.println("m Work:"); Serial.println(mstringf(sm3, &m3));


 Serial.println(" ----- m__LUdecomp -----");

  delay(1000);

  Serial.println("Before:"); Serial.println(mstringf(sm1, &m1));
  m__LUdecomp(&mR1, &m1, &mW1);
  Serial.println("After:");  Serial.println(mstringf(sm1, &m1));
  Serial.println("Result:"); Serial.println(mstringf(smR1, &mR1));
  Serial.println("m Work:"); Serial.println(mstringf(smW1, &mW1));


}



void loop() {

}



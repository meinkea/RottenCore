#include "RottenCore.h"


#define BUF_SIZE 4000


void setup() {
  Serial.begin(115200);  Serial.println("\n\n");
  
  int test_pf[20];
  for(unsigned int I=0; I<20; ++I) {
    test_pf[I] = 2;
  }


  char buf[BUF_SIZE+1];


  Serial.println(" -- -- -- BEGINING TEST of LEVEL Z -- -- -- \n");
  test_pf[ 0] = test__array_add(buf);      Serial.println(buf);
  test_pf[ 1] = test__array_ascl(buf);     Serial.println(buf);
  test_pf[ 2] = test__array_asum(buf);     Serial.println(buf);
  test_pf[ 3] = test__array_copy(buf);     Serial.println(buf);
  test_pf[ 4] = test__array_dot(buf);      Serial.println(buf);
  test_pf[ 5] = test__array_dotjump(buf);  Serial.println(buf);
  test_pf[ 6] = test__array_emax(buf);     Serial.println(buf);
  test_pf[ 7] = test__array_mscl(buf);     Serial.println(buf);
  test_pf[ 8] = test__array_mscladd(buf);  Serial.println(buf);
  test_pf[ 9] = test__array_mult(buf);     Serial.println(buf);
  test_pf[10] = test__array_setscl(buf);   Serial.println(buf);
  test_pf[11] = test__array_sub(buf);      Serial.println(buf);
  test_pf[12] = test__array_swap(buf);     Serial.println(buf);
  test_pf[13] = test__array_zero(buf);     Serial.println(buf);


  Serial.println("-- Summary of results");
  Serial.print("    array_add     -- "); printPassFail(buf, test_pf[ 0]); Serial.println(buf);
  Serial.print("    array_ascl    -- "); printPassFail(buf, test_pf[ 1]); Serial.println(buf);
  Serial.print("    array_asum    -- "); printPassFail(buf, test_pf[ 2]); Serial.println(buf);
  Serial.print("    array_copy    -- "); printPassFail(buf, test_pf[ 3]); Serial.println(buf);
  Serial.print("    array_dot     -- "); printPassFail(buf, test_pf[ 4]); Serial.println(buf);
  Serial.print("    array_dotjump -- "); printPassFail(buf, test_pf[ 5]); Serial.println(buf);
  Serial.print("    array_emax    -- "); printPassFail(buf, test_pf[ 6]); Serial.println(buf);
  Serial.print("    array_mscl    -- "); printPassFail(buf, test_pf[ 7]); Serial.println(buf);
  Serial.print("    array_mscladd -- "); printPassFail(buf, test_pf[ 8]); Serial.println(buf);
  Serial.print("    array_mult    -- "); printPassFail(buf, test_pf[ 9]); Serial.println(buf);
  Serial.print("    array_setscl  -- "); printPassFail(buf, test_pf[10]); Serial.println(buf);
  Serial.print("    array_sub     -- "); printPassFail(buf, test_pf[11]); Serial.println(buf);
  Serial.print("    array_swap    -- "); printPassFail(buf, test_pf[12]); Serial.println(buf);
  Serial.print("    array_zero    -- "); printPassFail(buf, test_pf[13]); Serial.println(buf);


}




void loop() {


}



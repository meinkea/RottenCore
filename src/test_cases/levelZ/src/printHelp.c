#define INIT_ELE_CHAR_LEN 10
#define SEQ_ELE_CHAR_LEN 12
#define BLASxON__NOT_TESTED 2



#include "../../../BLASxON/gnd/lvlZ/inc/array_compare.h"


/* Formats a buffer for printing a given array of length 'len'
 *   Sample,
 *     "-  10.5800, -   1.0000, 1243.5678,   0.0000\n"
 *
 *  TODO :: This should be handled by BLASxON string functions
 *          The functions should be merged with those
 */
int printArray(char * buf, float * arr, unsigned int len) {
  int needle = 0;
  int ret = 0;

  needle = sprintf(buf, "%10.4f", arr[0]);
  if(needle < 0) {
    return needle; // 10 chars
  } else {
    ret += needle;
    buf += needle;
  }

  for(unsigned int I=1; I<len; ++I) {
    needle = sprintf(buf, ", %10.4f", arr[I]);
    if(needle < 0) {
      return needle; // 12*len chars
    } else {
      ret += needle;
      buf += needle;
    }
  }

  needle = sprintf(buf, "\n"); // 1 char
  if(needle < 0) {
    return needle;  // 1 char
  } else {
    ret += needle;
    // buf += needle;
  }
  
  return ret;
}


/* Formats a buffer for printing the key and answer
 *   Sample,
 *     "      Key --  -  10.5800, -   1.0000, 1243.5678,   0.0000\n"
 *     "      Ans --  -  10.5800, -   1.0000, 1243.5678,   0.0000\n"
 *
 *   If they are the same, passfail should return 0 (for fail)
 *     Use this finction to see the differences
 *
 *  TODO :: add checks & handeling in for sprintf & printArray fails
 */
int printKeyAns(char * buf, float * key, float * ans, unsigned int len) {
  int needle = 0;
  int ret = 0;
  
  needle = sprintf(buf, "      Key -- "); // 13 chars
  ret += needle;
  buf += needle;
  
  needle = printArray(buf, key, len); // 10 + 12*len + 1 chars
  ret += needle;
  buf += needle;

  needle = sprintf(buf, "      Ans -- "); // 13 chars 
  ret += needle;
  buf += needle;
  
  needle = printArray(buf, ans, len); // 10 + 12*len + 1 chars
  ret += needle;
  // buf += needle;

  return ret;
}


/* Loops through keys and answers, using 'passfail'
 *   and writes the results to buf
 *
 * returns the number of passes
 *
 */
unsigned int batchTest(
  char * buf,
  float ** keyArr,
  float ** ansArr,
  const unsigned int cases,
  const unsigned int l,
  unsigned int * pass
) {
  *pass = 0;
  
  int needle = 0;
  int ret = 0;
  int pf = 0;

  for(unsigned int I=0; I<cases; ++I) {
    needle = sprintf(buf, "    case %3lu :: ", I); // 14 chars
    ret += needle;
    buf += needle;

    switch(array_compare(keyArr[I], ansArr[I], 0, l)) {
      case 0 :
        needle = sprintf(buf, " FAIL\n"); // 6 chars
        ret += needle;
        buf += needle;
        
        needle = printKeyAns(buf, keyArr[I], ansArr[I], l);
        ret += needle;
        buf += needle;
        break;
      case 1 :
        needle = sprintf(buf, " pass\n");
        ret += needle;
        buf += needle;

        *pass += 1;
        break;
      // TODO :: add default error handling
    }

  }

  return ret;
}



/* Ues a Level Z routine 'array_compare' to check the answer to the key array,
 *   and writes the result to a char buffer
 *     > On pass, it writes " pass\n"
 *     > On fail, it writes " FAIL\n"
 */
//int passfail(char * buf, float * key, float * ans, unsigned int len) {
//
//  if(array_compare(key, ans, 0, len)==1) {
//    return 1;
//  } else {
//    return 0;
//  }
//
//}
//
//
int printPassFail(char * buf, int pf) {
  int ret = 0;

  switch(pf) {
    case 0:
      ret = sprintf(buf, " FAIL");
      break;
    case 1:
      ret = sprintf(buf, " pass"); 
      break;
    case BLASxON__NOT_TESTED:
      ret = sprintf(buf, " NOT Tested");
      break;
    default:
      ret = sprintf(buf, " ERROR!!!");
  }

  return ret;
}



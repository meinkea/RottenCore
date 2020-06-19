/*! \file test__array_.h
 *
 */


#ifndef BLASxON__TESTCASES__LEVELZ__PRINTHELP_H
  #define BLASxON__TESTCASES__LEVELZ__PRINTHELP_H


  #ifdef __cplusplus
    extern "C" {
  #endif


    /* Formats a buffer for printing a given array of length 'len'
     *   Sample,
     *     "-  10.5800, -   1.0000, 1243.5678,   0.0000\n"
     *
     *  TODO :: This should be handled by BLASxON string functions
     *          The functions should be merged with those
     */
    int printArray(
      char * buf,
      float * arr,
      unsigned int len
    );


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
    int printKeyAns(
      char * buf,
      float * key,
      float * ans,
      unsigned int len
    );


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
    );


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
    int printPassFail(
      char * buf,
      int pf
    );


  #ifdef __cplusplus
    }
  #endif


#endif // BLASxON__TESTCASES__LEVELZ__PRINTHELP_H



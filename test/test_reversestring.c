#include "unity.h"
#include "reversestring.h"

void setUp(void)
{
}

void test_findLength_(void){
  char str[] = "abcde fgh ijk lmn";
  int result;
  
  result = findLengthOfString(str);
  TEST_ASSERT_EQUAL(17,result);
}


void test_reverseString_(void){
    char str[] = "abcde fgh ijk lmn";
    char result1;
    
    result1 = *stringReverse(str);
    TEST_ASSERT_EQUAL_STRING("nml kji hgf edcba",result1);
    
}

void tearDown(void)
{
}


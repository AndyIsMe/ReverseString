#include <stdlib.h>
#include "reversestring.h"

int findLengthOfString(char *str){
    int stringLength;
    stringLength = strlen(str);
    //Write your code to find String length
    return stringLength;
}

char *stringReverse(char *str){
    char *result;
    int len = findLengthOfString(str);
    for (int i = len ; i>=0 ; i--)
    {
      str[len] = result[i] 
    }
    //Write your code to find String length
    result = (char *)malloc(len + 1);
    
    return result;
}

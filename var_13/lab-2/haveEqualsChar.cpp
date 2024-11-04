#include "haveEqualsChar.h"
#include <iostream>

bool HaveEqualsChar(const char *pcharCurrent)
{
    const char* pcharToEqual;
    while(*pcharCurrent){
        pcharToEqual = pcharCurrent + 1;
        while(*pcharToEqual) {
            if(*pcharCurrent == *pcharToEqual){
                return true;
            }
            pcharToEqual++;
        }
        pcharCurrent++;
    }
    return false;
}

bool HaveEqualsChar(const std::string& str)
{
    int len = str.length();
    for(int i = 0; i < len; i++){
        for(int j = i+1; j < len; j++){
            if(str[i] == str[j]){
                return true;
            }
        }
    }
    return false;
}

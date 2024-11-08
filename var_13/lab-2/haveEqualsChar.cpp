#include "haveEqualsChar.h"
#include <iostream>

bool haveEqualsChar(const char *str1, const char *pcharCurrent2)
{
    while(*str1){
        const char* ptmp = pcharCurrent2;
        while(*ptmp) {
            if(*str1 == *ptmp){
                return true;
            }
            ptmp++;
        }
        str1++;
    }
    return false;
}

bool haveEqualsChar(const std::string& str1, const std::string &str2)
{
    int len = str1.length();
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(str1[i] == str2[j]){
                return true;
            }
        }
    }
    return false;
}

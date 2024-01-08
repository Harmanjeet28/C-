//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#include "cstring.h"
namespace sdds {


    void strCpy(char* des, const char* src) {

        int srcLen = 0;
        while (src[srcLen] != '\0') {
            srcLen++;
        }

        for (int i = 0; i <= srcLen; i++) {
            des[i] = src[i];
        }

    }


    int strLen(const char* s) {

        int len = 0;
        while (s[len] != '\0') {
            len++;
        }
        return len;

    }

    void strCat(char* des, const char* src) {

        int sizeOfDes = strLen(des);
        int sizeOfSrc = strLen(src);

        for (int i = 0; i < sizeOfSrc; i++) {
            des[sizeOfDes + i] = src[i];
        }
        des[sizeOfDes + sizeOfSrc] = '\0';

    }

}
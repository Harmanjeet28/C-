//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#include "cstring.h"
namespace sdds {

    // Copies the srouce character string into the destination
    void strCpy(char* des, const char* src) {
        int srcLen = 0;
        while (src[srcLen] != '\0') {
            srcLen++;
        }
        for (int i = 0; i < srcLen; i++) {
            des[i] = src[i];
        }
        des[srcLen] = '\0';  
    }

    // Copies the source character string into the destination upto "len"
 // characters. The destination will be null terminated only if the number
 // of the characters copied is less than "len"
    void strnCpy(char* des, const char* src, int len) {
        int i = 0;
        for (i = 0; src[i] != '\0' && i < len; i++) {
            des[i] = src[i];
        }

        des[i] = '\0';
    }

}
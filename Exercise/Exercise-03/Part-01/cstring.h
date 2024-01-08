//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#ifndef SDDS_CSTRING_H_
#define SDDS_CSTRING_H_
namespace sdds {
   void strnCpy(char* des, const char* src, int len);
   int strCmp(const char* s1, const char* s2);
   int strnCmp(const char* s1, const char* s2, int len);
   int strLen(const char* s);
   const char* strStr(const char* str1, const char* str2);

   void strCat(char* des, const char* src);





}
#endif // !SDDS_CSTRING_H_




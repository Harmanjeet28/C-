//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }
   bool read(char* postalCode) {
       bool success = fscanf(fptr, "%[^,],", postalCode) ==1;
       return success;
   }
   bool read(int& resident) {
       bool success = fscanf(fptr, "%d\n", & resident) == 1;
       return success;
   }


}
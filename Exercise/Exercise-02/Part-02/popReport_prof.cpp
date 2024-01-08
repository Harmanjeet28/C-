//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca

#include "Population.h"
using namespace sdds;
int main() {
   if (load("PCpopulationsComplete.csv")) {
      display();
   }
   deallocateMemory();
   return 0;
}

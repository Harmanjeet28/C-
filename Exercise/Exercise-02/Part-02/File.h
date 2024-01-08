//Harmanjeet Singh Hara
//Student ID#:118624220 , email: hhara@myseneca.ca
#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {

   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();

   bool read(char* postalCode);
   bool read(int& resident);

}
#endif // !SDDS_FILE_H_


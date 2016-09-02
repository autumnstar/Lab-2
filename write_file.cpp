#include "write_file.h"

#include <iostream>
using namespace std;

WriteFile::WriteFile(const char* file_name)
{
   //what I really need to do is make a copy of the data
   
   output_file.open(file_name);
   closed = false;
}


void WriteFile::close()
{
 if (!closed){
    output_file.close();
    closed = true;
 }
}

void WriteFile::writeLine(String* line){
   
   if (!closed && line->length() > 0){
      output_file << line->getText() << endl;
   }
    
   
}


WriteFile::~WriteFile()
{ 
  close();
}

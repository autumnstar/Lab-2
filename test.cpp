#include <iostream>
#include "write_file.h"
#include "ReadFile.h"
#include <sstream>


int main(){
      
      WriteFile fa("arsany.txt");
   
   String* title1 = new String("The First Line At THE File");  
    String* title2 = new String("The second Line At THE File");  
        String* title3 = new String("The thrid Line At THE File");
   fa.writeLine(title1);
      fa.writeLine(title2);
         fa.writeLine(title3);
   fa.close();
   
   ReadFile ma("arsany.txt");
   

   while(!ma.eof())
   {
     String* ti=ma.readLine();
    ti->displayString(); 
    cout <<endl;
   }

  
   ma.close();
   
   /*ReadFile* rf = new ReadFile("cds.txt");
   WriteFile* wf = new WriteFile("out.txt");

   while(!rf->eof())
   {
      String* line = rf->readLine();
      wf->writeLine(line);
      delete line;
   }

   rf->close();
   wf->close();
   delete rf;
   delete wf;

   
   
   
   */
   
   
   
   
   
   
   
   
   return 0;
   
   
   
   
   
}
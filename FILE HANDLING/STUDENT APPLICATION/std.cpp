#include<iostream>
#include<fstream>
#include<cstdlib>
#include"student.h"
using namespace std;



int main()

{ 
        student ob;
        ob.accept();
 
   ofstream fw;
   
   fw.open("student.txt",ios::app);
   
   ob.save(fw);
   /*ob.display();*/
   
   
   cout << "Data Is Saved Sucessfully " << endl;
   
   
   fw.close();
   
}



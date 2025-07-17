#include"student.h"
using namespace std;



int main()

{
  student ob;
  
  ifstream fr;
  
  fr.open("student.txt",ios::in);
  
  
  cout << "____________Student Information____________ " << endl;
  while(! fr.eof())
       { 
         ob.read(fr);
  
         ob.display();
       }
  
  fr.close();

}

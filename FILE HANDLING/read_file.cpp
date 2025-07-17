#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

 int main()
 {
 
      ifstream f;
      
      string fname;
      char ch;
      
        
           cout << "Enter The File Name  :" << endl;
           cin  >> fname;
           
           f.open(fname,ios::in);
 
           if(!f.is_open())
           {
             
                 cout << "Invalid File Name  " << endl;
                 exit(0);
             
              
           }
           
           cout << "File Content Are :"  << endl;
           
       while(1)
          {
                  ch=f.get();
                  if(ch==EOF)
                  { 
                     break;
                  }
                cout << ch;
                
          
          }    
        
            f.close();
            return 0;
 }

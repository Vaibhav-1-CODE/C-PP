#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

 
 
    int main()
         {
             ifstream f;
             string fname;
             char ch;
             int vcnt;
             
             
                cout << "Enter The File Name :" << endl;
                cin  >> fname;
                
                f.open(fname,ios::in);
                
                if(!f.is_open())
                 {
                 
                     cout << "Invalid File Name " << endl;
                     exit(0);
                 }
                 
                 vcnt=0;
                 
                 while(1)
                   {
                      ch=f.get();
                      
                      if(ch==EOF)
                       {
                         break;
                       }
                      if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'||ch=='u')
                       {
                          vcnt++;
                       } 
                   
                   
                   }
                  cout << "No Of Vowels :" << vcnt <<endl;
                  f.close();
                  return 0; 
         }

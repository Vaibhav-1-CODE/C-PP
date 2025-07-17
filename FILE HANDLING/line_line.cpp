/*Reading A File Line By Line*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>


using namespace std;

int main()
 
 {
 
      ifstream f;
      string fname;
      string str;
      
      cout << "Enter The File Name  :" << endl;
      cin  >> fname;
      
      f.open(fname,ios::in);
      
       if(!f.is_open())
       {
         cout << "Invalid File Name  :" << fname << endl;
         exit(0);
       }
       cout << "File Content Are :" << endl;
       
       while(!f.eof())
         {
            getline(f,str);
            
            cout << str << endl;

         
         
         }
         f.close();
 }
  



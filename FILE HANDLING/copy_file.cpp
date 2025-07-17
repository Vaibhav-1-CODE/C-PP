/*Coping A File Into Another File*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>


using namespace std;

 int main()
 
  {
  
      ifstream fr;
      ofstream fw;
      string frname,fwname;
      string str;
      
       cout << "Enter The File Name To Read :  " << endl;
       cin  >> frname;
       
       cout << "Ente The File Name To Write  :" << endl;
       cin  >> fwname;
       
       fr.open(frname,ios::in);
       
       if(!fr.is_open())
        {
        
          cout << "Invalid File Name For Reading " << endl;
          exit(0);
        
        }
        
        fw.open(fwname,ios::out);
        
        if(!fw.is_open())
        {
          cout << "Invalid File Name For Writting " << endl;
          exit(0);
          
        }
        
        
        while(!fr.eof())
          {
             getline(fr,str);
             
             fw<<str<<endl;
          }
          
          fr.close();
          fw.close();
          
          cout << "File Is Copied Successfully " << endl;
  }

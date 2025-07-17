#include<iostream>
#include<fstream>
using namespace std;


int main()
{

   ifstream fr("a.txt");
   
   char ch;
   
   
   
   fr.seekg(9, ios::beg);//begining
   
   cout << "character is position "<< fr.tellg()<< endl;
   
   ch= fr.get();
   cout << "Data  :"<< ch << endl;
   
   cout << " cursor :"<< fr.tellg()<< endl;
   
   cout << "------------------" << endl;
   
   fr.seekg(-9, ios::end);//end
   
   cout << "character is position "<< fr.tellg()<< endl;
   
   ch= fr.get();
   cout << "Data  :" << ch << endl;
   
   cout << " cursor :"<< fr.tellg()<< endl;
   
   
   cout << "------------------" << endl;
   
   fr.seekg(-3, ios::cur);//end
   
   cout << "character is position "<< fr.tellg()<< endl;
   
   ch= fr.get();
   cout << "Data  :" << ch << endl;
   
   cout << " cursor :"<< fr.tellg()<< endl;
   
   
   
   
   return 0;

}

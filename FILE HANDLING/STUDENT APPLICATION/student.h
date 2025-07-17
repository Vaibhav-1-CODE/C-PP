#include<iostream>
#include<fstream>
using namespace std;


class student
{
    
  private :  
            int rno;
            string name;
            float per;
  public  :
   
            void accept()
              {
                   cout << "Enter The Roll.No  :" << endl;
                   cin  >> rno;
                   
                   cout << "Enter The Name     :" << endl;
                   cin  >> name;
                   
                   cout << "Enter The Percentage :" << endl;
                   cin  >> per;
              }
            void display()
              {
              
                     cout << "Roll Number Is  :" << rno << endl;
                     cout << "The Name Is  :" << name << endl;
                     cout << "The Percentage Is  :" << per << endl;
                      
                     cout << "------------------------------------" << endl;
              }  
              
              void save(ofstream & fout)
                {
                   fout << rno << " " << name << " " << per << endl;
                }
                
     
              void read(ifstream & fin)
              {
                 fin>>rno;
                 fin>>name;
                 fin>>per;
              }   
                      

};

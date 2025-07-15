/*When Global Varible Name , Data Member Name & Local Variable Name Is Same */

#include<iostream>
using namespace std;

int rno=666;

class student
{
 
       private :
       
           int rno;
           string name;
           float per;
           
       public :
       
            student()
             {
                 rno=0;
                 name="N/A";
                 per=0.0;
             
             }
          student(int rno,string name,float per)
            {
            
               this->rno   = rno;
               this->name  = name;
               this->per   = per;
            }
            
          
          
          void display()
            {
            
              int rno=999;
              
              cout << "Global Roll Number :" << ::rno << endl;
              cout << "Local Roll Number  :" <<  rno  << endl;
              cout << "Roll Number        :" << this->rno << endl;
              cout << "Name               :" << name << endl;
              cout << "Percentage         :" << per  << endl;
              cout << "--------------------------------------" << endl; 
            
            } 
           
              
};



 int main()
  {
  
  
      student ob1;
      
      ob1.display();
      
      student  ob2(101,"aaa",90);
      ob2.display();
      
      exit(0);
  
  }

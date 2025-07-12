#include<iostream>
using namespace std;

class employee
 {
     private :
     
       int emp_no;
       char emp_name[90];
       float salary;
       
      
    public :
    void accept()
       {
          cout << "Enter The Employee Number :" << endl;
          cin  >> emp_no;
          cout << "Enter The Employee Name :" << endl;
          cin  >> emp_name;
          cout << "Enter The Employee salary :" << endl;
          cin  >> salary;
       }
     inline void display()
       {
          cout << "The Employee Number Is : " << emp_no   << endl;
          cout << "The Employee Name   Is : " << emp_name << endl;
          cout << "The Employee Salary Is : " << salary   << endl;
       
       } 
      
 };
 
 int main()
 {
    int i;
    employee a[990];
    
    for(i=0;i<3;i++)
     {
         cout << "Enter The Details Of Employee " << i+1 << ":" << endl;
         a[i].accept();
     }
    
    
    cout << "------------------------------------------------------" << endl;
    
    for(i=0;i<3;i++)
     {
        cout << "Employee Details " << i+1 << ":" <<  endl;
        a[i].display();
     }
   
   
 exit(0);
 }

/*Employee Class With Getters & Setters And Of Object*/

#include<iostream>
#include<string>
using namespace std;

 class employee
 {
 
 private :
 
   
    int emp_id;
    string emp_name;
    float salary;
    
    public :
    
    void set_emp_id(int i)
      {
         emp_id=i;
      
      }
    int get_emp_id()
     {
        return emp_id;
     }
     
   void set_emp_name(string n)
     {
        emp_name=n;
      
     }
    
   string get_emp_name()
     {
       return emp_name;
     }  
 
   void set_salary(float p)
     {
     
         salary=p;
     
     }
   float get_salary()
      {
         return salary;
      }
 
   void display()
     {
        cout << "Employee Id :" << emp_id <<  endl;
     
        cout << "Employee Name Is :" << emp_name <<  endl;
        cout << "Employee Salary Is :" << salary <<  endl;
     }
 
 
 };
 
 
 int main()
 
 {
    int n,i;
    
    cout <<   "How Many Admission  :"  << endl;
    cin  >> n;
    
    employee E[n];  //Creating An Object 'n' 
 
     int teid;
     string tename;
     float tsalary;
     
     for(i=0;i<n;i++)
       {
          cout << "Enter The Employee Id  :" << endl;
          cin  >> teid;
          
          cout << "Enter The Name Of Employee :" << endl;
          cin  >> tename;
          
          cout << "Enter The Salary Of Salary :"  << endl;
          cin  >> tsalary;
          
          E[i].set_emp_id(teid);
          E[i].set_emp_name(tename);
          E[i].set_salary(tsalary);       
       }
       
       cout << "\n***************STUDENT INFORMATION USING DISPLAY********************" << endl;
       
       for(i=0;i<n;i++)
         {
            E[i].display();
         
         }
         
         cout << "\n***************STUDENT INFORMATION USING GETTER********************" << endl;
         
          for(i=0;i<n;i++)
            
            {
              cout << "Employee Id  :" << E[i].get_emp_id() << endl;  
              cout << "Employee Name Is  :" << E[i].get_emp_name() << endl;  
              cout << "Employee Salary Is  :" << E[i].get_salary() << endl;  
              cout << "--------------------------------" << endl;
            }
            exit(0);
 }

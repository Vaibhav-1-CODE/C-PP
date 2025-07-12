#include<iostream>
using namespace std;

  
  
  class sem2;
  class sem1
  {
     private :
               int marks;
     public  :
     
               void accept()
                 {
                    cout << "Enter The Marks Of First Semester  :" << endl;
                    cin  >> marks;
                 }          
                   friend int total_marks(sem1,sem2);
  };
  class sem2
  {
  
       private :
               int marks;
     public  :
     
               void accept()
                 {
                    cout << "Enter The Marks Of Second Semester  :" << endl;
                    cin  >> marks;
                 }          
                   friend int total_marks(sem1,sem2);
  };
  
  int total_marks(sem1 marks1,sem2 marks2)
   {
   
   
       return (marks1.marks+marks2.marks);
   }
   
  
  
  
  
  
  int main()
  {
     sem1 s1;
     sem2 s2;
     
     char name[20];
     cout << "Enter The Name Of Student :" << endl;
     cin  >> name;
     
     s1.accept();
     s2.accept();
     
     cout << name << "Total Marks "<< total_marks(s1,s2) << "Marks In Both Semester " << endl;  
  
  exit(0);
  }

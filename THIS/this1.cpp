/*Student Class Member Name & Constructor Parameters Name Ambiguity Resolved [Using 'this' pointer]*/

#include<iostream>
#include<cstring>

using namespace std;

class student

{
    int rno;
    string name;
    float per;
    
    
    public :
    
        student():rno(0),name("*******"),per(0.0)
          {
           cout << "Empty Constructor " << endl;
          }
        
        student(int rno,string name ,float per): rno(rno),name(name),per(per)  
          {
             cout << "Parameterized constructor" << endl;
            /* 
            If You Initializing Data Member Inside Cinstructor Then You Must Have Tom Use 'This 'Pointer To
            Resolve Ambiguity.
            
             this->rno =rno;
             this->name =name;
             this->per =per; */
          }    
          void display()
            {
              cout << "Roll Number :" << rno  <<endl;
              cout << "Name :" << name  << endl;
              cout << "Percentage :" << per <<  endl;
            }
};

  
  int main()
  
  {
  
      student ob1;
      student ob2(103,"aaa",90);
      
      ob1.display();
      ob2.display();
      
      exit(0);
  }


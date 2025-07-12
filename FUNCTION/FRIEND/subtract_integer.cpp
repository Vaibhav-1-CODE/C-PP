/*Write a C++ program to subtract two integer numbers of two different classes
using friend function.*/



#include<iostream>
using namespace std;
class B;
 class A
  {
    int x;
     
      public :
       
       
                void accept()
                   {
                      cout << "Enter The First :" << endl;
                      cin  >> x;
                  
                   }
                void display()
                   {
                     cout << "First Number Is : " << endl;
                   }  
                  friend int subtract(A a ,B b);
  };
 class B
   {
    int y;
     
      public :
       
       
                void accept()
                   {
                      cout << "Enter The Second  :" << endl;
                      cin  >> y;
                      

                   }
                void display()
                   {
                     cout << "Second  Number Is : " << endl;
                   }  
                  friend int subtract(A a ,B b);
  };
  
  int subtract(A a,B b )
  {
      return( a.x - b.y);
  
  
 
 
  }
  
 int main()
 {
    A ob1;
    B ob2;
    
    ob1.accept();
    ob1.display();
    
    ob2.accept();
    ob2.display();
    
    cout << "The Subtraction Is :" << subtract(ob1,ob2) << endl; 
  
 }

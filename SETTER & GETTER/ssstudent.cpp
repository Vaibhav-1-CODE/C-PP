/*Setters*/

#include<iostream>
using namespace std;


class student
{
   private :
             int rno;
             string name;
             float per;
             
   public :
   
   
                void set_rno(int r)
                  {
                     
                     
                      rno=r;
                  }         
                void set_name(string nm)
                  {
                     name=nm;
                   
                  } 
                void set_per(float p)
                  {
                     per=p;
                  }  
                  
                  
              void display()
                {
                
                    cout << "Roll Number :" << rno << endl;
                    cout << "Name :" << name << endl;
                    cout << "Percentage  :" << per << endl;
                    cout << "___________________________________" << endl;
                }  
                

};
int main()

{

         student ob;
         
         ob.set_rno(101);
         ob.set_name("aaa");
         ob.set_per(69.9);
         
         ob.display();


exit(0);
}

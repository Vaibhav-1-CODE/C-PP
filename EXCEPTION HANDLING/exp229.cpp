/*Edxception Handling*/

//Write a C++ program to compute square root of a number. The input value mustbe tested for validity. If it is negative, the user defined function my_sqrt() shouldraise an exception.


#include<iostream>
using namespace std;

 int main()
{

  float a,b;
   
   cout<<"Enter the number :"<<endl;
   cin>>a;
   
   
   try
   {
       if(a<0)
       {
         throw runtime_error("error: you insert negative number ");
       }
       
   
   
   }
   catch(const runtime_error &w)
   {
     cout<<w.what()<<endl;
   }
   
   
     b=a*a*a*a;
   
   cout<<"answer="<<b<<endl;
   
return 0;
}

//front()-Used To Accessed First Element
//back()-Used To Accessed Last Element
//data()-Used To Get The Pointer Pointing to the First Element 


#include<iostream>
#include<array>
using namespace std;

int main()
{
   array<int, 6> a ={11,22,33,44,55,66};
   
   
   
   cout<<"The First Element Of The Array Usingf Front() is :  "<<  a.front() <<endl;
   cout<<"The Last Element Of The Array Using back()   is :"<<  a.back() <<endl;
   cout<<"The First Element Of The Array Using data() is : "<<  *a.data() <<endl;
   

   




return(0);
}

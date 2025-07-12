/*Write a C++ program using inline function to find square root and cube of a
number.*/

#include<iostream>
#include<cmath>
using namespace std;

  inline int squareroot(int n)
    {
        int result;
        result=sqrt(n);
        return result;
    }
     
   inline int cube(int n)
     {
        
        
        
        
        return(n*n*n); 
     
     }  
     
 int main()
 {
     int n;
      
      cout << "Enter The Number :" << endl;
      cin >> n;
      
      cout << "The Square Root Is : " << squareroot(n) << endl;
      cout << "The Cude Is :" <<cube(n) << endl;
      
      return 0;
   
 }

 

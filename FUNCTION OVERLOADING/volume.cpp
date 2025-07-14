/*Write a C++ program to overload function volume and find volume of cube,
cylinder and sphere.*/


#include<iostream>
#include<cmath>
using namespace std;

  
    double volume(double side)
       {
          return pow(side,3);
       }
    double volume(double radius,double height)
       {
           return M_PI*pow(radius,2)*height;
       }
    double volume(double radius ,bool issphere)
       {
         return(4.0/3.0)*M_PI*pow(radius,3);
       }   
       
 int main()
 
   {
       double side ,radius,height;
       cout << "Enter The Side Of The Cube  :" << endl;
       cin  >> side;
       
       cout << "Volume Of Cube is " << volume(side) << endl;
       
       cout << "Enter The Radius And Height Of Slinder : " << endl;
       cin  >> radius >> height;
       
       cout << "Volume Of Slinder  :" << volume(radius,height) << endl;
       
       cout << "Enter The Radius Of Sphere  :" << endl;
       cin  >> radius;
       
       cout << "Volume Of Sphere Is : " << volume(radius,true) <<  endl;
       
       
       return 0;
       
   
   
   }

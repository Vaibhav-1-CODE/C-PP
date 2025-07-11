/*Write A C++ Program To Create A Class Area That Has following Data Memders -For Rectangle,-for Square ,-For Circle,-for tringle  */

#include<iostream>
using namespace std;


 class area 
  {
            float length ,breath,side,radius,base,height;
          
       public :
        
          void  area_rect()
            { 
               float area;
               
               cout << "Enter The Length Of Rectangle  : " << endl;
               cin  >> length;
               
               cout << "Enter The Bearth Of Rectangle  : " << endl;
               cin  >> breath;
               
               area=length*breath;
               
               cout << "Area Of Rectangle  :  " << area << endl;
               
            } 
            
            
            
            void  area_sqr()
            { 
               float area;
               
               cout << "Enter The Side Of Square  : " << endl;
               cin  >> side;
             
               
               area=side*side;
               
               cout << "Area Of Square    :  " << area << endl;
               
            }   
            
            
            void  area_cir()
              { 
                 float area;
               
                 cout << "Enter The Radius Of Circle   : " << endl;
                 cin  >> radius;
             
               
                 area=3.14*radius*radius;
               
                cout << "Area Of Circle     :  " << area << endl;
               
             }   
  
          void area_tri()
            {
                float area;
                
                cout << " Enter The Bsse Of Triangle : " << endl;
                cin  >> base;
                
                cout << "Enter The Height Of Tringle" << endl;
                cin >> height;
                
                area=1/2*base*height;
                
                cout << "Area Of Triangle  : " << area <<endl;
             
            }
     
     
     


  };


int main()
 {  
    area shape1,shape2,shape3,shape4;
    int choice;
    
     do 
       {
                cout << "\n MENU TO CALCULATE AREA OF SHAPES \n" << endl;
                cout << "1.Area Of Rectangle\n" << endl;
                cout << "2.Area Of Square\n" << endl;
                cout << "3.Area Of Circle\n" << endl;
                cout << "4.Area Of Triangle\n"<< endl;
                cout << "5.Exit\n" << endl;
                
                cout << "Enter Your Choice" << endl;
                cin >> choice;
                
                  switch(choice)
                    {
                      case 1 :
                                shape1.area_rect();
                                break;
                                
                      case 2 :  
                                shape2.area_sqr();
                                break;
                                
                      case 3 :  
                                shape3.area_cir();
                                break;
                              
                      case 4 :  
                                shape4.area_tri();
                                break;
                                
                      case 5 :
                               cout << "Exit" << endl;
                               break;
                               
                               default :
                                         cout << "Invalid Choice " << endl;          
                    
                    }
                    
       }
       
        while(choice!=5);
        
        



 exit(0);
 }

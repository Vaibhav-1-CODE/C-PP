/*exception handling*/

//Write A C++ Program To Read Two Numbers And Divide First Number By Second  Number Rise Exception If Second number is Zero


#include<iostream>
#include<stdexcept>
using namespace std;

             
             
    int main()
    
    {
             double num1,num2,result;
             
               cout<<"Enter The First Number"<<endl;
               cin>>num1;
               cout<<"Enter The Second Number"<<endl;
               cin>>num2;
               
               
                          try
                             {
                           
                             
                               if(num2==0)
                              {
                                  throw runtime_error("error:division with zero is not possible");
                              }
                  
                             
                          
                             }
                          catch(const runtime_error &e)
                             {
                               cout<<e.what()<<endl;
                               
                             }
                             cout<<"__________________________________________"<<endl;
                             try
                             
                             {
                            
                                if(num1<0)
                                     {
                                       throw runtime_error("error:negatin=ve number is not allowed ");
                                      }
                  
                                if(num2<0)
                                      {
                                        throw runtime_error("error:negatin=ve number is not allowed ");
                                      }
                  
                             }
                             
                              catch(const runtime_error &w)
                             {
                               cout<<w.what()<<endl;
                               
                             }
                             
             result=num1/num2;
             cout<<"answer="<<result<<endl;  
            cout<<"----------------------------------------------------"<<endl;  
                                        
                          
    
    
    
    
    
 
 return 0; 
 }

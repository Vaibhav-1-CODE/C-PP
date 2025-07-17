#include<iostream>
#include<stdexcept>
using namespace std;

             double divide(double a,double b)
             {
                  if(b==0)
                  {
                       throw runtime_error("error:division with zero is not possible");
                  }
                  return a/b;
             }
             
    int main()
    
    {
             double num1,num2;
             
               cout<<"Enter The First Number"<<endl;
               cin>>num1;
               cout<<"Enter The Second Number"<<endl;
               cin>>num2;
               
               
                          try
                             {
                             double result=divide(num1,num2);
                             cout<<"result:"<<result<<endl;
                          
                             }
                          catch(const runtime_error &e)
                             {
                               cout<<e.what()<<endl;
                               
                             }
                             cout<<"__________________________________________"<<endl;
                             try
                             
                             {
                             double result=divide(num1,num2);
                                if(num1<0)
                                     {
                                       throw runtime_error("error:negatin=ve number is not allowed ");
                                      }
                  
                                if(num2<0)
                                      {
                                        throw runtime_error("error:negatin=ve number is not allowed ");
                                      }
                  return num1/num2;
                             }
                             
                              catch(const runtime_error &w)
                             {
                               cout<<w.what()<<endl;
                               
                             }
                             
                             
                          
    
                
     
         return 0;
    }

/*Exception Handling*/

//Create a class calculator having data members as Number1 and Number2.Write a function to accept two values and perform addition and multiplication oftwo numbers.
//Handle following exceptions:Using try, throw and separate catch block for every exception

//1.Number1 and Number2 should be greater than 0.

//2.Number1 and Number2 should be in the range between 500 to 1000.




#include<iostream>
#include<stdexcept>
using namespace std;



             class student
             {
                
                private :
                
                int number1,number2;
                
                public:
                
                void accept()
                {
                   cout<<"Enter The Number  1:"<<endl;
                   cin>>number1;
                   
                   cout<<"Enter The Number  2: "<<endl;
                   cin>>number2;
                   try
                {
                   
                       if(0>=number1)
                      {
                         throw runtime_error("error:number1 is less than zero");
                       }
                }
                catch(const runtime_error &w)
                {
                   cout<<w.what()<<endl;
                }
               cout<<"-------------------------------------------"<<endl; 
                try
                {
                   
                   if(0>=number2)
                      {
                         throw runtime_error("error:number2 is less than zero");
                       }
                 }
                catch(const runtime_error &r)
                    {
                          cout<<r.what()<<endl;
                      }
                
               
                    cout<<"-------------------------------------------"<<endl;
               
               try
                {
                   
                       if(number1<500)
                      {
                         throw runtime_error("error:number1 is less than 500");
                       }
                }
                catch(const runtime_error &p)
                {
                   cout<<p.what()<<endl;
                }
               cout<<"-------------------------------------------"<<endl; 
                try
                {
                   
                   if(number1>1000)
                      {
                         throw runtime_error("error:number2 is under 1000");
                       }
                 }
                catch(const runtime_error &r)
                    {
                          cout<<r.what()<<endl;
                      }
                       cout<<"-------------------------------------------"<<endl;
               
               try
                {
                   
                       if(number2<500)
                      {
                         throw runtime_error("error:number1 is less than 500");
                       }
                }
                catch(const runtime_error &p)
                {
                   cout<<p.what()<<endl;
                }
               cout<<"-------------------------------------------"<<endl; 
                try
                {
                   
                   if(number2>1000)
                      {
                         throw runtime_error("error:number2 is under 1000");
                       }
                 }
                catch(const runtime_error &r)
                    {
                          cout<<r.what()<<endl;
                      }
               
               
               
               
                }
                
                
             
             void add(int add)
             {
               add=number1+number2;
               cout<<"Addition="<<add<<endl;
             }
                 
             
                          
             void mul(int mul)
             {
                mul=number1*number2;
                cout<<"Multiplication="<<mul<<endl;
             }
                 
             };



        








int main()

{
        int mul,add ,number1,number2;
    student ob;
    
      ob.accept();
    
    ob.add(add); 
    ob.mul(mul);  
    
    
    
    return 0;

}

/*Exception handling */

//Write a C++ program to print successive integers 1, 2, 3, ... StopNum - 1.Throws an integer exception when StopNum is reached.StopNum: The stopping number to be used.

#include<iostream>
using namespace std;

int main()
{

    
int stopnum,i;
 
   cout<<"Enter The Number  :"<<endl;
   cin>>stopnum;
   
   
   
   
   try{
        
               
               if( i=stopnum)
               {
                  throw runtime_error("exception : reach stopnum");
               }
               
   }
   catch(const runtime_error &e)
   {  
     cout<<e.what()<<endl;
   }
  
   
   for(int i=1;i<stopnum;i++)
   {
       cout<<i<<endl;
   }






}

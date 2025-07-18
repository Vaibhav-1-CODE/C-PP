//[]-Used to access element at the index provided
//at-Used to access element at the index provided



#include<iostream>
#include<array>
using namespace std;

int main()
{
   array<int, 6> a ={11,22,33,44,55,66};
   
   
   
   cout<<"PrintingnElement By Using [] Operstor "<<endl;
   
   for(int i=0;i<a.size();i++)
   
   {
        cout<<a[i]<< " "<<endl;   
   }

   

    cout<<"Printing Element By Using at Operstor "<<endl;
   
   for(int i=0;i<a.size();i++)
   
   {
        cout<<a.at(i)<< " "<<endl;   
   }

   




return(0);
}

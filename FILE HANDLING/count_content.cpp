/*Write A Program Which Accept File Name From User Read Content Of It & Count How Many Characters,Lines & 
Words Are In A File */




#include<iostream>
#include<fstream>
#include<cstdlib>


using namespace std;

int main()
{

   ifstream f;
   string fname;
   char ch;
   int c=0,w=0,l=0;
   
   cout << "Enter The File Name : " << endl;
   cin  >> fname;
   
   f.open(fname,ios::in);
    
     if(!f.is_open())
     {
       cout << "Invalid File Name  :" << fname << endl;
       exit(0);
     }
     
     
     
     while(1)
       {
          ch=f.get();
          if(ch==EOF)
           {
            
              break;
           }
         c++;
         
         if(ch==' ' || ch=='\t')
           {
             w++;
           }
         if(ch=='\n')
           {
             w++;
             l++;
           }  
       }


       cout << "Number Of Lines  :" << l << endl;
       cout << "Number Of Words  :" << w << endl;
       cout << "Number Of Characters  :" << c << endl;
}

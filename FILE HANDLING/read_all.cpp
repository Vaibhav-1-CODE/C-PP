/*Write A Program Which Accept File Name From User ,Read Content Of It & Count How Alphabets,Digit & Special
Character Aer There In File  */




#include<iostream>
#include<fstream>
#include<cstdlib>


using namespace std;


 int main()
 
   {
   
       ifstream f;
       string fname;
       char ch;
       int capcnt,smcnt,dcnt,spcnt;
       
       cout << "Enter The File Name  :" << endl;
       cin  >> fname; 
        
         f.open(fname,ios::in);
         
         if(!f.is_open())
          {
          
             cout << "Invalid File Name  :  " << fname  <<  endl;
             exit(0);
          }       
        
           cout << "File Contant Are :" << endl;
           
           capcnt=0;
           smcnt=0;
           dcnt=0;
           spcnt=0;
           
           while(1)
             {
               ch=f.get();
               if(ch==EOF)
               {
                 break;
               }
             
             if(ch>='A' && ch <='Z')
              {
                capcnt++;
              }
             else if(ch>='a' && ch<='z') 
              {
                 smcnt++;
              }
             else if(ch>='0' && ch<='9')
              {
                dcnt++;
              } 
             else
              {
                  spcnt++;
              }
             }
             
 
             cout << "Number Of Capital Alphabet :" << capcnt << endl;
             cout << "Number Of Small Alphabet :" << smcnt << endl;
             cout << "Number Of Digit :" << dcnt << endl;
             cout << "Number Of Special Character  :" << spcnt << endl;
             
             f.close();
             return (0);
             
           
   }

/* setters & getters  */

#include<iostream>
using namespace std;


class student
{
   private :
             int rno;
             string name;
             float per;
             
   public :
   
   
                void set_rno(int r)
                  {
                     
                     
                      rno=r;
                  }         
                void set_name(string nm)
                  {
                     name=nm;
                   
                  } 
                void set_per(float p)
                  {
                     per=p;
                  }  
                  
                  
              int get_rno()
                {
                
                   return rno;
                
                }
                
                string get_name()
                {
                
                   return name;
                
                }
                
                float get_per()
                {
                
                   return per;
                
                }
                

};
int main()

{
    int trno;
    string tname;
    float tper;
      
         student ob;
         
  cout << "Enter The Roll Number  :" << endl;
  cin  >>trno;
  
  cout << "Enter The Name : " << endl;
  cin  >> tname;
  
  cout << "Enter The Percentage :" << endl;
  cin  >> tper;       
         
         ob.set_rno(trno);
         ob.set_name(tname);
         ob.set_per(tper);
         
                    cout << "Roll Number :" << ob.get_rno() << endl;
                    cout << "Name :" << ob.get_name() << endl;
                    cout << "Percentage  :" << ob.get_per() << endl;
                    cout << "___________________________________" << endl;

exit(0);
}

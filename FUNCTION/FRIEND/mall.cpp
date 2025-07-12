/*Create two classes named Electronics_Items and Sports_Items containing data
member as total_amount in each class.
1. Create object of each class.
2. Use friend function to add total amount of both classes and print the
addition of amounts in main function.*/



#include<iostream>
using namespace std;

   class sports_items;
  class electronic_items 
  {
    private :
    
     int amount1,amount2,amount3,total_amount1 ;
     
    public :
      
         void accept()
         {
            cout << "Enter The First Amount  : " << endl;
            cin  >> amount1;
            cout << "Enter The Second Amount : " << endl;
            cin  >> amount2;
            cout << "Enter The Third Amount  : " << endl;
            cin  >> amount3;
            
            total_amount1=amount1+amount2+amount3;          
         }
         
         friend int add(electronic_items,sports_items);
  
  
  };
  
  class sports_items
  {
  
    private :
    
       int amount1,amount2,amount3,total_amount2 ;
     
    public :
            
   void accept()
         {
            cout << "Enter The First Amount  : " << endl;
            cin  >> amount1;
            cout << "Enter The Second Amount : " << endl;
            cin  >> amount2;
            cout << "Enter The Third Amount  : " << endl;
            cin  >> amount3;
            
            total_amount2=amount1+amount2+amount3;          
         }
         
         friend int add(electronic_items,sports_items);
  
  
  };

  int add(electronic_items num1,sports_items num2)
  {
     return num1.total_amount1+num2.total_amount2;
  }   
  
  int main()
  {
    electronic_items n1;
    sports_items n2;
    
    cout << "Enter The Details of Electronic Items " << endl;
    n1.accept();
    cout << "______________________________________" << endl;
  
  cout << "Enter The Details of Sports Items " << endl;
    n2.accept();
    cout << "______________________________________" << endl;
    
    int result=add(n1,n2);
    
    cout << "Addition Of Total Amount :" << result << endl;
  
  
  
  
  
  
  exit(0);
  }

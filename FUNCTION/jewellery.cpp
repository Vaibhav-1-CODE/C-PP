#include<iostream>
using namespace std;

class jewellery {
private:
    int j_code;
    char j_name[90];
    float j_price;
    int code; // to store object number
    static int count; // static member for tracking count

public:
    void accept() {
        cout << "Enter The Jewellery Code   :" << endl;
        cin >> j_code;             

        cout << "Enter The Jewellery Name   :" << endl;
        cin >> j_name;

        cout << "Enter The Jewellery Price  :" << endl;
        cin >> j_price;
    }

    void display() {
        cout << "The Jewellery Code  Is  : " << j_code << endl;
        cout << "The Jewellery Name  Is  : " << j_name << endl;
        cout << "The Jewellery Price Is  : " << j_price << endl;
    }

    void setcode() {
        code = ++count;
    }

    void getcode() {
        cout << "Object Number : " << code << endl;
    }

    static void showcount() {
        cout << "Count : " << count << endl;
    }
};

// Define static variable
int jewellery::count = 0;

int main() {
    jewellery j1, j2;

    j1.setcode();
    j2.setcode();

    jewellery::showcount();

    cout << "\nEnter The Details Of Jewellery: " << endl;
    j1.accept();

    cout << "\nDetails Of Jewellery: " << endl;
    j1.display();
    j1.getcode();

    cout << "\n---------------------------------------" << endl;

    cout << "\nEnter The Details Of Second Jewellery: " << endl;
    j2.accept();

    cout << "\nDetails Of Second Jewellery: " << endl;
    j2.display();
    j2.getcode();

    cout << "\n---------------------------------------" << endl;

 
 
 
 exit(0);
}


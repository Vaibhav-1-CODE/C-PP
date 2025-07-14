/*Write a C++ program to create a class Person that contains data members as
Person_Name, City, Mob_No. Write a C++ program to perform following
functions:
a. To accept and display Person information
b. To search the mobile number of a given person
c. To search the Person details of a given mobile number
(Use Function Overloading)*/

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name, city, mobile_no;

    void accept() {
        cout << "Enter The Name: ";
        cin.ignore(); // To ignore leftover newline
        getline(cin, name);

        cout << "Enter The City: ";
        getline(cin, city);

        cout << "Enter The Mobile Number: ";
        getline(cin, mobile_no);
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "City: " << city << endl;
        cout << "Mobile Number: " << mobile_no << endl;
    }
};

// Overloaded functions for searching
void search(Person p[], int n, string searchName) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (p[i].name == searchName) {
            cout << "Mobile Number: " << p[i].mobile_no << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No person found with the name: " << searchName << endl;
}

void search(Person p[], int n, long long mobile) {
    string mobile_str = to_string(mobile);
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (p[i].mobile_no == mobile_str) {
            p[i].display();
            found = true;
        }
    }
    if (!found)
        cout << "No person found with mobile number: " << mobile << endl;
}

int main() {
    const int MAX_PERSONS = 100;
    Person p[MAX_PERSONS];
    int count;

    cout << "Enter The Number Of Persons: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Details Of Person " << i + 1 << ":" << endl;
        p[i].accept();
    }

    cout << "\nList Of Persons:\n";
    for (int i = 0; i < count; i++) {
        cout << "----------------------------" << endl;
        p[i].display();
    }

    string searchName;
    cout << "\nEnter The Name You Want To Search: ";
    cin.ignore(); // flush newline
    getline(cin, searchName);
    search(p, count, searchName); // calls name-based search

    long long searchMobile;
    cout << "\nEnter Mobile Number To Search: ";
    cin >> searchMobile;
    search(p, count, searchMobile); // calls mobile number-based search

    return 0;
}


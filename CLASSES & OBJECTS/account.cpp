/*Write a C++ program to create a Account class having Account_no,
Owner_name, Account_type , Amount. For displaying details use appropriate
manipulators.*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account {
    int account_no;
    string owner_name;
    string account_type;
    double amount;

public:
    void accept() {
        cout << "Enter Account Number: ";
        cin >> account_no;
        cin.ignore(); // To consume newline

        cout << "Enter Owner Name: ";
        getline(cin, owner_name);

        cout << "Enter Account Type: ";
        getline(cin, account_type);

        cout << "Enter Amount: ";
        cin >> amount;
    }

    void display() const {
        cout << setw(15) << account_no
             << setw(25) << owner_name
             << setw(15) << account_type
             << setw(15) << fixed << setprecision(2) << amount << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of accounts: ";
    cin >> n;

    Account* accounts = new Account[n];

    // Accept details
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Account " << i + 1 << ":" << endl;;
        accounts[i].accept();
    }

    // Display header
    cout << "\n" << string(70, '=') << endl;;
    cout << setw(15) << "Account No"
         << setw(25) << "Owner Name"
         << setw(15) << "Type"
         << setw(15) << "Amount" << endl;
    cout << string(70, '-') << endl;;

    // Display all accounts
    for (int i = 0; i < n; ++i) {
        accounts[i].display();
    }

    delete[] accounts;
    return 0;
}


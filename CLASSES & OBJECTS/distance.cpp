/*Create a class named ‘DISTANCE‟ with: - feet and inches as data
members.Write a C++ program to create objects of DISTANCE class. Input two
distances and output the sum.*/

#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    void accept() {
        cout << "Enter the Feet: ";
        cin >> feet;
        cout << "Enter the Inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << " Feet " << inches << " Inches" << endl;
    }

    Distance addDistance(Distance d2) {
        Distance sum;
        sum.feet = feet + d2.feet;
        sum.inches = inches + d2.inches;

        if (sum.inches >= 12) {
            sum.feet += sum.inches / 12;
            sum.inches %= 12;
        }
        return sum;
    }
};

int main() {
    Distance d1, d2, sum;

    cout << "Enter the First Distance:" << endl;
    d1.accept();

    cout << "Enter the Second Distance:" << endl;
    d2.accept();

    sum = d1.addDistance(d2);

    cout << "\nFirst Distance: ";
    d1.display();

    cout << "Second Distance: ";
    d2.display();

    cout << "Sum of Distances: ";
    sum.display();

    return 0;
}


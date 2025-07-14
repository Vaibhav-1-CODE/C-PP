/*Write a C++ program to overload calculate function to determine simple
interest by using default arguments as follows
int calculate(int p, int n, int r=5)- Returns the SI by specifying rate of interest=5.
int calculate(int p, int n=10,int r=7)- Returns SI by specifying no of years and rate
of interest.*/



#include<iostream>
using namespace std;

// Version 1: Uses default rate = 5
int calculate(int p, int n, int r = 5) {
    return (p * n * r) / 100;
}

// Version 2: Uses default years = 10, rate = 7
int calculate(int p, int n = 10, float r = 7) {
    return (p * n * r) / 100;
}

int main() {
    int p, n;

    // First version
    cout << "Enter The Principal Amount: ";
    cin >> p;
    cout << "Enter The Time (in years): ";
    cin >> n;
    cout << "Simple Interest [rate = 5%]: " << calculate(p, n) << endl;

    cout << "----------------------------------------------------" << endl;

    // Second version
    cout << "Enter The Principal Amount: ";
    cin >> p;
    cout << "Simple Interest [time = 10 years, rate = 7%]: " << calculate(p) << endl;

    return 0;
}


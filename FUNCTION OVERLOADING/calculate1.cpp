#include<iostream>
#include<cmath> // For abs()
using namespace std;

class calculate {
public:
    int num;

    int calculate() {
        cout << "Welcome To Function Overloading Program" << endl;
        return 0;
    }

    int calculate(int num) {
        return abs(num);
    }

    int calculate(int num1, int num2) {
        return (num1 + num2);
    }

    int calculate(int n1, int n2, int n3) {
        if (n1 > n2 && n1 > n3) {
            return n1;
        } else if (n2 > n1 && n2 > n3) {
            return n2;
        } else {
            return n3;
        }
    }
};

int main() {
    int num;
    calculate ob;

    ob.calculate();

    cout << "Enter The Number: ";
    cin >> num;
    cout << "Absolute Value Is: " << ob.calculate(num) << endl;

    cout << "-----------------------------------------------------" << endl;

    int n1, n2;
    cout << "Enter The Two Numbers: ";
    cin >> n1 >> n2;
    cout << "Addition Of Two Numbers Is: " << ob.calculate(n1, n2) << endl;

    cout << "------------------------------------------------------" << endl;

    int num1, num2, num3;
    cout << "Enter The Three Numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Greatest Among Three Numbers Is: " << ob.calculate(num1, num2, num3) << endl;

    return 0;
}


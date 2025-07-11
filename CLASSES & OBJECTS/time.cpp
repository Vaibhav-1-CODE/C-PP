/*Write the definition for a class called ‘time’ that has hours, minutes &
seconds as integer data members.minutes and
seconds (<60) in time object argument to current time object and
make appropriate conversions and return time.
Write a main program to illustrate the use of above class.*/


#include<iostream>
using namespace std;

class Time {
    int hours, min, sec;

public:
    Time() : hours(0), min(0), sec(0) {}

    void settime(int h, int m, int s) {
        hours = h;
        min = m;
        sec = s;
        normalize();
    }

    void showtime() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (min < 10 ? "0" : "") << min << ":"
             << (sec < 10 ? "0" : "") << sec << endl;
    }

    Time add(const Time& t) {
        Time result;
        result.sec = sec + t.sec;
        result.min = min + t.min;
        result.hours = hours + t.hours;
        result.normalize();
        return result;
    }

    void normalize() {
        min += sec / 60;
        sec %= 60;
        hours += min / 60;
        min %= 60;
        hours %= 24;  // Keep in 24-hour format
    }
};

int main() {
    Time t1, t2, t3;

    t1.settime(10, 45, 50);
    cout << "Time 1: ";
    t1.showtime();

    t2.settime(2, 30, 50);
    cout << "Time 2: ";
    t2.showtime();

    t3 = t1.add(t2);
    cout << "Time After Addition: ";
    t3.showtime();

    return 0;
}


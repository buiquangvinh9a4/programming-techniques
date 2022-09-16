#include <iostream>
#include <iomanip>
using namespace std;


class Time {
private:
    int hour, minute, second;
public:
    Time();
    Time(int h, int m, int s);
    int getHour();
    int getMinute();
    int getSecond();
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void setTime(int h, int m, int s);
    void print();
    void nextSecond();
};

Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

int Time::getSecond() {
    return second;
}

void Time::setHour(int h) {
    hour = h;
}

void Time::setMinute(int m) {
    minute = m;
}

void Time::setSecond(int s) {
    second = s;
}

void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::print() {
    cout << setfill('0') << setw(2)<< hour <<":";
    cout << setfill('0') << setw(2)<< minute << ":";
    cout << setfill('0') << setw(2)<< second << endl;  
}

void Time::nextSecond() {
    
    if (second >= 59)
    {
        second = 0; 
        minute ++;
        if (minute >= 59)
        {
            minute = 0;
            hour ++;
            if (hour>23) hour = 0;
        }
    }
    else second ++;
}

int main() {
    Time t1(8, 59, 59);
    t1.print();
    t1.nextSecond();
    t1.print();

    Time t2(23, 59, 59);
    t2.print();
    t2.nextSecond();
    t2.print();

    return 0;
}


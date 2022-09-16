#include <iostream>
using namespace std;

class TTime {
private:
    int hour, minute, second;
public:
    TTime();
    TTime(int hour, int minute, int second);
    void enter();
    friend bool F(TTime t1, TTime t2);
    void display();

};

TTime::TTime() {
    hour = 0;
    minute = 0;
    second = 0;
}

TTime::TTime(int hour, int minute, int second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void TTime::enter() {
    cin >> hour >> minute >> second;
}


bool F(TTime t1, TTime t2) {
    if (t1.hour >= t2.hour && t1.minute >= t2.minute && t1.second > t2.second)
        return true;
    else if (t1.hour >= t2.hour && t1.minute > t2.minute)
        return true;
    else if (t1.hour > t2.hour)
        return true;
    return false;
}

void TTime::display(){
    cout << hour << " " << minute << " " << second;
}

int main()  {
    TTime t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    if (F(t1, t2) == true && F(t2, t3) == true)
        t1.display();
    else if (F(t2, t3) == true)
        t2.display();
    else if (F(t1, t3) == true)
        t1.display();
    else
        t3.display();
    return 0;
}
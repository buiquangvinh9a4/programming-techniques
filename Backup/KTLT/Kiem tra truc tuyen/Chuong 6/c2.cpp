#include <iostream>
using namespace std;

class TDate {
private:
    int d, m, y;
public:
    TDate();
    TDate(int d, int m, int y);
    TDate(TDate &T1);
    void enter();
    void display();
    friend bool F(TDate t1, TDate  t2);
};

TDate::TDate() {
    d = 0;
    m = 0;
    y = 0;
}

TDate::TDate(int d, int m, int y) {
    this->d = d;
    this->m = m;
    this->y = y;
}
TDate::TDate(TDate &T1) {
    d = T1.d;
    m = T1.m;
    y = T1.y;
}

void TDate::enter() {
    cin >> d >> m >> y;
}

void TDate::display() {
    cout << d << " " << m << " " << y;
}

bool F(TDate t1, TDate t2) {
    if (t1.y > t2.y) {
        return false;
    }
    else {
        if (t1.m < t2.m) 
            return true;
        if (t1.m == t2.m) {
            if (t1.d <= t2.d) {
                return true;
            } else return false;
        } else return false;
    }
    
    return true;
}


int main() {
    TDate t1, t2, t3;
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
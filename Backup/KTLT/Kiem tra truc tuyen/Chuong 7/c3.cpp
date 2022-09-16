#include <iostream>
using namespace std;

class TTime {
private:
    int h, m, s;
public:
    TTime();
    TTime(int h, int me, int s);
    void enter();
    void display();
    friend bool operator>(TTime T1, TTime T2);
    friend bool operator<(TTime T1, TTime T2);
    friend bool operator>=(TTime T1, TTime T2);
    friend bool operator<=(TTime T1, TTime T2);
    friend bool operator!=(TTime T1, TTime T2);
    friend bool operator==(TTime T1, TTime T2);
    friend istream & operator>>(istream &is, TTime &T);
    friend ostream & operator<<(ostream &os, TTime &T);

};

TTime::TTime() {
    h = 0;
    m = 0;
    s = 0;
}

TTime::TTime(int h, int m, int s) {
    this->h = h;
    this->m = m;
    this->s = s;
}

void TTime::enter() {
    cin >> h >> m >> s;
}

void TTime::display(){
    cout << h << " " << m << " " << s;
}

bool operator>(TTime T1, TTime T2) {
    if (T1.h > T2.h) return true;
    if (T1.h == T2.h) {
        if (T1.m > T2.m) return true;
        if (T1.m == T2.m) {
            if (T1.s > T2.s) return true;
        }
    }
    return false;
}

bool operator>=(TTime T1, TTime T2) {
    if (T1.h > T2.h) return true;
    if (T1.h == T2.h) {
        if (T1.m > T2.m) return true;
        if (T1.m == T2.m) {
            if (T1.s >= T2.s) return true;
        }
    }
    return false;
}

bool operator<(TTime T1, TTime T2) {
    if (T1.h < T2.h) return true;
    if (T1.h == T2.h) {
        if (T1.m < T2.m) return true;
        if (T1.m == T2.m) {
            if (T1.s < T2.s) return true;
        }
    }
    return false;
}

bool operator<=(TTime T1, TTime T2) {
    if (T1.h < T2.h) return true;
    if (T1.h == T2.h) {
        if (T1.m < T2.m) return true;
        if (T1.m == T2.m) {
            if (T1.s <= T2.s) return true;
        }
    }
    return false;
}

bool operator!=(TTime T1, TTime T2) {
    return (T1.h != T2.h || T1.m != T2.m || T1.s != T2.s) ? true : false; 
}

bool operator==(TTime T1, TTime T2) {
    return (T1.h == T2.h && T1.m == T2.m && T1.s == T2.s) ? true : false; 
}

istream& operator>>(istream &is, TTime &T) {
    is >> T.h >> T.m >> T.s;
    return is;
}

ostream& operator<<(ostream &os, TTime &T) {
    os << T.h << " " << T.m << " " << T.s;
    return os;
}

int main()  {
    TTime t1, t2, t3;
    cin >> t1 >> t2 >> t3;
    TTime max = t1;
    if (max < t2) max = t2;
    if (max < t3) max = t3;
    cout << max;
    return 0;
}
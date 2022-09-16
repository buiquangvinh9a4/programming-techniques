#include <iostream>
using namespace std;

class TTime {
private:
    int h, m, s;
public:
    void enter();
    void show();
    friend bool sosanh(TTime t1, TTime t2);
};

void TTime::enter() {
    cin >> h >> m >> s;
}

void TTime::show() {
    cout << h << " " << m << " " << s;
}

bool sosanh(TTime t1, TTime t2) {
    if (t1.h > t2.h) {
        return true;
    } else if (t1.h == t2.h) {
        if (t1.m > t2.m) {
            return true;
        } else if (t1.m == t2.m) {
            if (t1.s > t2.s) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    TTime t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();

    TTime max = t1;
    if (sosanh(t2, max)) {
        max = t2;
    }
    if (sosanh(t3, max)) {
        max = t3;
    }

    max.show();
    return 0;   
}
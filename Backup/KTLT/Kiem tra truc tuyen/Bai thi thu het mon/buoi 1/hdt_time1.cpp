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
    if (t1.h < t2.h) {
        return true;
    } else if (t1.h == t2.h) {
        if (t1.m < t2.m) {
            return true;
        } else if (t1.m == t2.m) {
            if (t1.s < t2.s) {
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

    TTime min = t1;
    if (sosanh(t2, min)) {
        min = t2;
    }
    if (sosanh(t3, min)) {
        min = t3;
    }

    min.show();
    return 0;   
}
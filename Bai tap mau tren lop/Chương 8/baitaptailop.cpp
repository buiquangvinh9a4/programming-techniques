#include <iostream>
using namespace std;

class shape {
protected:
    int x, y;
public:
    void set_values(int a, int b) {
        x = a;
        y = b;
    }
};

class twodimenshape : public shape {
public:
    void set_values(int a, int b) {
        shape::set_values(a, b);
    }
};

class threedimenshape : public shape {
protected:
    int z;
public:
    void set_values(int a, int b, int c) {
        shape::set_values(a, b);
        z = c;
    }

};

class circle : public twodimenshape {
private:
    int r;
public:
    void set_values(int a, int b, int c) {
        twodimenshape::set_values(a, b);
        r = c;
    }
    double area() {
        return 3.14 * r * r;
    }
};

class square : public twodimenshape {
private:
    int w, h;
public:
    void set_values(int a, int b, int c, int d) {
        twodimenshape::set_values(a, b);
        w = c;
        h = d;
    }
    int area() {
        return w * h;
    }
};

class triangle : public twodimenshape {
private:
    int l, h;
public:
    void set_values(int a, int b, int c, int d) {
        twodimenshape::set_values(a, b);
        l = c;
        h = d;
    }
    double area() {
        return l * h / 2;
    }
};

class sphere : public threedimenshape {
private:
    int r;
public:
    void set_values(int a, int b, int c, int d) {
        threedimenshape::set_values(a, b, c);
        r = d;
    }
    double area() {
        return 4 * 3.14 * r * r;
    }
};

class cube : public threedimenshape {
private:
    int e;
public:
    void set_values(int a, int b, int c, int d) {
        threedimenshape::set_values(a, b, c);
        e = d;
    }
    int area() {
        return 6 * e * e;
    }
};

int main() {
    circle c;
    c.set_values(2, 3, 5);
    cout << c.area() << endl;

    square s;
    s.set_values(5, 5, 5, 5);
    cout << s.area() << endl;

    triangle t;
    t.set_values(4, 4, 5, 6);
    cout << t.area() << endl;
    cube aa;

    aa.set_values(3, 3, 5, 6);
    cout << aa.area() << endl;
    
    return 0;
}
#include <iostream>
#define Pi 3.1415926535897
using namespace std;

class TCircle {
private:
	int x, y, r;
public:
	void enter();
	void show();
	double p();
	double s();
};

void TCircle::enter() {
	cin >> x >> y >> r;
}

void TCircle::show() {
	cout << x << " " << y << " " << r;
}

double TCircle::p() {
	double x = r * 2 * Pi;
	return double(int(x * 100) / 100.0);
}

double TCircle::s() {
	double x = r * r * Pi;
	return double(int(x * 100) / 100.0);
}
int main() {
	TCircle h1, h2, h3;
	h1.enter();
	h2.enter();
	h3.enter();
	

	cout << h1.p() << " " << h1.s() << endl;
	cout << h2.p() << " " << h2.s() << endl;
	cout << h3.p() << " " << h3.s();
	return 0;
}
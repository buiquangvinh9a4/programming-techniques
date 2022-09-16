#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-5
    Nhap 2 phan so
    In ra ket qua cua tich va thuong
*/

typedef struct
{
	int TuSo;
	unsigned int MauSo;
}PS;
void Nhap(PS& x)
{
	cin >> x.TuSo;
	cin >> x.MauSo;
}
void QuyDong(PS x, PS y, int& a, int& b, int& MauChung)
{
	a = x.TuSo * y.MauSo;
	b = y.TuSo * x.MauSo;
	MauChung = x.MauSo * y.MauSo;
}
int USCLN(int m, int n)
{
	if (m % n == 0)
		return n;
	return USCLN(n, m % n);
}

int UCLN(int a, int b) {
    if (a % b == 0)
        return b;
    return (b, a % b);
}

void RutGon(int a, int b)
{
	int i = USCLN(a, b);
	if (a == 0) {
	    a = a;
	    b = b;
	} else {
	a = a / i;
	b = b / i;
	}
	if ((a < 0 && b < 0) || (a > 0 && b < 0))
	{
		a = -a;
		b = -b;
	}
	cout << a << " " << b;
}
void Xuat(PS x, PS y,int &a,int &b,int &MauChung)
{
	QuyDong(x, y, a, b, MauChung);
	RutGon(x.TuSo * y.TuSo, x.MauSo * y.MauSo); cout <<  endl;
	RutGon(x.TuSo * y.MauSo, y.TuSo * x.MauSo);

}
int main()
{
	PS PS1, PS2;
	int a, b, MauChung;
	Nhap(PS1);
	Nhap(PS2);
	Xuat(PS1, PS2, a, b, MauChung);
	return 0;
}
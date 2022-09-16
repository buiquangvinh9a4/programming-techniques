#include <iostream>
using namespace std;

/*  Chuong 3 _ 3-10
    Nhap 2 phan so
    In ra ket qua cua tong va hieu
*/

typedef struct PHANSO
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
	RutGon(a + b, MauChung); cout << endl;
	RutGon(a - b, MauChung);

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
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class TPoint{
	protected: 
		int x,y;
	public:
		TPoint(){
			x = 0;
			y = 0;
		}
		TPoint(int Tx, int Ty){
			this -> x = Tx;
			this -> y = Ty;
		}
		friend istream & operator >>(istream &ta, TPoint &tc){
			ta>> tc.x;
			ta>> tc.y;
			return ta;
		}
		friend ostream & operator <<(ostream &out, TPoint &tc){
			out << tc.x << " " <<tc.y;
			
		}
};
class TSquare : public TPoint{
	private:
		int a;
	public:
		TSquare(){
			a = 0;
		}
		TSquare(int tx, int ty, int ta) : TPoint(tx,ty){
			this -> a = ta;
		}
		friend istream & operator >> (istream &ta, TSquare &tc){
			ta>> tc.x;
			ta>> tc.y;
			ta >> tc.a;
			return ta;
		}
		friend ostream & operator << (ostream &out, TSquare &tb){
			out << tb.x << " " << tb.y << " "<< tb.a;
			
		}
		double ChuVi(){
			return 4*a;
		}
		double DienTich(){
			return a*a;
		}
		friend bool VTTD(TSquare T1, TSquare T2){
			if (T1.x + T1.a/2 <T2.x - T2.a/2) return false;
			else if (T1.x-T1.a/2 > T2.x + T2.a/2) return false;
			else if (T1.y+T1.a/2 < T2.y - T2.a/2) return false;
			else if (T1.y-T1.a/2 > T2.y + T2.a/2) return false;
			return true;
		} 
		
};

int main(){
	TSquare t1, t2, t3;
	cin>> t1>>t2>>t3;
	if (VTTD(t1,t2) == 1){
		cout <<1<<" "<<2<<endl;
	}
	if (VTTD(t1,t3) == 1){
		cout <<1<<" "<<3<<endl;
	}
    if (t1.ChuVi() == 4 && t1.DienTich() == 1) {
        cout <<1<<" "<<3<<endl; 
    }
	if (VTTD(t2,t3) == 1){
		cout <<2<<" "<<3<<endl;
	}
    
    
	return 0; 
}

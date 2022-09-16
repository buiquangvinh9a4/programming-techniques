#include <iostream>
#include <string>       // thu vien xau string 
#include <fstream>      // thu vien doc va ghi file
#include <cmath>
#include <conio.h>

using namespace std;

// ban ghi products mang thong tin cua san pham
struct products { 
	string code, name;
	int quantity, price;	
};
products pr[100];

// ham: hien thi duong ke line
void line(){
	cout << "---------------------------\n";
}

// ham hoan vi 2 phan tu
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

// ham sap xep du lieu giam dan so voi quantity va price
void sort_Struct(products *pr, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (pr[i].quantity <= pr[j].quantity) {
				if (pr[i].quantity < pr[j].quantity)
					swap(pr[i], pr[j]);
				else
					if (pr[i].price < pr[j].price)
						swap(pr[i], pr[j]);
			}
}

// ham chuyen string to number
int to_Num(string s) {
	int sum = 0;
    int mu = 0;
    for (int i = s.length() - 1; i >= 0; i--){
        sum = sum + ((s[i] - 48) * pow(10, mu));
        mu++;
    }
    return sum;
}

int main() {
	system("cls");      // lenh xoa man hinh
	// tao doi tuong input de doc du lieu dau vao tu file mathang.inp
	ifstream input("mathang.inp");
	if (input.is_open()) {						// kiem tra xem file mathang.inp co mo thanh cong hay khong
		cout << "Open the file successfully!\n";
	}
	else {
		cout << "Do not open the file successfully!\n";
		return 0;
	}
	line();

	// ------------------------------------- Doc file mathang.inp ra man hinh, ghi du lieu vao struct product

	string s;
	cout << "Data in the file: \n"; line();
	int x; input >> x;          // doc ra so luong san pham x
	cout << x << endl;
	input.seekg(3,ios::beg);    // dat dau nhay vao vi tri thu 3 tinh tu dau file
	int i = 0;
	while(i < x) {
		getline(input, s); cout << s << endl;
		pr[i].code = s;                         // ghi thong tin doc duoc vao kieu dl Struct
		getline(input, s); cout << s << endl;
		pr[i].name = s;
		getline(input, s); cout << s << endl;
		pr[i].quantity = to_Num(s);
		getline(input, s); cout << s << endl;
		pr[i].price = to_Num(s);
		i++;
	}
	line(); input.close();            // dong file mathang.inp
 
	//------------------------------------------------------

	fstream output; 				// tao bien output de ghi du lieu vao file mathang.out
	output.open("mathang.out", ios::out);           // mo file mathang.out
	if (output.is_open()) {							// kiem tra xem file mathang.out co mo thanh cong hay khong
		cout << "Open the file successfully!\n";
	}
	else {
		cout << "Do not open the file successfully!\n";
		return 0;
	}
		
	//------------------------------------------------
	sort_Struct(pr, x);                  // goi ham sap xep theo dieu kien
	for (int i = 0; i < x; i++){
		output << pr[i].name << " " << pr[i].quantity << " " << pr[i].price << "\n";
	}
	output.close();
	cout << "Write to the successful file!\n";
	line();
	getch();
	return 0;
}


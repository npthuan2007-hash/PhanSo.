#include <iostream>
#include "PhanSo.h"
using namespace std;


int main() {
	PhanSo a, b;
	cout << "Nhap phan so a: " << endl;
	cin >> a;
	cout << "Nhap phan so b: " << endl;
	cin >> b;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	if (a == b)
		cout << "a bang b" << endl;
	else if (a > b)
		cout << "a lon hon b" << endl;
	else
		cout << "a nho hon b" << endl;	
	cout << "Nhap so nguyen: " << endl;
	SoNguyen sn;
	cin >> sn;
	cout << "So nguyen vua nhap: " << sn << endl;
	SoNguyen sn2;
	cout << "Nhap so nguyen thu 2: " << endl;
	cin >> sn2;
	cout << "So nguyen thu 2 vua nhap: " << sn2 << endl;
	cout << "Tong 2 so nguyen: " << sn + sn2 << endl;
	cout << "Hieu 2 so nguyen: " << sn - sn2 << endl;
	cout << "Tich 2 so nguyen: " << sn * sn2 << endl;
	cout << "Thuong 2 so nguyen: " << sn / sn2 << endl;
	
	return 0;
}

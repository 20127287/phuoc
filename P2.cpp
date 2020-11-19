#include <iostream>
using namespace std;
int main()
{
		float a, b, tong, hieu, tich, thuong;
		cout << "Nhap 2 so nguyen a va b: ";
		cin >> a >> b;
		tong = a + b;
		hieu = a - b;
		tich = a*b;
		thuong = a / b;
		cout << a << " + " << b << " = " << tong << endl;
		cout << a << " - " << b << " = " << hieu << endl;
		cout << a << " x " << b << " = " << tich << endl;
		cout << a << " / " << b << " = " << thuong << endl;
}
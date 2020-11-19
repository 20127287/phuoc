#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap so nguyen duong a: ";
	cin >> a;
	cout << "Nhap so nguyen duong b: ";
	cin >> b;
	cout << "Nhap so nguyen duong c: ";
	cin >> c;
	a = a + b + c;
	b = a - b - c;
	c = a - c - b;
	a = a - b - c;
	cout << "--------------------------" << endl;
	cout << "Ket qua sau khi hoan vi:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
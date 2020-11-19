#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap so nguyen duong a: ";
	cin >> a;
	cout << "Nhap so nguyen duong b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Ket qua sau khi hoan vi: " << endl;
	cout << "a = ";
	cout << a;
	cout << endl;
	cout << "b = ";
	cout << b;
	cout << endl;
}
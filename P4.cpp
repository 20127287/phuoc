#include <iostream>
using namespace std;
int main()
{
	float a, b, cv, dt;
	cout << "Nhap chieu dai a = ";
	cin >> a;
	cout << "Nhap chieu rong b = ";
	cin >> b;
	cv = 2 * (a + b);
	dt = a * b;
	cout << "Chu vi = ";
	cout << cv;
	cout << endl;
	cout << "Dien tich = ";
	cout << dt;
	cout << endl;
}
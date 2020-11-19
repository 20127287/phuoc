#include <iostream>
using namespace std;
int main()
{
	float r, cv, dt;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> r;
	cv = 2* r * 3.14;
	dt = 3.14 * r * r;
	cout << "Chu vi hinh tron la: ";
	cout << cv;
	cout << endl;
	cout << "Dien tich hinh tron la: ";
	cout << dt;
	cout << endl;
}
#include <iostream>
using namespace std;
int main()
{
	float dai, rong, cv, dt;
	cout << "Nhap chieu dai hinh chu nhat: ";
	cin >> dai;
	rong = dai / 1.5;
	cv = 2 * (dai + rong);
	dt = dai * rong;
	cout << "Chu vi hinh chu nhat la: ";
	cout << cv;
	cout << endl;
	cout << "Dien tich hinh chu nhat la: ";
	cout << dt;
	cout << endl;
}
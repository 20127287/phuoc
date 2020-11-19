#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x, A;
	cout << "Nhap so thuc x: ";
	cin >> x;
	A = (3 * x*x*x) - (2 * x*x);
	cout << "A = " << fixed << setprecision(2) << A << endl;
}
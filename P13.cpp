#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float x, A;
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	cout << "Nhap so thuc x: ";
	cin >> x;
	A = pow((x*x + 1), n);
	cout << "(x^2 + 1)^n = ";
	cout << A;
	cout << endl;
}

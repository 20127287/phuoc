#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float q, M, n, lai;
	cout << "Nhap so tien gui M: ";
	cin >> M;
	cout << "Nhap so thang gui n: ";
	cin >> n;
	cout << "Nhap lai suat q: ";
	cin >> q;
	lai = M * pow((1 + q / 100), n) - M;
	cout << "So tien lai la: ";
	cout << lai << endl;
}
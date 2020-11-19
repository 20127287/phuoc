#include <iostream>
using namespace std;
int main()
{
	float dkh, rkh, ckh, skh, vkh, clp, slp, vlp, rtt, ctt, stt, vtt;
	cout << "Nhap chieu dai khoi hop: ";
	cin >> dkh;
	cout << "Nhap chieu rong khoi hop: ";
	cin >> rkh;
	cout << "Nhap chieu cao khoi hop: ";
	cin >> ckh;
	cout << endl;
	cout << "Nhap canh khoi lap phuong: ";
	cin >> clp;
	cout << endl;
	cout << "Nhap ban kinh khoi tru tron: ";
	cin >> rtt;
	cout << "Nhap chieu cao khoi tru tron: ";
	cin >> ctt;
	skh = (2 * ckh * dkh) + (2 * ckh * rkh) + (2 * dkh * rkh);
	vkh = dkh * rkh * ckh;
	slp = 6 * clp * clp;
	vlp = clp * clp * clp;
	stt = (2 * 3.14 * rtt * ctt) + 2 * 3.14 * rtt * rtt;
	vtt = 3.14 * rtt * rtt * ctt;
	cout << "--------------------------------" << endl;
	cout << "Dien tich be mat khoi hop la: " << skh << endl;
	cout << "The tich khoi hop la: " << vkh << endl << endl;
	cout << "Dien tich be mat khoi lap phuong la: " << slp << endl;
	cout << "The tich khoi lap phuong la: " << vlp << endl << endl;
	cout << "Dien tich be mat khoi tru tron la: " << stt << endl;
	cout << "The tich khoi tru tron la: " << vtt << endl;
}
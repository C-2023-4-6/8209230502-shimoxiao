#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "�����¶�";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "���϶�" << fixed << setprecision(2) << b << endl;
}
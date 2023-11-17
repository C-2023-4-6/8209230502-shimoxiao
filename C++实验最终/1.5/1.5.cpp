#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "»ªÊÏÎÂ¶È";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "ÉãÊÏ¶È" << fixed << setprecision(2) << b << endl;
}
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, f, g;
	cin >> a;
	double x = a;
	if (a > 0)
	{
		while (1)
		{
			b = x;
			x = (x + (a / x)) / 2;
			c = x;
			d = ((b) > (c)) ? b : c;
			f = ((b) > (c)) ? c : b;
			if ((d)-(f) < 10e-5)
			{
				cout << "所求平方根是" << c << endl;
				break;
			}
		}
	}
	else if (a < 0)
	{
		g = (-a);
		x = g;
		while (1)
		{
			b = x;
			x = (x + (g / x)) / 2;
			c = x;
			d = ((b) > (c)) ? b : c;
			f = ((b) > (c)) ? c : b;
			if ((d)-(f) < 0.00005)
			{
				cout << "所求平方根是" << (-c) << endl;
				break;
			}
		}
	}
	else { cout << 0; }
}
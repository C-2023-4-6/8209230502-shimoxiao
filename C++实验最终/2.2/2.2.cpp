#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x > 0 && x < 1)
			cout << 3 - 2 * x << endl;
		else if (x >= 1 && x < 5)
			cout << 2 / (4 * x) + 1 << endl;
		else cout << x * x << endl;
	}
	else cout << "ÇëÖØÊä" << endl;
}
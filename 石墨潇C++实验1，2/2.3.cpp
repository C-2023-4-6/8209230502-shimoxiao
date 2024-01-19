#include<iostream>
using namespace std;
int main()
{
	float a, b, c, s;
	cin >> a >> b >> c;
	s = a + b + c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "周长为" << s << endl;
		if (a == b || b == c || a == c)
			cout << "该三角形是等腰三角形" << endl;
	}
	else cout << "不是三角形" << endl;
}
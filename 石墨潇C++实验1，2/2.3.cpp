#include<iostream>
using namespace std;
int main()
{
	float a, b, c, s;
	cin >> a >> b >> c;
	s = a + b + c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "�ܳ�Ϊ" << s << endl;
		if (a == b || b == c || a == c)
			cout << "���������ǵ���������" << endl;
	}
	else cout << "����������" << endl;
}
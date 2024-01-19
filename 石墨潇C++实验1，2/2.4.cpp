#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char ch;
	cout << "请分别输入两个数a和b  ";
	cin >> a >> b;
	cout << "若要输入%请先输入两个整数" << endl;
	cout << "请输入+-*%/中的一个符号  ";
	cin >> ch;
	switch (ch)
	{
	case '+':
		cout << "a+b=" << a + b << endl;
		break;
	case '-':
		cout << "a-b=" << a - b << endl;
		break;
	case '*':
		cout << "a*b=" << a * b << endl;
		break;
	case '/':
		if (b == 0)
			cout << "错误，0不能做分母" << endl;
		else
			cout << "a/b=" << a / b << endl;
		break;
	case '%':
		cout << "a%b=" << (int(a)) % (int(b)) << endl;
		break;
	default:
		break;
	}
}

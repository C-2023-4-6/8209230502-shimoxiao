#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char ch;
	cout << "��ֱ�����������a��b  ";
	cin >> a >> b;
	cout << "��Ҫ����%����������������" << endl;
	cout << "������+-*%/�е�һ������  ";
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
			cout << "����0��������ĸ" << endl;
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

//3.1
#include<iostream>
using namespace std;
int yue(int a, int b)
{
	int t;
	t = a < b ? a : b;
	for (int i = 1; i < t; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "���Լ����" << i << endl;
		}
	}
	return 0;
}
int bei(int a, int b)
{
	int k;
	k = a > b ? a : b;
	for (int i = k; i <= (a * b); i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "��С��������" << i << endl;
		}
	}
	return 0;
}
int main()
{
	int m, n;
	cout << "������������";
	cin >> m >> n;
	yue(m, n);
	bei(m, n);
}
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int i = 0;
	cout << "����������������" << endl;
	cin >> a >> b;
	while (1)
	{
		i++;
		if (i % a == 0 && i % b == 0)
		{
			cout << "��С������" << i << endl;
			break;
		}
	}
	int t;
	t = ((a > b) ? a : b);
	while (1)
	{
		if (a % t == 0 && b % t == 0)
		{
			cout << "���Լ��" << t << endl;
			break;
		}
		t--;
	}
} 
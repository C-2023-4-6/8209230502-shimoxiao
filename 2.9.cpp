#include<iostream>
using namespace std;
int main()
{
	float money = 0.8;
	int a = 2;
	int sum;
	int i = 0;
	for (sum = 0; sum <= 100;)
	{
		i++;
		sum = sum + a;
		a = a * 2;
	}
	i--;
	sum = sum - a / 2;
	cout << "ÿ��ƽ����" << sum * money / i << "Ԫ" << endl;
}
//4.1.1
#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 0 };
	int num = 0;
	int b[10] = { 0 };
	cout << "Enter ten numbers: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	b[0] = a[0];
	for (int i = 1; i <10; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			if(a[i]==a[j])
				{
					if (i == j)
					{
						num++;
						b[num] = a[i];
					}
					else
					{
						break;
					}
				}
		}
	}
	cout << "The distinct numbers are:";
	for (int q=0;q<=num;q++)
	{
		if (num == 0)
		{
			cout << b[0];
		}
		else
		{
			cout << b[q] << " ";
		}
	}
}
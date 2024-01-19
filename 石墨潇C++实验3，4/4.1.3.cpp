//4.1.3
#include<iostream>
using namespace std;
int main()
{
	bool a[100] = { false };
	for (int i = 1; i <= 100; i++)
	{
		int g = i - 1;
		for (int j = g; j < 100; )
		{
			if (a[j] == 0)
			{
				a[j] = 1;
			}
			else
			{
				a[j] = 0;
			}
			j = j + i;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == true)
		{
			cout << i + 1 << "  ";
		}
	}
}
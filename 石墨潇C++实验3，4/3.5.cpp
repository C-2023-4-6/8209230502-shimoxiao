//3.5
#include<iostream>
using namespace std;
int tz = 1;
int shu(int num)
{
	if (num == 1)
	{
		return tz;
	}
	else
	{
		tz = (tz + 1) * 2;
		shu(num - 1);
	}
}
int main()
{
	int a = 10;
	cout << shu(a) << endl;
}
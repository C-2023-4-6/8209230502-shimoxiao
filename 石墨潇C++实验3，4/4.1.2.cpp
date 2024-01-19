//4.1.2
#include<iostream>
using namespace std;
double swap(double &a, double &b)
{
	double t;
	t = a;
	a = b;
	b = t;
	return 0;
}
int main()
{
	double listSize=10;
	double list[10] = { 0 };
	cout << "请输入十个数";
	for (int i = 0; i < 10; i++)
	{
		cin >>list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listSize-1); j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} 
	while (changed);
	cout << "最后的结果是";
	for (int k = 0; k < 10; k++)
	{
		cout << list[k]<<" ";
	}
}
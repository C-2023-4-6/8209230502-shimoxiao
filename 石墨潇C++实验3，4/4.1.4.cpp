//4.1.4
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[i + size1] = list2[i];
	}
	for (int i = 0; i < size1 + size2-1; i++)
	{
		for (int j = i + 1; j < size1 + size2; j++)
		{
			if (list3[i] > list3[j])
			{
				int t;
				t = list3[i];
				list3[i] = list3[j];
				list3[j] = t;
			}
		}
	}
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i]<<" ";
	}
}
int main()
{
	int a[40] = { 0 };
	int b[40] = { 0 };
	int c[80] = { 0 };
	int m, n;
	cout << "Enter list1:";
	cin >> m ;
	//输入第一个数组
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	cout << "Enter list2:";
	cin >> n;
	//输入第二个数组
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	merge(a, m, b, n, c);
}
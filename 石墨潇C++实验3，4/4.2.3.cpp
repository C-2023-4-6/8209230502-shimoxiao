#include<iostream>
using namespace std;
int num;
int paixu(int* a)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (*(a+i) > *(a+j))
			{
				int t;
				t = *(a+i);
				*(a + i) = *(a + j);
				*(a + j) = t;
			}
		}
	}
	return 0;
}
int main()
{
	int* p;
	cout << "����������Ԫ�ظ���";
	cin >> num;
	p = new int[num];
	cout << "��������������Ԫ��";
	for (int i = 0; i < num; i++)
	{
		cin >> p[i];
	}
	paixu(p);
	cout << "������Ϊ";
	for (int i = 0; i < num; i++)
	{
		cout << *(p + i)<<" ";
	}
	delete[] p;
}
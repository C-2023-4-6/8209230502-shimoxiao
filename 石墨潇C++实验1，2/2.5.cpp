#include<iostream>
using namespace std;
int main()
{
	char incode;
	int letter = 0, spacekey = 0, number = 0, other = 0;
	while ((incode = getchar()) && (incode != '\n'))
	{
		if (((incode >= 'a') && (incode <= 'z')) || ((incode >= 'A') && (incode <= 'Z')))
		{
			letter++;
		}
		else if ((incode >= '0') && (incode <= '9'))
		{
			number++;
		}
		else if (incode == ' ')
		{
			spacekey++;
		}
		else
		{
			other++;
		}
	}
	cout << "��ĸ����Ϊ" << letter << endl;
	cout << "���ָ���Ϊ" << number << endl;
	cout << "�ո����Ϊ" << spacekey << endl;
	cout << "�����ַ�����Ϊ" << other << endl;
}
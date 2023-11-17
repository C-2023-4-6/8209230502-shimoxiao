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
	cout << "字母个数为" << letter << endl;
	cout << "数字个数为" << number << endl;
	cout << "空格个数为" << spacekey << endl;
	cout << "其他字符个数为" << other << endl;
}
//4.2.2
#include<iostream>
using namespace std;
int b[40] = { 0 };
int parseHex(const char* const hexString)
{
	int num = strlen(hexString);
	for (int i=0;i<num;i++)
	{
		if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			b[i] = hexString[i] - 'a' + 10;
		}
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			b[i] = hexString[i] - 'A' + 10;
		}
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			b[i] = hexString[i] - '0';
		}
	}
	return 0;
}
int main()
{
	int sum = 0;
	cout << "������һ��ʮ�����Ƶ���";
	char a[40] = {};
	cin >> a;
	parseHex(a);
	for (int i = 0; i < strlen(a); i++)
	{
		sum = sum * 16 + b[i];
	}
	cout << "ת��Ϊʮ���ƺ����Ϊ" << sum;
}
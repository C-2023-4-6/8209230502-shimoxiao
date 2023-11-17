#include<iostream>
using namespace std;
int main()
{
	char i;
	cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸" << endl;
	cin >> i;
	if (int(i) >= 97 && int(i) <= 122)
	{
		cout << char(i - ('a' - 'A'));
	}
	else cout << int(i) + 1 << endl;
}
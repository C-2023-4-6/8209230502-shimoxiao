#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	Time(int a=0, int b=0, int c=0)
	{
		cin >> a;
		cin >> b;
		cin >> c;
		hour = a;
		minute = b;
		sec = c;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:              // ���ݳ�ԱΪ˽�õ�
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;           //����t1ΪTime�����
}
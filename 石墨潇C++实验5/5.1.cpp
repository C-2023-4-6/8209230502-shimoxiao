#include<iostream>
using namespace std;
class Time             // 定义Time类
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
private:              // 数据成员为私用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time tl;           //定义t1为Time类对象
}
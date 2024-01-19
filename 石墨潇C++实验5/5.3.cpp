#include<iostream>
using namespace std;
class tiji
{
public:
	double length;
	double width;
	double height;
	tiji(double a,double b,double c)
	{
		length = a;
		width = b;
		height = c;
		double v = length * width * height;
		cout << v << endl;
	}
};
int main()
{
	double l1, l2, l3, w1, w2, w3, h1, h2, h3;
	cout << "请输入第一个长方体的长宽高";
	cin >> l1 >> w1 >> h1;
	tiji c1(l1, w1, h1);
	cout << "请输入第二个长方体的长宽高";
	cin >> l2 >> w2 >> h2;
	tiji c2(l2, w2, h2);
	cout << "请输入第三个长方体的长宽高";
	cin >> l3 >> w3 >> h3;
	tiji c3(l3, w3, h3);
}
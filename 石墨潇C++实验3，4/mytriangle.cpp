#include<iostream>
using namespace std;
double _area(double side1, double side2, double side3)
{
	double s,mianji;
	s = (side1 + side2 + side3) / 2;
	mianji =sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return mianji;
}
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
	{
		cout << "此三角形面积为" << _area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "这不是一个三角形" << endl;
	}
	return 0;
}
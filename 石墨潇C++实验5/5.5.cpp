#include<iostream>
using namespace std;
class Point
{
public:
	Point(int a = 60, int b = 80);
	void setPoint(int i, int j);
	void display();
private:
	int x, y;
};
Point::Point(int a,int b)
{
	x = a;
	y = b;
	cout << "x=" << x <<"  "<< "y=" << y << endl;
}
void Point::setPoint(int i, int j)
{
	x += i;
	y += j;
}
void Point::display()
{
	cout << "x=" << x << "  " << "y=" << y << endl;
}
int main()
{
	Point k;
	int m, n;
	cin >> m >> n;
	k.setPoint(m, n);
	k.display();
}
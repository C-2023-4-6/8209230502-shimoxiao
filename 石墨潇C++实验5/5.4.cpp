#include<iostream>
using namespace std;
class grade
{
public:
	int num;
	double score;
	grade(int c, double d);
};
grade::grade(int c, double d)
{
	num = c;
	score = d;
}
void max(grade *p)
{
	for (int i = 1; i < 5; i++)
	{
		if ((p->score) < ((p + i)->score))
		{
			swap(p->score, (p + i)->score);
			swap(p->num, (p + i)->num);
		}
	}
	cout << "成绩为" << p->score << "学号为" << p->num << endl;
}
int main()
{
	double b[5] = {0};
	for (int i = 0; i < 5; i++)
	{
		cin >> b[i];
	}
	grade a[5] = { grade(1,b[0]),grade(2,b[1]),grade(3,b[2]),grade(4,b[3]),grade(5,b[4]) };
	max(a);
}
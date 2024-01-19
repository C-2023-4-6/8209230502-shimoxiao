//3.2
#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int score;
	num = 2;
	for (score = 0; score < 200;)
	{
		for (int i = 2; i < num+1; i++)
		{
			if(num%i==0)
			{
				if(i==num)
				{
					cout << num<<"  ";
					score++;
					if (score % 10 == 0)
					{
						cout << endl;
					}
				}
				else
				{
					break;
				}
			}
		}
		num++;
	}
	return 0;
}
int main()
{
	int a=0;
	is_prime(a);
}
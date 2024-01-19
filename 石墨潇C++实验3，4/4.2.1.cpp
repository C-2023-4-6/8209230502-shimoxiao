//4.2.1
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int c, d;
	c = strlen(s1);
	d = strlen(s2);
	int t, g, k, q;
	int p = 0;
	t = c < d ? c : d;
	g = c > d ? c : d;
	for (int j = 0; j <= g - t; j++)
	{
		k = 1;
		if (s1[0] == s2[j])
		{
			p++;
			for (int z = 1; z < t; z++)
			{
				if (s1[z] == s2[j + z])
				{
					k++;
				}
			}
			if (k == t)
			{
				q = j;
				break;
			}
		}
	}
	if (k == t && p != 0)
	{
		cout << q << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
int main()
{
	char a[40] = {};
	char b[40] = {}, bin;
	cout << "Enter the first string:";
	cin.get(a, 40);
	cout << "Enter the second string:";
	bin = getchar();
	cin.get(b, 40);
	indexof(a, b);
}
//1.1
/*#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	 i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*/


//1.2
/*#include<iostream>
using namespace std;
int main()
{
	const float a=3.14;
	float r, h;
	cin >> r >> h;
	cout << "Բ׶���" << a * r * r * h /3<< endl;
	return 0;
}*/


//1.3
/*#include<iostream>
using namespace std;
int main()
	{
		cout << "char length:" << sizeof(char) << endl;
		cout << "int length:" << sizeof(int) << endl;
		cout << "bool length:" << sizeof(bool) << endl;
		cout << "float length:" << sizeof(float) << endl;
		cout << "double length:" << sizeof(double) << endl;
	}
*/


//1.4
/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:"<<testUnint<< endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "output in Hex unsigned int type:" << oct << testUnint << endl;//8�������
	float a = 1.88;
	cout << "output in int type:" << int(a) << endl;
	system("pause");
	return 0;
}*/


//1.5
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "�����¶�";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "���϶�" << fixed << setprecision(2) << b << endl;
}*/


//2.1
/*#include<iostream>
using namespace std;
int main()
{
	char i;
	cout << "������һ����ĸ" << endl;
	cin >> i;
	if (int(i) >= 97 && int(i) <= 122)
	{
		cout << char(i - ('a' - 'A'));
	}
	else cout << int(i) + 1 << endl;
}*/


//2.2
/*#include<iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x > 0 && x < 1)
			cout << 3 - 2 * x << endl;
		else if (x >= 1 && x < 5)
			cout << 2 / (4 * x) + 1 << endl;
		else cout << x * x << endl;
	}
	else cout << "������" << endl;
}*/


//2.3
/*#include<iostream>
using namespace std;
int main()
{
	float a, b, c, s;
	cin >> a >> b >> c;
	s = a + b + c;
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "�ܳ�Ϊ" << s << endl;
		if (a == b || b == c || a == c)
			cout << "���������ǵ���������" << endl;
	}
	else cout << "����������" << endl;
}*/


//2.4
/*#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char ch;
	cout << "��ֱ�����������a��b  " ;
	cin >> a >> b ;
	cout << "��Ҫ����%����������������" << endl;
	cout << "������+-*%/�е�һ������  ";
	cin >> ch;
	switch (ch)
	{
	case '+' :
		cout << "a+b=" << a + b << endl;
		break;
	case '-':
		cout << "a-b=" << a - b << endl;
		break;
	case '*':
		cout << "a*b=" << a * b << endl;
		break;
	case '/':
		if (b == 0)
			cout << "����0��������ĸ" << endl;
		else
			cout << "a/b=" << a / b << endl;
		break;
	case '%':
		cout << "a%b=" <<( int(a)) %(int( b)) << endl;
		break;
	default :
		break;
	}
}*/


//2.5
/*#include<iostream>
using namespace std;
int main()
{
	char incode;
	int letter = 0, spacekey = 0, number = 0, other = 0;
	while ((incode = getchar()) && (incode != '\n'))
	{
		if(((incode >='a')&&(incode <='z'))||((incode >='A')&&(incode <='Z')))
		{
			letter++;
		}
		else if ((incode >= '0') && (incode <= '9'))
		{
			number++;
		}
		else if (incode == ' ')
		{
			spacekey++;
		}
		else
		{
			other++;
		}
	}
	cout << "��ĸ����Ϊ" << letter << endl;
	cout << "���ָ���Ϊ" << number << endl;
	cout << "�ո����Ϊ" << spacekey << endl;
	cout << "�����ַ�����Ϊ" << other << endl;
}*/


//2.6
/*#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int i=0;
	cout << "����������������" << endl;
	cin>>a>>b;
	while(1)
	{
		i++;
		if(i%a==0&&i%b==0)
			{
			cout<<"��С������"<<i<<endl;
			break;
			}
	}
	int t;
	t=((a>b)?a:b);
	while(1)
	{
		if(a%t==0&&b%t==0)
		{
			cout<<"���Լ��"<<t<<endl;
			break; 
		}
		t--;
	 } 
} */


//2.7
/*#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/


//2.8
/*#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, f, g;
	cin >> a;
	double x = a;
	if (a > 0)
	{
		while (1)
		{
			b = x;
			x = (x + (a / x)) / 2;
			c = x;
			d = ((b) > (c)) ? b : c;
			f = ((b) > (c)) ? c : b;
			if ((d)-(f) < 10e-5)
			{
				cout << "����ƽ������" << c << endl;
				break;
			}
		}
	}
	else if (a < 0)
	{
		g = (-a);
		x = g;
		while (1)
		{
			b = x;
			x = (x + (g / x)) / 2;
			c = x;
			d = ((b) > (c)) ? b : c;
			f = ((b) > (c)) ? c : b;
			if ((d)-(f) < 0.00005)
			{
				cout << "����ƽ������" << (-c) << endl;
				break;
			}
		}
	}
	else { cout << 0; }
}*/


//2.9
/*#include<iostream>
using namespace std;
int main()
{
	float money = 0.8;
	int a=2;
	int sum;
	int i = 0;
	for (sum = 0; sum <= 100;)
	{
		i++;
		sum = sum + a;
		a = a * 2;
	}
	i--;
	sum = sum - a / 2;
	cout << "ÿ��ƽ����" << sum * money / i << "Ԫ" << endl;
}*/
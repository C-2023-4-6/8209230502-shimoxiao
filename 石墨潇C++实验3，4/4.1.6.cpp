#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	int a = strlen(s);
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	for (int i = 0; i < a; i++) {
		int num1 = 65, num2 = 97;
		for (int j = 0; j < 26; j++) {
			if (num1 == int(s[i]) || num2 == int(s[i]))
			{
				counts[j]++;
			}
			num1++; num2++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] != 0)
			cout << char(i + 97) << ":" << counts[i] << "\ttimes" << endl;
	}
}
int main() {
	cout << "Enter a string:";
	int counts[26];
	char s[30];
	cin.getline(s, 30);
	count(s, counts);
	return 0;
}
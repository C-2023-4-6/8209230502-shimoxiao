//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
using namespace std;
#include"student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int a, const char *b, char c)
{
    num = a;
    strcpy_s(name,b);
    sex = c;
}
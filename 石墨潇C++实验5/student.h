//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int a, const char* b, char c);
private:
	int num;
	char name[20];
	char sex;
};
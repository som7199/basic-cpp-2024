#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2 = man1;		// ���� ������ ȣ��, Person Ŭ������ ���� �����ڰ� ���ǵǾ� ���� �����Ƿ� ����Ʈ ���� �����ڰ� ȣ��ȴ�. => ��� �� ��� �ܼ��� ���縸 ��
						// man1�� �ִ� name�̶� man2�� �ִ� name�� ������ �ּҰ��� ������ ����! (���� ����)
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

/*
����Ʈ ���� �����ڴ� ��� �� ����� �ܼ��� ���縸 �� => �ϳ��� ���ڿ� ("Lee dong woo")�� �� ���� ��ü�� ���ÿ� �����ϰ� ��!
1. ���ڿ� "Yoon ji yul"�� ����Ű�� ���ڿ��� �ּ� ���� �Ұ� �� => �� �̻� �ش� ���ڿ��� ������ �Ұ��ϹǷ� �Ҹ굵 �Ұ����� ���°� �Ǿ� �޸��� ������ �̾���
2. ���� ����� ����, ��ü �Ҹ� �������� ������ ���ڿ��� �ߺ� �Ҹ��ϰ� ��

*/
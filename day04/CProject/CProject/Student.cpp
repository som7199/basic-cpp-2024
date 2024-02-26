#include <iostream>
#include <string.h>
/*
���� �Ӽ� > �Ϲ� > ��ó���� > ��ó���� ���� > ���� > _CRT_SECURE_NO_WARNINGS 
*/
using namespace std;

class StudentClass
{
private:
	char name[20];	// ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���� �ʱ�ȭ�Ѵ�.
	const int ID;	// �й��� ���ȭ
	char major[20];
	int age;

public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. - ���ڿ��� ù��° ���� �ּҰ� ����ȴ�.
	// ��� �̴ϼȶ������� ��ü ���� �� �ʱ�ȭ���� �ʴ� ������� �ʱ�ȭ�� �� ����Ѵ�. ��, ��ü ������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
	StudentClass(const char* stdName, int stdID, const char* stdMajor, int stdAge) : ID(stdID)	// ��� �̴ϼȶ������� ���� ��������� �ʱ�ȭ
	{
		//ID = stdID;

		// ���ڿ� �迭�� �ʱ�ȭ�ϴ� ����� strcpy() ����ϱ�!
		// strcpy(�� �迭, ���ڿ� ����ִ� �迭) : �� �迭�� ���ڿ� �����ϴ� �Լ�
		strcpy(name, stdName);
		
		strcpy(major, stdMajor);
		age = stdAge;
	}
	void showStudentInfo() const
	{
		cout << "�л� ����" << endl;
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << ID << endl;
		cout << "���� : " << major << endl;
		cout << "���� : " << age << endl;
	}
};

int main(void)
{
	StudentClass std1("��ҹ�", 201845809, "IT������а�", 24);
	std1.showStudentInfo();
	return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)		// �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;			// strlen() : ���ڿ��� ���̸� ���ϴ� �Լ�, ���ڿ��� �� ���� null���ڸ� �ٿ������! �׷��� ���ڿ��� ���� + 1 ����
		name = new char[len];					// new �����ڷ� �� ������ �޸� ������ �Ҵ� �ް�, name�̶�� �� �迭�� ���� ��, strcpy()�� myname�� ����ִ� ���ڿ��� �����ؼ� �� ������ �ִ� name�� ����!
		// ���ڿ��� �� ������ �����Ϸ��� �޸� ������ �������� ũ�⸦ �Ҵ� �޾ƾ��ϴ��� �˾ƾ��ϴϱ� strlen() ���ְ�, 
		// �ش� ũ�⸸ŭ�� �޸� ������ new �����ڸ� ���� �Ҵ���� ��
		// ���ڿ��� �����ؼ� �� ������ ���� �Ҵ���� ���� ����, (�迭�� �̸��� �迭�� ���� �ּ�)
		cout << "char�� ũ�� : " << sizeof(char) << endl << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl << endl;
	}
	// �Ҹ��� : Ŭ���� �̸� �տ� ~ �� �ٴ� ����
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
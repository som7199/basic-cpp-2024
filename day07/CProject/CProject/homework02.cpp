// MyInfo ��ü�� �����Ѵ�.
// MyInfo��ü.printMyInfo();�� ȣ���Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage) {
		//cout << "MyClass ������" << endl;
		strcpy(name, myname);
		age = myage;
	}
	string getMyName() {
		return name;
	}
	int getMyAge() {
		return age;
	}
};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* mypNumber) : Myclass(myname, myage) {
		//cout << "MyInfo ������" << endl;
		strcpy(pNumber, mypNumber);
	}
	void printMyInfo()
	{
		cout << "���� �̸��� " << getMyName() << "�̰�, ���̴� " << getMyAge() << "���̸�, ��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;
	}
};

int main(void)
{
	MyInfo m("��ҹ�", 24, "010-2575-7199");
	m.printMyInfo();
	return 0;
}
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
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	// 포인터 배열 : 포인터를 저장하는 배열
	// 배열 포인터 : 배열을 가리키는 포인터, 배열의 주소를 저장하고 있는 포인터
	Person* parr[3];	// 포인터 배열, 객체의 주소값 3개 저장 가능!

	char namestr[100];	// 문자 배열
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;

		parr[i] = new Person(namestr, age);
	}
	parr[0] -> ShowPersonInfo();
	parr[1] -> ShowPersonInfo();
	parr[2] -> ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}
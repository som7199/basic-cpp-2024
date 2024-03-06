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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
	// C:\Sources\basic-cpp-2024\day09\CProject\CProject\AssignShallowCopyError.cpp 는 얕은 복사로 인한 문제점 발생!
	// 깊은 복사 진행
	// 메모리 누수가 발생하지 않도록 깊은 복사에 앞서 메모리 해제 과정 거친다.
	// 대입 연산자의 오버로딩!
	Person& operator=(const Person& ref)
	{
		delete[] name;		// 메모리 누수를 막기 위한 메모리 해제 연산 (man2가 가리키던 "Yoon ji yul"이 저장되어 있는 힙 영역의 메모리 공간 해제!)
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2 = man1;				// 대입 연산자 오버로딩을 통해 깊은 복사가 가능하게 됨!
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
/*
유도 클래스의 객체가 소멸될 때에는, 유도 클래스의 소멸자가 실행되고 난 다음에 기초 클래스의 소멸자가 실행된다.
스택에 생성된 객체의 소멸순서는 생성순서와 반대!
기초 클래스의 소멸자도, 유도 클래스의 소멸자도 호출된다.
=> 생성자에서 동적 할당한 메모리 공간은 소멸자에서 해제한다!!!
*/
using namespace std;

class Person
{
private:
	char* name;
public:
	Person(const char* myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person()
	{
		cout << "부모 소멸자" << endl;					
		delete[]name;							// 생성자에서 동적 할당한 메모리 공간은 소멸자에서 해제한다!!!!!
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char* major;
public:
	UnivStudent(const char* myname, const char* mymajor) : Person(myname) 
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		cout << "자식 소멸자" << endl;
		delete[]major;
	}
	void WhoAreYou() const
	{
		WhatYourName();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent st1("Kim", "Mathematics");
	st1.WhoAreYou();
	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();
	return 0;
}
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
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2 = man1;		// 대입 연산자 호출, Person 클래스에 대입 연산자가 정의되어 있지 않으므로 디폴트 대입 연산자가 호출된다. => 멤버 대 멤버 단순히 복사만 함
						// man1에 있는 name이랑 man2에 있는 name은 동일한 주소값을 가지고 있음! (얕은 복사)
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

/*
디폴트 대입 연산자는 멤버 대 멤버를 단순히 복사만 함 => 하나의 문자열 ("Lee dong woo")를 두 개의 객체가 동시에 참조하게 됨!
1. 문자열 "Yoon ji yul"을 가리키던 문자열의 주소 값을 잃게 됨 => 더 이상 해당 문자열에 접근이 불가하므로 소멸도 불가능한 상태가 되어 메모리의 누수로 이어짐
2. 얕은 복사로 인해, 객체 소멸 과정에서 지워진 문자열을 중복 소멸하게 됨

*/
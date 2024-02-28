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
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	// 디폴트 복사 생성자 - 강사님 코드
	Person(const Person& other) {
		cout << "깊은 복사 생성자 호출" << endl;
		this->name = new char[strlen(other.name) + 1];	// 힙 영역에 메모리 공간을 할당받는 멤버는 이렇게 해줘야함!
		strcpy(this->name, other.name);
		this->age = other.age;							// 멤버 대 멤버 복사
	}

	// 복사 생성자 - 책 코드
	// 입력에 객체의 참조를 보면 복사 생성자임을 알 수 있지!
	//Person(const Person& copy) : age(copy.age)		// 멤버 변수 age의 멤버 대 멤버 복사
	//{
	//	name = new char[strlen(copy.name) + 1];		// 메모리 공간 할당 후 문자열 복사, 그리고 할당된 메모리의 주소값을 멤버 name에 저장
	//	strcpy(name, copy.name);
	//}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
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
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
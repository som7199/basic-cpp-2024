#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "부모 생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void whatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void howOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person {
	string major;	// 문자열
public:
	// 이니셜라이저 => 생성자의 호출을 뜻함!
	// Person 클래스의 생성자를 호출하면서 인자로 myage와 myname에 저장된 값을 전달!
	UnivStudent(const char* myname, int myage, string major) : Person(myname, myage) {	// 부모 생성자 호출
		cout << "자식 생성자 실행" << endl;
		this->major = major;
	}
	void whoAreYou() const {
		whatYourName();
		howOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent s("김소민", 24, "홈프로텍터");		// 자식 생성자 호출 -> 부모 생성자 호출 -> 부모 생성자 실행 -> 자식 생성자 실행
	s.whoAreYou();
	return 0;
}
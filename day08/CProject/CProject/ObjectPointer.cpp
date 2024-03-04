#include <iostream>
// 부모는 자식을 가리킬 수 있지만, 자식은 안됨~!!
// 부모 타입의 객체 포인터는 자식 객체를 가리킬 수 있다.

// Person* ptr;				// Person 타입의 객체 포인터 선언
// ptr = new Person();		// 힙 영역에 Person이란 객체를 생성하여 그 주소값을 스택 영역에 있는 포인터 변수 ptr에 저장

// C++에서 AAA형 포인터 변수는 AAA객체 또는 AAA를 직접 혹은 간접적으로 상속하는 모든 객체를 가리킬 수 있다.(객체의 주소값을 저장할 수 있다.)

// 접근은 객체 포인터의 타입을 따름을 항상 주의!!!

using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "Sleep" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study" << endl;
	}
	void Sleep()
	{
		cout << "Student Sleep" << endl;
	}
};

class PartTimeStudent : public Student
{
public:
	void Work()
	{
		cout << "Work" << endl;
	}
};

int main(void)
{
	// Student* ptr0 = new Student();		// 동일한 타입으로 사용하는 것이 원칙이다.
	/*
	부모 타입의 객체 포인터로 자식 객체를 가리킬 수 있다!
	하지만 자식 타입의 객체 포인터로 부모 객체는 가리킬 수 없다.
	그리고 접근은 객체 포인터의 타입을 따른다!!!!!! 그래서 ptr1->Sleep(); 했을 때 Student 클래스의 Sleep()이 아니라 Person 클래스의 Sleep()
	*/
	Person* ptr1 = new Student();			// Student는 Person을 상속, Person형 포인터 변수는 Student 객체를 가리킬 수 있음
	Person* ptr2 = new PartTimeStudent();	// PartTimeStudent는 Person을 간접 상속!, Person형 포인터 변수는 PartTimeStudent 객체를 가리킬 수 있음
	Student* ptr3 = new PartTimeStudent();	// PartTimeStudent는 Student를 상속, Student형 포인터 변수는 PartTimeStudent 객체를 가리킬 수 있음
	ptr1->Sleep();
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}




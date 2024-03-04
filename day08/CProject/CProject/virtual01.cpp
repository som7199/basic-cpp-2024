#include <iostream>
using namespace std;
// virtual 키워드가 붙으면 객체 중심으로 접근 가능! 객체 포인터 중심이 아니라!
// 함수가 가상함수로 선언되면 포인터 변수가 실제로 가리키는 객체를 참조하여 호출 대상을 결정!!

class Base {
public:
	Base() {};
	~Base() {};
	virtual void func1() { cout << "Base::func1()" << endl; }
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }
};

class Derived : public Base {
public:
	void func1() { cout << "Derived::func1()" << endl; }
	void func3() { cout << "Derived::func3()" << endl; }
	void func4() { cout << "Derived::func4()" << endl; }
};

int main(void)
{	
	Base b;						// Base 타입의 객체변수 b
	Derived d;					// Derived 타입의 객체 변수 d
	Base* pb = new Derived();	// Base 타입의 객체 포인터
	
	pb->func1();
	pb->func2();
	pb->func3();		// func3()는 virtual 선언 X => 포인터의 자료형을 기반으로 호출 대상 결정! 그래서 Base::func3() 출력!
	cout << endl;
	/*
	Derived::func1()
	Base::func2()
	Base::func3()
	*/

	Derived* pd = &d;
	pd->func1();	// 재정의 되어있으니 본인의 func1() 실행
	pd->func2();	// 부모로부터 상속받은 func2() 실행
	pd->func3();
	pd->func4();
	/*
	Derived::func1()
	Base::func2()
	Derived::func3()
	Derived::func4()
	*/

	delete pb;
	return 0;
}
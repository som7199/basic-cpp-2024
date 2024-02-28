#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc : " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc : " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);			// 일반 객체 생성
	const SoSimple obj2(7);		// const 객체 생성

	obj1.SimpleFunc();			// 일반 객체 대상으로 SimpleFunc() 호출 시 일반 멤버함수 호출
	obj2.SimpleFunc();			// const 객체 대상으로 SimpleFunc() 호출 시 const 멤버함수 호출

	YourFunc(obj1);				// YourFunc 함수는 전달되는 인자를 const 참조자로 받음! 그 결과 const 멤버함수가 호출된다!
	YourFunc(obj2);				// YourFunc 함수는 전달되는 인자를 const 참조자로 받음! 그 결과 const 멤버함수가 호출된다!
	return 0;
}
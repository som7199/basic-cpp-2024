#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	virtual ~First()
	{
		cout << "~First()" << endl;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};

int main(void)
{
	// 상속관계에 있어서 객체 포인터는 조심해야한다.
	// 부모 타입의 객체 포인터로 자식 객체를 가리키는 경우(다형성) 조심 조심 또 조심해야한다.
	// 소멸자에 virtual 키워드 선언 없을 땐, 객체 포인터 타입의 소멸자만 호출이 됨! => 메모리 누수(leak) 발생 ㅠ
	// 이를 방지하기 위해서 virtual 키워드를 붙여줘야함!
	First* ptr = new Second("simple", "complex");		// 객체의 소멸을 First형 포인터로 명령하니 First 클래스의 소멸자만 호출됨! => 메모리 누수(leak) 발생,, 따라서 객체의 소멸 과정에서는 delete 연산자에 사용된 포인터 변수의 자료형에 상관없이 모든 소멸자가 호출되어야 한다.
	delete ptr;
	return 0;
}
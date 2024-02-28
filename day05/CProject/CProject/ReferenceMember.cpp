#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;			// 참조자가 멤버변수로 선언됨 => 이니셜라이저를 통해 초기화!!
	const int& num;		// const 참조자 선언 => 이니셜라이저를 통해 정수형 상수로도 초기화 가능!
public:
	BBB(AAA& r, const int& n) : ref(r), num(n)
	{
		// empty constructor body
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();
	return 0;
}
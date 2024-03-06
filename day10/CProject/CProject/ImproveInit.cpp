#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA(int n = 0) : num(n)							// 정수 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(int n = 0)" << endl;
	}
	AAA(const AAA& ref) : num(ref.num)				// 객체 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(const AAA& ref)" << endl;
	}
	AAA& operator=(const AAA& ref)					// 대입 연산자 오버로딩
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA mem;								// AAA 타입의 객체
public:
	BBB(const AAA& ref) : mem(ref) {}		// 이니셜라이저(콜론 초기화)를 이용한 멤버 초기화 => 생성자만 호출
};

class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref)	{ mem = ref; }		// 대입연산을 이용한 멤버 초기화 => 생성자 호출되고 대입연산자까지 호출!
};

int main(void)
{
	AAA obj1(12);
	cout << "****************" << endl;
	BBB obj2(obj1);
	cout << "****************" << endl;
	CCC obj3(obj1);
	return 0;
}
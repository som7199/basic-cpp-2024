#include <iostream>
using namespace std;

class First
{
private:
	int num1, num2;
public:
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}
	void ShowData()
	{
		cout << num1 << ", " << num2 << endl;
	}
};

class Second
{
private:
	int num3, num4;
public:
	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4) {}
	void ShowData()
	{
		cout << num3 << ", " << num4 << endl;
	}
	// 대입연산자 오버로딩 => 멤버 대 멤버 복사가 진행되도록)
	Second& operator=(const Second& ref)
	{
		cout << "Second& operator=()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		return *this;
	}
};

int main(void)
{
	First fsrc(111, 222);
	First fcpy;
	Second ssrc(333, 444);
	Second scpy;
	fcpy = fsrc;		// 디폴트 대입 연산자 호출(멤버대 멤버 대입) : 디폴트 복사 생성자와 비슷하다, fcpy.operator=(fsrc)
	scpy = ssrc;		// 명시적으로 작성한(27행에 정의된) 대입 연산자 호출됨, scpy.operator=(ssrc) 
	fcpy.ShowData();
	scpy.ShowData();

	First fob1, fob2;
	Second sob1, sob2;
	fob1 = fob2 = fsrc;	// 대입 연산자는 오른쪽에서 왼쪽으로 진행됨(결합방향에 의해)
	sob1 = sob2 = ssrc;

	fob1.ShowData();
	fob2.ShowData();
	sob1.ShowData();
	sob2.ShowData();
	return 0;
}
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;		// const 함수에 대해 예외를 둔다! => const 함수 내에서의 변경이 허용된다.
public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const		// 함수 내에서 값이 변경될 수 있는 가능성을 차단시키기 위해 const 키워드 사용!
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const			// const 함수이지만
	{	
		num2 = num1;				// num2가 mutable로 선언되었기 때문에 값의 변경이 가능하다.
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}
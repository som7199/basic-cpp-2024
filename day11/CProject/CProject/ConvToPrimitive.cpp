#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}
	Number& operator=(const Number& ref)		// 대입 연산자 호출 확인용 오버로딩
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	operator int()		// 형 변환 연산자의 오버로딩, 반환형이 없는데 반환을 하고있다...!
	{
		return num;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;	
	// num1 + 20이 먼저 진행되어야 하는데 operator+ 함수 정의가 안되어있으니 덧셈이 가능하려면 num1이 int형으로 변환되어야 한다. 이 때 호출되는 것이 형 변환 연산자!!
	Number num2 = num1 + 20;
	num2.ShowNumber();
	return 0;
}

/*
형 변환 연산자는 반환형을 명시하지 않는다!
하지만 return문에 의한 값의 반환은 얼마든지 가능하다!!
오버로딩 된 연산자의 이름이 operator+ 이면 + 연산자가 등장했을 때 호출되는 것과 유사하게
operator int는 int형으로 형 변환되어야 하는 상황에서 호출되며, return문에 의해 반환되는 값이 int형으로의 형 변환 결과가 되는 것!
*/
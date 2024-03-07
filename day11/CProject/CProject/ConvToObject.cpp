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
	Number& operator=(const Number& ref)		// 굳이 오버로딩 안해도 되는데 대입 연산자 호출 확인하려고 ㅎㅎ
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num;
	// Number형 객체가 와야 할 위치에 int형 데이터가 옴 => int형 데이터를 인자로 전달받는 Number 클래스의 생성자 호출을 통해 Number형 임시 객체 생성! => 두 Number 객체 대상으로 대입연산 진행
	// 근데 int형 데이터가 아니라 리터럴
	num = 30;			// 1단계. 임시객체의 생성 => num = Number(30);
						// 2단계. 임시객체를 대상으로 하는 대입 연산자 호출 => num.operator=(Number(30));
	num.ShowNumber();
	return 0;
}

/*
A형 객체가 와야 할 위치에 B형 데이터(또는 객체)가 왔을 경우, B형 데이터를 인자로 전달받는 A형 클래스의 생성자 호출을 통해서 "A형 임시객체"를 생성한다!!!
*/
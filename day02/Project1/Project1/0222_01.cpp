#include <iostream>
/*
함수의 선언과 호출
*/
using namespace std;

void func() {		// 사용자 함수
	cout << "Hi" << endl;
}

/*
함수의 원형을 별도로 선언하는 경우, @@@매개변수의 디폴트 값은 함수의 원형 선언에만 위치시켜야한다!!!

오류난 이유 ==> 매개변수의 디폴트 값 지정은 함수의 선언 부분에서만 하기!!!!!!!!!!^^
*/
int Adder(int num1 = 1, int num2 = 2);	// 함수 선언, 디폴트값 지정!

int main(void)
{
	cout << Adder() << endl;		// 함수 호출 :  Adder(), 3
	cout << Adder(5) << endl;		// 7
	cout << Adder(3, 5) << endl;	// 8
	func();
	return 0;
}

int Adder(int num1, int num2)	// 함수 정의
{
	return num1 + num2;
}

/*
매개변수에 디폴트 값이 설정되어 있으면, 선언된 매개변수의 수보다 적은 수의 인자전달이 가능하다.
그리고 전달되는 인자는 왼쪽에서부터 채워져 나가고, 부족분은 디폴트 값으로 채워진다.
*/

//클래스 안에 들어가는 함수 : 메서드
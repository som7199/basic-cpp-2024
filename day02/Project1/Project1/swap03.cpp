#include <iostream>
/*
swap 함수 구현하기 - 참조자를 사용한 Call-by-reference
*/
using namespace std;

// 매개변수의 선언 위치에 참조자 써주고 함수 호출 시 전달되는 인자로 초기화!
// 그럼 매개변수 선언하면서 a의 별명은 num1, b의 별명은 num2가 됨
// 이 2개의 참조자를 통해 값의 교환이 일어남!
void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void)
{
	int a = 100;
	int b = 200;

	cout << "before" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	// 매개변수로 참조자가 선언되었기 때문에, 참조의 대상이 될 변수인 a,b를 인자로 전달해주기
	swap(a, b);

	cout << "after" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}
#include <iostream>
using namespace std;
/*
swap 함수 구현하기 - 주소값을 이용한 Call-by-reference
*/

// & => 변수 이름 앞에 사용, 변수의 메모리 주소 값 반환
// * => 포인터의 이름이나 주소 앞에 사용, 해당 주소를 참조하여 주소에 저장되어 있는 값을 반환

// 이건 참조자를 이용한 swap() 함수 => swap003.cpp
//void swap(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

void swap(int* aa, int* bb)		// 주소를 받을 수 있는 포인터 변수를 선언
{
	int temp = *aa;				// 주소의 데이터를 참조
	*aa = *bb;
	*bb = temp;
}

int main(void)
{
	int a = 10;
	int b = 20;

	cout << "before" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	swap(&a, &b);

	cout << "after" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}

/*
int num = 10;		// 일반적인 변수 선언
int* ptr = &num1;	// 포인터 변수 ptr에 num1의 주소값 저장
int& num2 = num1;	// num1에 대한 참조자 num2를 선언
// 이미 선언된 변수 앞에 &가 오면, 주소 값의 반환을 뜻하지만
// 새로 선언되는 변수의 이름 앞에 &가 오면, 참조자의 선언을 뜻함

int& num2 = num1; // num2는 num1의 별명! &는 주소를 반환하는 연산자이기도 하지만 참조자를 선언할 때도 쓴다.
num2 = 100; 가능 num2에 100이라는 값을 저장할 수 있다.
num1이라고 이름 붙은 메모리 공간에 num2라는 이름이 하나 더 붙은 것!
그 결과 num1과 num2로 같은 메모리 공간에 접근이 가능해짐!!
같은 메모리 공간에 num1으로 접근할 수도 있고, num2로도 접근할 수 있다.
*/

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

#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;	// 지역변수 선언과 초기화
	cout << "num : " << num << endl;

	// 참조자 선언과 동시에 변수로 초기화! 그래야 별명을 지어주지
	int* pnum = &num;	// 주소로 num변수에 접근 => 변수의 주소 값 저장 
	int &rnum = num;	// 참조로 num변수에 접근 => 참조자 rnum 선언, num의 메모리공간에 rnum이라는 이름이 하나 더 생긴 것! 
	num = 20;

	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	return 0;
}
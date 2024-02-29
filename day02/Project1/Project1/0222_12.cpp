#include <iostream>
/*
참조자 개념잡기
*/
using namespace std;

// ref는 num1의 별명이 됨, 근데 반환과 동시에 참조자 ref는 소멸됨, 그치만 참조자가 참조하는 변수는 소멸 안 됨 ㅎㅅㅎ
int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // num2 = 2;, num1 = 2; 근데 num1과 num2의 메모리 공간은 같지않음!
	// 참조형으로 반환이 되지만, 참조자가 아닌 일반변수 num2를 선언하여 반환값을 저장할 수 있음을 보여주는 코드,,

	num1 += 1;
	num2 += 100;
	cout << "num1 : " << num1 << endl;		// 3
	cout << "num2 : " << num2 << endl;		// 102
	return 0;
}
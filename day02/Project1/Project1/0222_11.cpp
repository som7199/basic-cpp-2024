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
	int& num2 = RefRetFuncOne(num1);
	
	// num1과 num2 모두 같은 메모리 공간을 가리키지!
	num1++;
	num2++;
	cout << "num1 : " << num1 << endl;		// 4
	cout << "num2 : " << num2 << endl;		// 4
	return 0;
}
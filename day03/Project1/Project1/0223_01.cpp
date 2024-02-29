#include <iostream>
/*
상수화된 변수에 대한 참조자 선언
*/
using namespace std;

int main(void)
{
	const int num = 10;		// 상수를 선언할 때는 바로 초기화를 해야만 한다, const int 자료형이 됨!
	const int& ref = num;
	cout << ref << endl;

	//const int& ref = 50;	// const 참조자는 상수도 참조 가능, 임시로 생성한 변수를 상수화하여 이를 참조자가 참조하게끔 하는 구조..!
	//cout << ref << endl;

	return 0;
}
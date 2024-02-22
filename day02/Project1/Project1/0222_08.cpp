#include <iostream>
/*
지역변수와 전역변수
*/
using namespace std;

int global = 100;	// 전역변수 - 프로그램 전체에서 사용 가능
int global1 = 200;

int main(void)
{
	int val = 100;	// 지역변수 - 선언된 범위에서만 사용 가능
	global = 200;

	int global1 = 345;
	cout << "전역변수 global : " << global << endl;
	cout << "지역변수 : " << val << endl;
	cout << "전역변수 global1 : " << global1 << endl;	// 지역변수와 이름이 동일할 경우, 전역변수는 가려진다.

	return 0;
}
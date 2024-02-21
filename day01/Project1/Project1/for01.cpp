#include <iostream>

// std 클래스에는 cout, cin, endl 등 자주 쓰이는 함수들이 정의되어있다.
// 이름공간에 있는 std(클래스)에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령할 수 있다.
using namespace std;	

int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int ary[3] = { 10, 20, 30 };
	ary[0] = 1111;*/

	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	return 0;
}
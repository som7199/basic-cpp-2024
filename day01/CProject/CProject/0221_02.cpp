/*
	선택 제어문: if else 문
*/
#include <iostream>

using namespace std;

int main(void)
{
	int inKey;
	cout << "정수 입력 > ";
	cin >> inKey;

	if (inKey == 7) {	// if(조건식) {... 실행문}
		cout << "Bingo!" << endl;
	}
	else if (inKey > 7) {
		cout << "숫자가 큽니다." << endl;
	}
	else if (inKey < 7) {
		cout << "숫자가 작습니다." << endl;
	}
	else cout << "잘못 입력하셨습니다." << endl;

	return 0;
}
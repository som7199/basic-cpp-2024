/*
	선택 제어문 : switch
*/
#include <iostream>

using namespace std;

int main(void)
{
	int inKey;
	cout << "숫자 입력 > ";
	cin >> inKey;

	switch (inKey) {
	case 1:
		cout << "1 입니다." << endl;
		break;

	case 2:
		cout << "2 입니다." << endl;
		//break;

	case 3:
		cout << "3 입니다." << endl;
		break;

	default:
		cout << "이것도 저것도 아닙니다." << endl;
	}

	return 0;
}
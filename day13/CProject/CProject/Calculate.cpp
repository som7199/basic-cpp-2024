#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int minus_num(int a, int b) { return a - b; }
int multiple(int a, int b) { return a * b; }
int divide(int a, int b) { 
	// try 블록: 예외가 발생할 수 있는 코드를 포함하는 블록. 이 블록 내에서 예외가 발생하면 예외를 던진다.
	// catch 블록: 발생한 예외를 처리하기 위한 블록.
	try {
		if (!b) throw b;
		return a / b;
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}
	return a / b; 
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "정수 2개를 입력하세요: ";
	cin >> n1 >> n2;

	cout << n1 << " + " << n2 << " = " << add(n1, n2) << endl;
	cout << n1 << " - " << n2 << " = " << minus_num(n1, n2) << endl;
	cout << n1 << " * " << n2 << " = " << multiple(n1, n2) << endl;
	cout << n1 << " / " << n2 << " = " << divide(n1, n2) << endl;

	/*try {
		if (!n2) throw n2;
		cout << n1 << " / " << n2 << " = " << divide(n1, n2) << endl;
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}*/

	return 0;
}
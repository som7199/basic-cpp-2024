#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int minus_num(int a, int b) { return a - b; }
int multiple(int a, int b) { return a * b; }
int divide(int a, int b) { 
	// try ���: ���ܰ� �߻��� �� �ִ� �ڵ带 �����ϴ� ���. �� ��� ������ ���ܰ� �߻��ϸ� ���ܸ� ������.
	// catch ���: �߻��� ���ܸ� ó���ϱ� ���� ���.
	try {
		if (!b) throw b;
		return a / b;
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}
	return a / b; 
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "���� 2���� �Է��ϼ���: ";
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
		cout << "0���� ���� �� �����ϴ�." << endl;
	}*/

	return 0;
}
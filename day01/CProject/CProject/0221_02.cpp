/*
	���� ���: if else ��
*/
#include <iostream>

using namespace std;

int main(void)
{
	int inKey;
	cout << "���� �Է� > ";
	cin >> inKey;

	if (inKey == 7) {	// if(���ǽ�) {... ���๮}
		cout << "Bingo!" << endl;
	}
	else if (inKey > 7) {
		cout << "���ڰ� Ů�ϴ�." << endl;
	}
	else if (inKey < 7) {
		cout << "���ڰ� �۽��ϴ�." << endl;
	}
	else cout << "�߸� �Է��ϼ̽��ϴ�." << endl;

	return 0;
}
#include <iostream>

using namespace std;	// std ���ӽ����̽��� ��� ���� ����ϰڴ�.

int main(void)
{
	int inKey;
	cout << "���� �ϳ��� �Է��ϼ��� > ";
	cin >> inKey;

	if (inKey == 7) {	// if(���ǽ�) {... ���๮}
		cout << "Bingo!" << endl;
	}
	if (inKey > 7) {
		cout << "���ڰ� Ů�ϴ�." << endl;
	}
	if (inKey < 7) {
		cout << "���ڰ� �۽��ϴ�." << endl;
	}

	return 0;
}
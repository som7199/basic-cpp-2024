#include <iostream>
/*
�߸��� ������ ��ȯ
*/
using namespace std;

int& RefRetFuncOne(int n)
{
	int num = 20;
	num += n;
	return num;		// num = 30,  num�� ������ ���·� ��ȯ, ��ȯ �� �������� num �Ҹ�!�ٵ� int& ref = RefRetFuncOne(10);�� num�̶�� ������ ������ �Ѵ�..? �ȵ�!
	// ���������� ���������� ��ȯ�ϸ� �� ��!!!!!!!!!!
}

int main(void)
{
	int& ref = RefRetFuncOne(10);	// �� �Ҹ�� num�� ������.. ���� �Ҹ���� ����(�� �Ҹ��) ��� ���·� �����ִ� �����͸� �����ؼ� �������� ��°���� ���̱⵵ �ϴϱ� �����ϱ�!!
	cout << ref << endl;
	// �����ϸ� ������ ��� �޽��� ��
	// ���	C4172 ���� ���� �Ǵ� �ӽ� : num�� �ּҸ� ��ȯ�ϰ� �ֽ��ϴ�.
	return 0;
}
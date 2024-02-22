#include <iostream>
/*
swap �Լ� �����ϱ� - �����ڸ� ����� Call-by-reference
*/
using namespace std;

// �Ű������� ���� ��ġ�� ������ ���ְ� �Լ� ȣ�� �� ���޵Ǵ� ���ڷ� �ʱ�ȭ!
// �׷� �Ű����� �����ϸ鼭 a�� ������ num1, b�� ������ num2�� ��
// �� 2���� �����ڸ� ���� ���� ��ȯ�� �Ͼ!
void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void)
{
	int a = 100;
	int b = 200;

	cout << "before" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	// �Ű������� �����ڰ� ����Ǿ��� ������, ������ ����� �� ������ a,b�� ���ڷ� �������ֱ�
	swap(a, b);

	cout << "after" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}
#include <iostream>
/*
������ �������
*/
using namespace std;

// ref�� num1�� ������ ��, �ٵ� ��ȯ�� ���ÿ� ������ ref�� �Ҹ��, ��ġ�� �����ڰ� �����ϴ� ������ �Ҹ� �� �� ������
int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // num2 = 2;, num1 = 2; �ٵ� num1�� num2�� �޸� ������ ��������!
	// ���������� ��ȯ�� ������, �����ڰ� �ƴ� �Ϲݺ��� num2�� �����Ͽ� ��ȯ���� ������ �� ������ �����ִ� �ڵ�,,

	num1 += 1;
	num2 += 100;
	cout << "num1 : " << num1 << endl;		// 3
	cout << "num2 : " << num2 << endl;		// 102
	return 0;
}
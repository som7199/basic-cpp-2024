#include <iostream>
/*
���ȭ�� ������ ���� ������ ����
*/
using namespace std;

int main(void)
{
	const int num = 10;		// ����� ������ ���� �ٷ� �ʱ�ȭ�� �ؾ߸� �Ѵ�, const int �ڷ����� ��!
	const int& ref = num;
	cout << ref << endl;

	//const int& ref = 50;	// const �����ڴ� ����� ���� ����, �ӽ÷� ������ ������ ���ȭ�Ͽ� �̸� �����ڰ� �����ϰԲ� �ϴ� ����..!
	//cout << ref << endl;

	return 0;
}
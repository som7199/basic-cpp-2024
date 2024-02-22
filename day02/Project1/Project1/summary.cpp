/*
int num = 10;		// �Ϲ����� ���� ����
int* ptr = &num1;	// ������ ���� ptr�� num1�� �ּҰ� ����
int& num2 = num1;	// num1�� ���� ������ num2�� ����
// �̹� ����� ���� �տ� &�� ����, �ּ� ���� ��ȯ�� ��������
// ���� ����Ǵ� ������ �̸� �տ� &�� ����, �������� ������ ����

int& num2 = num1; // num2�� num1�� ����! &�� �ּҸ� ��ȯ�ϴ� �������̱⵵ ������ �����ڸ� ������ ���� ����.
num2 = 100; ���� num2�� 100�̶�� ���� ������ �� �ִ�.
num1�̶�� �̸� ���� �޸� ������ num2��� �̸��� �ϳ� �� ���� ��!
�� ��� num1�� num2�� ���� �޸� ������ ������ ��������!!
���� �޸� ������ num1���� ������ ���� �ְ�, num2�ε� ������ �� �ִ�.
*/

#include <iostream>

using namespace std;

int main(void)
{
	int num = 10;	// �������� ����� �ʱ�ȭ
	cout << "num : " << num << endl;

	// ������ ����� ���ÿ� ������ �ʱ�ȭ! �׷��� ������ ��������
	int* pnum = &num;	// �ּҷ� num������ ���� => ������ �ּ� �� ���� 
	int &rnum = num;	// ������ num������ ���� => ������ rnum ����, num�� �޸𸮰����� rnum�̶�� �̸��� �ϳ� �� ���� ��! 
	num = 20;

	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	*pnum = 30;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	rnum = 40;
	cout << endl;
	cout << "num : " << num << endl;
	cout << "*pnum : " << *pnum << endl;
	cout << "rnum : " << rnum << endl;

	return 0;
}
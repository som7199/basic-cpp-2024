#include <iostream>
/*
���������� ��������
*/
using namespace std;

int global = 100;	// �������� - ���α׷� ��ü���� ��� ����
int global1 = 200;

int main(void)
{
	int val = 100;	// �������� - ����� ���������� ��� ����
	global = 200;

	int global1 = 345;
	cout << "�������� global : " << global << endl;
	cout << "�������� : " << val << endl;
	cout << "�������� global1 : " << global1 << endl;	// ���������� �̸��� ������ ���, ���������� ��������.

	return 0;
}
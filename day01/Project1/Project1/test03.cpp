#include <iostream>

// ���� ����
int gloval = 100;

void func() {
	int a;
	a = 100;
	gloval = 200;
}

/*
���� ���� = ���� ���� : ����Ǿ��� ���� �ȿ����� ����� ����(static ������ ����)
*/

// 1. ���� �Է¹ޱ�
//int main(void)
//{
//	int a;
//	int val;	// �޸𸮰���(ram)�� int ũ��� ���� ������ �Ҵ�ް� val �̸����� ����Ѵ�.
//	std::cout << "���� �Է� : ";
//	std::cin >> val;
//
//	std::cout << "�Է��� ���ڴ�	" << val << "�Դϴ�." << std::endl;
//
//	a = 10;
//	val = 100;
//	gloval = 300;
//	return 0;
//}



/*
���
	1. �������
		- if, switch

	2. �ݺ����
		- for, while

	for(�ʱ��; ���ǽ�; ������) {
		1. �ʱ���� ������ ���ǽ��� ������.
		2. ���̸� for���� ���๮�� �����ϰ�
		3. �������� �����Ѵ�.
		4. ���ǽ��� ������
		2.
		3.
		4.
		2.
	}
*/

// 2. �� ���� ���� ������ �� ���ϱ�
int main(void)
{
	// int val1;
	// int val2;
	int val1, val2;	// type�� ���Ƽ� ������ ���� �ۼ� ����
	int result = 0;	// ���� ����� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	std::cout << "�� ���� ���� �Է� : ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for(int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� �� : " << result << std::endl;
	return 0;
}
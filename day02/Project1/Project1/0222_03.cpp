#include <iostream>
/*
�Լ��� ��ü�κ��� �Լ�ȣ�� ������ ������ ��ü���� �� "�Լ��� �ζ���ȭ �Ǿ���." ��� ǥ��
0222_02.cpp�� ��ũ�� �Լ��� �ٸ� �� => ��ũ�� �Լ��� X�� �ڷ����� ���������� ������, �ζ��� �Լ��� �Ű������� �ڷ���(int x) ������ �������! 
*/

inline int SQUARE(int x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}
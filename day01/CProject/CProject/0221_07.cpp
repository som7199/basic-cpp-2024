#include <iostream>

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int minus(int a, int b)
{
	int result;
	result = a - b;
	return result;
}

int multiple(int a, int b)
{
	int result;
	result = a * b;
	return result;
}

float divide(int a, int b)
{
	float result;
	result = a / b;
	return result;
}

int main(void)
{
	char inKey;
	int num1, num2;

	while (true) {

		std::cout << "�����ڸ� �Է��Ͻÿ� > (���Ḧ ���� �� X�� �Է��Ͻÿ�.) ";
		std::cin >> inKey;

		if (inKey == 'X') {
			std::cout << "����!" << std::endl;
			break;
		}

		std::cout << "�� ���� �Է��Ͻÿ� > ";
		std::cin >> num1 >> num2;

		if (inKey == '+') {
			std::cout << "\n��� : " << add(num1, num2) << std::endl;
		}

		else if (inKey == '-') {
			std::cout << "\n��� : " << minus(num1, num2) << std::endl;
		}

		else if (inKey == '*') {
			std::cout << "\n��� : " << multiple(num1, num2) << std::endl;
		}

		else if (inKey == '/') {
			std::cout << "\n��� : " << divide(num1, num2) << std::endl;
		}
	}
	
	return 0;
}
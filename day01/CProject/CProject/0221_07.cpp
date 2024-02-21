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

		std::cout << "연산자를 입력하시오 > (종료를 원할 시 X를 입력하시오.) ";
		std::cin >> inKey;

		if (inKey == 'X') {
			std::cout << "종료!" << std::endl;
			break;
		}

		std::cout << "두 수를 입력하시오 > ";
		std::cin >> num1 >> num2;

		if (inKey == '+') {
			std::cout << "\n결과 : " << add(num1, num2) << std::endl;
		}

		else if (inKey == '-') {
			std::cout << "\n결과 : " << minus(num1, num2) << std::endl;
		}

		else if (inKey == '*') {
			std::cout << "\n결과 : " << multiple(num1, num2) << std::endl;
		}

		else if (inKey == '/') {
			std::cout << "\n결과 : " << divide(num1, num2) << std::endl;
		}
	}
	
	return 0;
}
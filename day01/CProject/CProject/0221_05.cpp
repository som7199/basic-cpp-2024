/*
	반복 제어문 : while
*/
#include <iostream>

int main(void)
{
	int i = 0;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		i++;

		if (i == 10) break;
	}
	std::cout << sum;
	return 0;
}

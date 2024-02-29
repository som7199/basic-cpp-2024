#include <iostream>

// 전역 변수
int gloval = 100;

void func() {
	int a;
	a = 100;
	gloval = 200;
}

/*
지역 변수 = 로컬 변수 : 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)
*/

// 1. 숫자 입력받기
//int main(void)
//{
//	int a;
//	int val;	// 메모리공간(ram)에 int 크기로 저장 공간을 할당받고 val 이름으로 사용한다.
//	std::cout << "숫자 입력 : ";
//	std::cin >> val;
//
//	std::cout << "입력한 숫자는	" << val << "입니다." << std::endl;
//
//	a = 10;
//	val = 100;
//	gloval = 300;
//	return 0;
//}



/*
제어문
	1. 선택제어문
		- if, switch

	2. 반복제어문
		- for, while

	for(초기식; 조건식; 증감식) {
		1. 초기식을 가지고 조건식을 따진다.
		2. 참이면 for문의 실행문을 실행하고
		3. 증감식을 실행한다.
		4. 조건식을 따지고
		2.
		3.
		4.
		2.
	}
*/

// 2. 두 개의 정수 사이의 수 더하기
int main(void)
{
	// int val1;
	// int val2;
	int val1, val2;	// type이 같아서 다음과 같이 작성 가능
	int result = 0;	// 변수 선언과 동시에 값을 대입 : 변수 초기화
	std::cout << "두 개의 숫자 입력 : ";
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

	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
	return 0;
}
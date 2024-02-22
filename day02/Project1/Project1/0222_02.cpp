#include <iostream>
/*
매크로 함수
*/
#define SQUARE(X) ((X) * (X))	// 매크로 함수 => 일반적인 함수에 비해 실행속도의 이점이 있다!, X 타입에 상관없이 적용 가능!

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	return 0;
}
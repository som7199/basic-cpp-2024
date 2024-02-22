#include <iostream>
/*
함수의 몸체부분이 함수호출 문장을 완전히 대체했을 때 "함수가 인라인화 되었다." 라고 표현
0222_02.cpp의 매크로 함수와 다른 점 => 매크로 함수는 X의 자료형에 의존적이지 않지만, 인라인 함수의 매개변수는 자료형(int x) 생각을 해줘야함! 
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
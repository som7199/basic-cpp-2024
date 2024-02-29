#include <iostream>		// C++에서는 프로그래머가 정의하는 헤더파일의 선언이 아닌, 표준 헤더파일의 선언에서는 확장자 생략

int main(void) 
{
	// 메모리 값 = 할당 받아야 할 사이즈 = int 값... 
   // 여기 코드 작성 할 때에는 c++ 코드 = int 자료형 사이즈 = 10을 입출력 받아서 씀!
	int a = 10; //int => type, 자료형(크기)** 이거만 외우자, 컴파일 크기 다름, 고정적이지 않음
	// 문자, 문자열 = 문자 1개, 2개이상의 문자 = 문자열
	// 문자 = ' ', 문자열 = " " => 무조건 중요 잘 확인...
	// << => "Hello World" -> std::count에 출력, std::endl 도 std::count에 출력

	int num = 10;	// 메모리 공간에 int 타입으로 할당받음, 타입은 크기!
	std::cout << "Hello World!" << std::endl;			// :: => scope 연산자, endl => endline
	std::cout << "Hello " << "World!" << std::endl;		// C++에서 문자는 '', 문자열은 ""
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}
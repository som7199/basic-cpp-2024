#include <iostream> // 헤더파일 => 무조건 써야하는 것

int main(void) { // 괄호가 들어 간 것 = 입력 값(입력값 = 있다 없다), main = 함수명, int = 함수의 출력, 전체= 함수의 정의
	// 머리 = 3행, 몸체 = 머리 밑 {} 들어간것, void = 출력값 
	int a = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << a << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}

/* 1. 함수 정의
void func() {	// 함수 이름은 func이고
				// 입력은 없고 출력은 없다.
}

void func1(int a) {	// 함수 이름은 func1이고
					// 입력은 int a 이고 출력이 없다.

}

int func2() {		// 함수 이름은 func2이고
					// 입력은 없고 출력은 int이다.
	
	return int(정수);
}
*/


/* 2. 함수 호출
* func();		// 함수 머리에서 출력을 생략한다.
* func1();		// 
* func2();
*/

// num이라는 변수에 10을 저장하자!
//int num;	// 변수 선언을 먼저하고 (메모리(RAM)로부터 값을 저장할 수 있는 공간을 할당 받음)
//num = 10;	// 변수에 값을 대입한다.
// 하드디스크(ROM)에 있던 내가 사용할 프로그램이 RAM(Random Access Memory)에 올라서 실행!

// num = 변수 10 저장
// 프로그램 실행 => ram에 실행

// 함수와 변수 차이 = 괄호
// 변수 선언 먼저
// 함수 사용시, 함수 선언하고 사용하고, 호출하기
// 함수 정의 선언 => 사용하기 위해서 => 함수 적고  => 함수 호출
// 변수 (램 = 저장하는 메모리 공간) => 선언하고 함수 작성시 밑에 
// 함수 => 정의 => 호출 
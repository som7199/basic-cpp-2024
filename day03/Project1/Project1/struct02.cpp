#include <iostream>
/*
C++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다.
*/

typedef struct human {		// human 구조체(내가 만든 사용자 정의 자료형)
	char name[20];			// 속성 : 멤버변수(name, age, job)
	int age;
	char job[20];

	void showHuman()	// 기능 : 멤버 함수
	{
		printf("name : %s age : %d job : %s\n", name, age, job);
	}

}Human;						// 앞으로 human 구조체를 Human으로 사용하겠다.

int main(void)
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" };		// Human 타입의 변수를 선언하고 초기화 시키기
	h1.showHuman();
	return 0;
}
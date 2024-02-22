#include <iostream>
/*
포인터 변수와 변수의 주소
*/
using namespace std;

int global = 100;	// 전역변수 - 프로그램 전체에서 사용 가능
int global1 = 200;

int main(void)
{
	const int num = 10;	// num 변수를 상수화 시킨다.
	// num = 100;		// num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;		// 포인터 변수 선언 : 포인터(주소) 변수 pnum1 선언, * : 나는 포인터 변수입니다 를 나타내는 그런 기호,, 그냥 아무런 의미없는 기호
	pnum1 = &num1;	// 변수 num1의 주소를 포인터 변수 pnum1에 저장한다.

	cout << "num에 저장된 값 : "<< num << endl;
	cout << "num1에 저장된 값 : " << num1 << endl;
	cout << "&num1에 저장된 값 : " << &num1 << endl;
	cout << "pnum1에 저장된 값 : " << pnum1 << endl;
	cout << "pnum1에 저장된 애의 데이터 : " << *pnum1 << endl;	// * : 가리키는 애의 데이터, 참조 연산자!

	return 0;
}

/*
* 실행중인 프로그램은 운영체제로부터 메모리 공간을 할당 받는데, 크게 데이터, 스택, 힙 영역으로 나뉜다.
데이터 : 전역변수가 저장되는 영역
스택 : 지역변수 및 매개변수가 저장되는 영역
힙 : malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
malloc & free : malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.
*/
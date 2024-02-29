#include <iostream>

void func()
{
	// ...
}

int main(void)
{
	func();
	return 0;
}

ClassName objName;
ClassName* p = new ClassName; // new 연산자 => 힙 영역에 메모리를 할당하고 그 주소를 리턴한다. (ClassName 타입의 메모리를 힙 영역에 할당하고 그 주소를 리턴)
// 그럼 스택에 잇는 포인터 변수 p에는 주소가 저장되어 있겠지 
// 클래스 네임이라는 자료형의 크기만큼 메모리 공간에 할당하고, 그 주소를 리턴
// 포인터 변수에 그 주소가 저장되어 있겠지 
// 객체 생성은 힙 영역에! 스택 영역의 포인터 변수를 이용해서 사용
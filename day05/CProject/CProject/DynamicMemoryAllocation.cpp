#include <iostream>
/*
메모리 동적 할당 : new 연산자 사용
프로그램 실행 중에 메모리를 할당 받는다.
*/
using namespace std;

int main(void)
{
	cout << "int size : " << sizeof(int) << endl;
	int *pi = new int;	// new 연산자를 통해 heap 영역에 int(4byte) 크기만큼의 메모리 공간을 할당받고, 할당받은 메모리의 주소를 리턴!
	*pi = 10;			// 포인터가 가리키고 있는 곳의 데이터 저장공간에 10을 집어넣어라
	cout << "Pi가 가리키는 곳에 저장된 값 : " << *pi << endl;

	delete pi;			// 동적 할당 받은 메모리 공간을 반환

	int* pary = new int[10];	// 배열 형태로 할당
	cout << sizeof(pary) << endl;
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10;		// 배열의 각 방에 원소(요소)값을 집어 넣는다. ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++) {
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;				// 배열로 동적 할당한 메모리를 반환
	return 0;
}
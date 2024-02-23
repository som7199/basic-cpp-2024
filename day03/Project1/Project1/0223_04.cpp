#include <iostream>
#include <string.h>
#include <cstdlib> // <stdlib.h> 대신 <cstdlib> 헤더를 사용
#define _CRT_SECURE_NO_WARNINGS
/*
객체의 생성 => 힙 영역에 객체 생성됨!
*/
using namespace std;

class Simple {
public:
    Simple()        // 생성자(클래스 이름과 같은 메서드)
    {
        cout << "I'm simple constructor!" << endl;
    }
};

int main(void) {

    cout << "case 1: ";
    Simple* sp1 = new Simple;       // new 연산자를 통한 객체 생성
    // 힙 영역에 Simple이라는 객체 생성
    // 그 객체의 주소값을 sp1이라는 포인터 변수에 저장
    // Simple 타입의 sp1
    // 스택에 sp1 포인터 변수, 힙에는 Simple 객체 생성됨
    // 포인터 변수 sp1으로 Simple 객체에 접근

    cout << "case 2: ";
    Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);
    // malloc 함수 호출을 통해 힙 영역에 변수를 할당
    // ????????????????
    // 일단 new - delete / malloc - free 의 동작 방식에는 차이가 있다니까
    // malloc은 그냥 힙 영역에 메모리 공간만 할당 받는거고, new는 메모리 공간 할당과 동시에 생성자도 호출되는건가?

    cout << endl << "end of main !" << endl;
    delete sp1;             // 객체 반환
    free(sp2);

    return 0;
}




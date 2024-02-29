#include <iostream>
// 클래스 생성만으로는 메모리에 공간을 할당받지 않음, 객체를 생성해서 필드와 멤버에 접근
using namespace std;

int simObjCnt = 0;		// 전역변수
int cmxObjCnt = 0;		// 전역변수

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;	// 객체가 생성될 때마다 해당 전역변수의 값이 증가
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++;	// 객체가 생성될 때마다 해당 전역변수의 값이 증가
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;	// 객체가 생성될 때마다 해당 전역변수의 값이 증가
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;		
	SoComplex com2 = com1;
	SoComplex();		// 임시객체 생성
	return 0;
}
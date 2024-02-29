#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;		// static 멤버변수 public으로 선언
public:							// 불필요하지만 변수와 함수의 구분을 목적으로 삽입하기도 함
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		// static 멤버변수는 항상 이렇게 초기화 진행

int main(void)
{
	//현재 SoSimple 객체를 하나도 생성하지 않은 상태이나 클래스의 이름으로 simObjCnt에 접근 중 => static 멤버변수가 객체 내에 존재하지 않음을 증명!
	// public으로 선언된 static 멤버는 이런 식으로 어디서든 접근 가능!
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;	
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;			// 객체 sim1을 이용해서 static 멤버변수에 접근 가능하지만 추천 X
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}
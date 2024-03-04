/*
RemoteControl클래스, SamsungTv 클래스, LgTv 클래스를 설계하고,
remote -> on()을 호출하면 연결된 TV에 따라서 "삼성 TV on" 또는 "LG TV on"이 출력되도록 프로그램을 완성하시오.
*/

#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void On() {
		cout << "TV를 켭니다." << endl;
	}
};

class SamsungTV : public RemoteControl
{
public:
	virtual void On() {
		cout << "삼성 TV on" << endl;
	}
};

class LgTV : public RemoteControl
{
public:
	virtual void On() {
		cout << "LG TV on" << endl;
	}
};

// 리모컨에 연결된 객체에 따라서 출력이 달라지는. 이게 바로 다형성(Polymorphism)!
int main(void)
{
	RemoteControl* remote = new SamsungTV();		// SamsungTV 객체 생성!
	remote->On();									// SamsungTv 클래스의 On() 호출

	remote = new LgTV();							// 포인터 변수에 LgTv 객체 저장
	remote->On();									// LgTv 클래스의 On() 호출
	delete remote;									// 메모리 사용 후 반납!

	return 0;
}

// virtual 키워드가 없으면 포인터 변수 remote 기준, 즉 RemoteControl의 On()이 호출된다. => 즉, 포인터의 자료형을 기반으로 호출 대상을 결정한다.
// virtual 키워드 선언 후에는 포인터 변수와 연결되어 있는 객체(실제 가리키는 객체)의 On()이 호출된다! => 포인터 변수가 실제로 가리키는 객체를 참조하여 호출 대상을 결정한다.

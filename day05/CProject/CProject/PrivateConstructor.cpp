#include <iostream>
/*
클래스 내부에서만 객체의 생성을 허용하려는 목적으로 생성자를 private으로 선언하기도 함!!
*/
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);		// new 연산자로 힙 영역에 객체 생성해서 포인터 변수 ptr로 접근하겠다
		return *ptr;
	}
	void ShowNum() const {
		cout << num << endl;
	}

// 생성자가 private으로 선언되어 있는 경우 외부에서 생성자 호출 불가! 
// 외부에서 객체의 생성을 막는 거지 이게 바로 singleton 패턴!
private:
	AAA(int n) : num(n) {}
};

int main(void)
{
	AAA base;			
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);		// AAA타입의 참조변수 obj1에 num이 3인 객체를 저장..!
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);		// AAA타입의 참조변수 obj2에 num이 12인 객체를 저장..!
	obj2.ShowNum();

	// obj1과 obj2는 서로 다른 객체임!
	delete& obj1;
	delete& obj2;
	return 0;
}
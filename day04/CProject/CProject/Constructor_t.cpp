#include <iostream>
/*
생성자(Constructor)
- 클래스 이름과 함수의 이름이 동일하다.
- 반환형이 선언되어 있지 않고, 실제로 반환하지 않는다.
- 객체 생성 시 딱 한 번 호출된다!
- 생성자도 함수의 일종 
	=> 오버로딩 가능
	=> 매개변수에 '디폴트값' 설정 가능
*/
using namespace std;

class MyClass {
	int num;

public:
	// 디폴트 생성자 : 매개변수를 가지지 않는 생성자
	MyClass() {
		cout << "생성자 호출 : MyClass() " << endl;
		num = 10;
	}
	// 생성자 오버로딩
	MyClass(int anum)
	{
		cout << "생성자 호출 : MyClass(int ) " << endl;
		num = anum;
	}

	void MyClassInfo()
	{
		cout << "num : " << num << endl << endl;
	}
};

int main(void)
{
	//MyClass *m = new MyClass();

	MyClass m1;		// 객체 생성 명령으로 생성자는 자동 호출됨!
	m1.MyClassInfo();
	MyClass m2(20);
	m2.MyClassInfo();

	//MyClass m2();	// 객체 생성 X => 생성자 호출 X

	return 0;
}
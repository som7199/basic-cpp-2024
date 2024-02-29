#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << " " << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();			// 함수의 원형 선언! => main 함수 아래에 정의되어 있는 함수 호출
	SimpleClass mysc = sc1();	// sc1 함수를 호출하여, 이 때 반환되는 객체의 값으로 mysc 객체 초기화!
	mysc.ShowData();
	return 0;
}

// SimpleClass 타입의 객체를 반환하는 sc1 함수
// 여기서 객체 생성하고(=> 생성자 호출됨), 생성된 객체 sc를 반환!
SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}
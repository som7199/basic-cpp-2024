#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj : " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	// 임시객체를 생성하는 방법. Temporary(int n):num(n)에서 임시객체가 생성되었다가, 다음 행으로 넘어갈 때 소멸된다.
	Temporary(100);		// Temporary t(100); 이게 아니라..! Temporary(100); =>  임시객체를 직접 생성하는 방법!
	cout << "********** after make!" << endl << endl;

	// 임시객체 생성, 이어서 임시객체의 참조 값이 반환되면, ShowTempInfo()를 실행시킨 후, 다음 행으로 넘어갈 때 소멸시킨다.
	Temporary(200).ShowTempInfo();			// 임시객체 생성하고, 이 객체를 대상으로 ShowTempInfo() 호출
	cout << "********** after make!" << endl << endl;

	// 임시객체를 생성한 후, 참조자 ref로 임시객체를 참조하고 있다. 이 참조자는 다음 행에서도 사용할 수 있다.
	const Temporary& ref = Temporary(300);	// 임시객체 생성, 임시객체는 참조할 수 없다 그래서 const 키워드를 붙여줌!!!
	// 임시객체의 주소를 모르는데 const 키워드로 상수화시키면 그 위치가 고정되니까..? 어딘지 알게 되니까 참조할 수 있음???????
	// 임시객체는 주소가 없음
	// 주소가 없는데 참조가 가능하겠냐고,, 그래서 const 키워드로 상수화 시키면 참조할 수 있음!
	cout << "********** end of main!" << endl << endl;
	return 0;
}
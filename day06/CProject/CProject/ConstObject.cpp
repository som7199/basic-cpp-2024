#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num : " << num << endl;
	}
};

int main(void)
{
	// 객체의 const 선언 : 이 객체의 데이터 변경을 허용하지 않겠다!
	const SoSimple obj(7);		// const 객체 생성, 해당 객체 대상으론 const 멤버함수만 호출 가능!!
	// obj.AddNum(20);
	obj.ShowData();
	return 0;
}
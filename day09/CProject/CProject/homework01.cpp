#include <iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int n) : num(n) {}
	//Myclass(const Myclass& ref) : num(ref.num) {}		// 얕은 복사는 컴파일러가 기본으로 제공해줘서 정의해줄 필요없음
	void print() { cout << "value : " << num << endl; }

	// 객체끼리의 더하기 연산을 위해 멤버함수를 이용한 연산자 오버로딩
	Myclass operator+(const Myclass& ref)
	{
		Myclass cls(num + ref.num);
		return cls;
	}
};

int main(void)
{
	Myclass a(10);
	a.print();			// value : 10

	Myclass b(a);		// 컴파일러가 기본적으로 제공해주는 복사 생성자(얕은 복사), 단 깊은 복사를 해야할 때 복사 생성자 정의가 필요하다!!!!!
	b.print();			// value : 10

	Myclass c = b;		// 복사 생성자 실행! b라는 객체를 c라는 객체에 집어넣는다? 이건 
	b.print();			// value : 10

	Myclass d = a + b + c;		// a.operator+(b)
	d.print();			// value : 30

	return 0;
}
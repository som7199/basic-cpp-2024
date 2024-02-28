#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "Called SoSimple(int n) constructor" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)	// 복사 생성자
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	SoSimple& AddNum(int n)					// 참조형 반환하는 AddNum 함수
	{
		num += n;
		return *this;						// 이 문장을 실행하는 객체 자신을 반환, 반환형이 참조형이므로 참조 값이 반환됨!
	}
	void ShowData()							// 멤버 함수 --> 객체 생성 후에 사용이 가능하다.
	{
		cout << "num : " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)			// 인자의 전달 과정에서 복사 생성자 호출됨
{
	cout << "return 이전" << endl;
	return ob;								// ob 객체 반환, 반환형 참조형X => ob 객체의 복사본이 만들어지면서 반환됨!!!
	// 임시객체를 반환함!
	// return ob; 로 객체를 반환하게 되면, 임시객체라는 것이 생성되고, 이 임시객체의 복사 생성자가 호출되면서 return문에 명시된 객체가 인자로 전달된다.
	// 즉, 최종적으로 반환되는 객체는 새롭게 생성되는 임시객체!!
	// 함수 호출이 완료되고 나면, 지역적으로 선언된 객체 ob는 소멸, obj 객체와 임시객체만 남음!!
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();	// SimpleFuncObj 함수가 반환한 객체(임시객체)를 대상으로 AddNum 함수 호출하고, AddNum 함수가 반환하는 참조 값을 대상으로 ShowData 함수 호출
	obj.ShowData();
	return 0;
}

/*
Called SoSimple(int n) constructor
Called SoSimple(const SoSimple& copy)
return 이전
Called SoSimple(const SoSimple& copy)
num : 37
num : 7
*/
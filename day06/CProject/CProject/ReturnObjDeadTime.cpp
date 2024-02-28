#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:		
	SoSimple(int n) : num(n)
	{
		cout << "New Object : " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj : " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj : " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)			// obj를 복사해서 쓰니까 복사 생성자 호출!
{
	cout << "Parm ADR : " << &ob << endl;	// 객체 ob의 주소를 나타내는 &ob
	return ob;								// 리턴하면 ob 소멸, ob가 소멸되기 전에 임시객체를 생성 => 복사 생성자 호출됨!! => 객체가 생성됐음을 알 수 있음 = 임시객체 생성!!!!
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}

/*
New Object : 00000097298FF764			// 객체 obj의 주소
New Copy obj : 00000097298FF864			// 객체 ob의 주소
Parm ADR : 00000097298FF864				// 객체 ob의 주소 (&ob) cout << "Parm ADR : " << &ob << endl;
New Copy obj : 00000097298FF8A4			// 임시객체 주소
Destroy obj : 00000097298FF864			// 객체 ob 소멸
Destroy obj : 00000097298FF8A4			// 임시객체 소멸

New Copy obj : 00000097298FF8C4			// 객체 ob의 주소
Parm ADR : 00000097298FF8C4				// 객체 ob의 주소
New Copy obj : 00000097298FF784			// 임시객체의 주소, SoSimple SimpleFuncObj(SoSimple ob) 에서 ob 리턴하고 객체 ob 소멸 => 복사 생성자 호출 => 임시객체 생성
Destroy obj : 00000097298FF8C4			// 객체 ob 소멸
Return Obj 00000097298FF784				// 임시객체의 주소
Destroy obj : 00000097298FF784			// 임시객체 소멸
Destroy obj : 00000097298FF764			// 객체 obj 소멸
*/
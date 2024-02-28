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

SoSimple SimpleFuncObj(SoSimple ob)			// obj�� �����ؼ� ���ϱ� ���� ������ ȣ��!
{
	cout << "Parm ADR : " << &ob << endl;	// ��ü ob�� �ּҸ� ��Ÿ���� &ob
	return ob;								// �����ϸ� ob �Ҹ�, ob�� �Ҹ�Ǳ� ���� �ӽð�ü�� ���� => ���� ������ ȣ���!! => ��ü�� ���������� �� �� ���� = �ӽð�ü ����!!!!
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
New Object : 00000097298FF764			// ��ü obj�� �ּ�
New Copy obj : 00000097298FF864			// ��ü ob�� �ּ�
Parm ADR : 00000097298FF864				// ��ü ob�� �ּ� (&ob) cout << "Parm ADR : " << &ob << endl;
New Copy obj : 00000097298FF8A4			// �ӽð�ü �ּ�
Destroy obj : 00000097298FF864			// ��ü ob �Ҹ�
Destroy obj : 00000097298FF8A4			// �ӽð�ü �Ҹ�

New Copy obj : 00000097298FF8C4			// ��ü ob�� �ּ�
Parm ADR : 00000097298FF8C4				// ��ü ob�� �ּ�
New Copy obj : 00000097298FF784			// �ӽð�ü�� �ּ�, SoSimple SimpleFuncObj(SoSimple ob) ���� ob �����ϰ� ��ü ob �Ҹ� => ���� ������ ȣ�� => �ӽð�ü ����
Destroy obj : 00000097298FF8C4			// ��ü ob �Ҹ�
Return Obj 00000097298FF784				// �ӽð�ü�� �ּ�
Destroy obj : 00000097298FF784			// �ӽð�ü �Ҹ�
Destroy obj : 00000097298FF764			// ��ü obj �Ҹ�
*/
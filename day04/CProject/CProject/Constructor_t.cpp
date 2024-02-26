#include <iostream>
/*
������(Constructor)
- Ŭ���� �̸��� �Լ��� �̸��� �����ϴ�.
- ��ȯ���� ����Ǿ� ���� �ʰ�, ������ ��ȯ���� �ʴ´�.
- ��ü ���� �� �� �� �� ȣ��ȴ�!
- �����ڵ� �Լ��� ���� 
	=> �����ε� ����
	=> �Ű������� '����Ʈ��' ���� ����
*/
using namespace std;

class MyClass {
	int num;

public:
	// ����Ʈ ������ : �Ű������� ������ �ʴ� ������
	MyClass() {
		cout << "������ ȣ�� : MyClass() " << endl;
		num = 10;
	}
	// ������ �����ε�
	MyClass(int anum)
	{
		cout << "������ ȣ�� : MyClass(int ) " << endl;
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

	MyClass m1;		// ��ü ���� ������� �����ڴ� �ڵ� ȣ���!
	m1.MyClassInfo();
	MyClass m2(20);
	m2.MyClassInfo();

	//MyClass m2();	// ��ü ���� X => ������ ȣ�� X

	return 0;
}
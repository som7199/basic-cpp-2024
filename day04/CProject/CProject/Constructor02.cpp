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
	SimpleClass sc1();			// �Լ��� ���� ����! => main �Լ� �Ʒ��� ���ǵǾ� �ִ� �Լ� ȣ��
	SimpleClass mysc = sc1();	// sc1 �Լ��� ȣ���Ͽ�, �� �� ��ȯ�Ǵ� ��ü�� ������ mysc ��ü �ʱ�ȭ!
	mysc.ShowData();
	return 0;
}

// SimpleClass Ÿ���� ��ü�� ��ȯ�ϴ� sc1 �Լ�
// ���⼭ ��ü �����ϰ�(=> ������ ȣ���), ������ ��ü sc�� ��ȯ!
SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}
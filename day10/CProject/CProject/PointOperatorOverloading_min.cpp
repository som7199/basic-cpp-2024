#include <iostream>
using namespace std;

class Number  // Number�� ���� Ŭ���� ����
{
private:
	int num;
public:  
	Number(int n) : num(n) {  }    // num�� �ʱ�ȭ�ϴ� ������
	void ShowData() { cout << num << endl; }   // num ���� ǥ���ϴ� ��� �Լ�

	Number* operator->()   // ��ü�� �ּҸ� ��ȯ�ϴ� �����ε�� ȭ��ǥ ������(->)
	{
		return this;
	}

	Number& operator*()    // ��ü�� ���� ������ ��ȯ�ϴ� �����ε�� ������ ������(*)
	{
		return *this;
	}
};

int main(void)
{
	Number num(20);       //�ʱⰪ�� 20�� Number Ŭ������ ��ü�� ����
	num.ShowData();       //ShowData ��� �Լ��� ����Ͽ� �ʱⰪ ǥ��

	(*num) = 30;          // ������ ������(*)�� ����Ͽ� ���� 30���� ����
	num->ShowData();      // ShowData ��� �Լ��� ȣ���Ϸ��� ȭ��ǥ ������(->)�� ���
	(*num).ShowData();    // ShowData ��� �Լ��� ȣ���Ϸ��� ������ ������(*)�� �ٽ� ���

	return 0;
}
// ����Ʈ����Ʈ(��ü) �ڵ������� �޸𸮸� ��ȯ���� 
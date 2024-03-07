#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n = 0)" << endl;
	}
	Number& operator=(const Number& ref)		// ���� ������ ȣ�� Ȯ�ο� �����ε�
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	operator int()		// �� ��ȯ �������� �����ε�, ��ȯ���� ���µ� ��ȯ�� �ϰ��ִ�...!
	{
		return num;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;	
	// num1 + 20�� ���� ����Ǿ�� �ϴµ� operator+ �Լ� ���ǰ� �ȵǾ������� ������ �����Ϸ��� num1�� int������ ��ȯ�Ǿ�� �Ѵ�. �� �� ȣ��Ǵ� ���� �� ��ȯ ������!!
	Number num2 = num1 + 20;
	num2.ShowNumber();
	return 0;
}

/*
�� ��ȯ �����ڴ� ��ȯ���� ������� �ʴ´�!
������ return���� ���� ���� ��ȯ�� �󸶵��� �����ϴ�!!
�����ε� �� �������� �̸��� operator+ �̸� + �����ڰ� �������� �� ȣ��Ǵ� �Ͱ� �����ϰ�
operator int�� int������ �� ��ȯ�Ǿ�� �ϴ� ��Ȳ���� ȣ��Ǹ�, return���� ���� ��ȯ�Ǵ� ���� int�������� �� ��ȯ ����� �Ǵ� ��!
*/
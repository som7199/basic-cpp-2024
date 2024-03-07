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
	Number& operator=(const Number& ref)		// ���� �����ε� ���ص� �Ǵµ� ���� ������ ȣ�� Ȯ���Ϸ��� ����
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num;
	// Number�� ��ü�� �;� �� ��ġ�� int�� �����Ͱ� �� => int�� �����͸� ���ڷ� ���޹޴� Number Ŭ������ ������ ȣ���� ���� Number�� �ӽ� ��ü ����! => �� Number ��ü ������� ���Կ��� ����
	// �ٵ� int�� �����Ͱ� �ƴ϶� ���ͷ�
	num = 30;			// 1�ܰ�. �ӽð�ü�� ���� => num = Number(30);
						// 2�ܰ�. �ӽð�ü�� ������� �ϴ� ���� ������ ȣ�� => num.operator=(Number(30));
	num.ShowNumber();
	return 0;
}

/*
A�� ��ü�� �;� �� ��ġ�� B�� ������(�Ǵ� ��ü)�� ���� ���, B�� �����͸� ���ڷ� ���޹޴� A�� Ŭ������ ������ ȣ���� ���ؼ� "A�� �ӽð�ü"�� �����Ѵ�!!!
*/
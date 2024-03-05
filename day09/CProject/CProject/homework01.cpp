#include <iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int n) : num(n) {}
	//Myclass(const Myclass& ref) : num(ref.num) {}		// ���� ����� �����Ϸ��� �⺻���� �������༭ �������� �ʿ����
	void print() { cout << "value : " << num << endl; }

	// ��ü������ ���ϱ� ������ ���� ����Լ��� �̿��� ������ �����ε�
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

	Myclass b(a);		// �����Ϸ��� �⺻������ �������ִ� ���� ������(���� ����), �� ���� ���縦 �ؾ��� �� ���� ������ ���ǰ� �ʿ��ϴ�!!!!!
	b.print();			// value : 10

	Myclass c = b;		// ���� ������ ����! b��� ��ü�� c��� ��ü�� ����ִ´�? �̰� 
	b.print();			// value : 10

	Myclass d = a + b + c;		// a.operator+(b)
	d.print();			// value : 30

	return 0;
}
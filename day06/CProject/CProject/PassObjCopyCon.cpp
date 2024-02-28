#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)						
	{ 
		cout << "SoSimple(int n) constructor ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)	// ���� ������
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()							// ��� �Լ� --> ��ü ���� �Ŀ� ����� �����ϴ�.
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)				// �����Լ� --> ���� �ҳ� �ٷ� ���� ����, ���� ������ ȣ��Ǹ鼭 ���ڷ� obj ���޵�!
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncObj(obj);						// ��ü obj�� ���ڷ� ���� 
	cout << "�Լ� ȣ�� ��" << endl;
	return 0;
}
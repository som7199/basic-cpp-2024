#include <iostream>
/*
Ŭ���� ���ο����� ��ü�� ������ ����Ϸ��� �������� �����ڸ� private���� �����ϱ⵵ ��!!
*/
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);		// new �����ڷ� �� ������ ��ü �����ؼ� ������ ���� ptr�� �����ϰڴ�
		return *ptr;
	}
	void ShowNum() const {
		cout << num << endl;
	}

// �����ڰ� private���� ����Ǿ� �ִ� ��� �ܺο��� ������ ȣ�� �Ұ�! 
// �ܺο��� ��ü�� ������ ���� ���� �̰� �ٷ� singleton ����!
private:
	AAA(int n) : num(n) {}
};

int main(void)
{
	AAA base;			
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);		// AAAŸ���� �������� obj1�� num�� 3�� ��ü�� ����..!
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);		// AAAŸ���� �������� obj2�� num�� 12�� ��ü�� ����..!
	obj2.ShowNum();

	// obj1�� obj2�� ���� �ٸ� ��ü��!
	delete& obj1;
	delete& obj2;
	return 0;
}
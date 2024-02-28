#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num : " << num << endl;
	}
};

int main(void)
{
	// ��ü�� const ���� : �� ��ü�� ������ ������ ������� �ʰڴ�!
	const SoSimple obj(7);		// const ��ü ����, �ش� ��ü ������� const ����Լ��� ȣ�� ����!!
	// obj.AddNum(20);
	obj.ShowData();
	return 0;
}
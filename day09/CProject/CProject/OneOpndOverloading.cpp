#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator++()							// ++ �����ڰ� ����Լ��� ���·� �����ε�
	{
		xpos += 1;
		ypos += 1;
		return *this;							// this�� ��ü �ڽ��� �����Ͱ��� �ǹ���, *this �� ��ü�ڽ��� �ǹ�! => ��ü �ڽ��� ��ȯ!
	}
	friend Point& operator--(Point& ref);		// friend �������� �����Լ� Point& operator--(Point& ref)�� Ŭ������ private�� ���� �����ϵ��� ����
};

Point& operator--(Point& ref)					// -- �����ڰ� �����Լ��� ���·� �����ε�
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main(void)
{
	Point pos(1, 2);
	++pos;					// ++�����ڴ� ����Լ��� ���·� �����ε� �Ǿ����Ƿ� pos.operator++(); �� �ؼ���
	pos.ShowPosition();
	--pos;					// --�����ڴ� �����Լ��� ���·� �����ε� �Ǿ����Ƿ� operator--(pos); �� �ؼ���
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();
	return 0;
}
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
	Point operator+(const Point& ref)					// operator+ ��� �̸��� �Լ� => ��ü���� ���ϱ� ���ؼ� ���� operator+ �Լ�!
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	// ���ο� ��ü pos ����
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);		// pos1 ��ü�� ����Լ� operator+ ȣ���ϸ鼭 ���ڷ� pos2 ��ü ����!
											// �� �� ��ü�� ��� �� ���� ����� ���ο� Point ��ü�� ��������� �̰��� ��ȯ�Ǿ� pos3 �ʱ�ȭ => �� �������� ���� ������ ȣ���!
	Point pos4 = pos2.operator+(pos3);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
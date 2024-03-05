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
	Point operator*(int times)					// ���� ������ �����ε� => Point ��ü�� �������� ���� ��������
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator*(int times, Point& ref);
};

Point operator*(int times, Point& ref)			// ��ȯ��Ģ ���� ������ �Լ� �߰� ����
{
	return ref * times;							// 14���� �����! return ref.operator*(times)
}

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;			// ��ȯ��Ģ ������
	cpy.ShowPosition();

	cpy = 2 * pos * 3;
	cpy.ShowPosition();
	return 0;
}
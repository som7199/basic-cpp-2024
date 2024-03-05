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
};

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	// ����Լ��� ���·� �����ε��� �Ǹ�, ����Լ��� ���ǵ� Ŭ������ ��ü�� �����ε� �� �������� ���� �;��Ѵ�!!!!
	cpy = pos * 3;			// pos.operator*(3) ���� �ؼ���
	cpy.ShowPosition();

	cpy = pos * 3 * 2;		// 3�� ������ �� ��ȯ�Ǵ� ��ü�� ������� �ٽ� 2�� ���ϴ� ������ �� �� cpy ��ü�� ����
	cpy.ShowPosition();
	return 0;
}
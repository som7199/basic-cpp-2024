#include <iostream>
// 멤버 함수에 의한 연산자 오버로딩
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
	Point operator+(const Point& ref)					// operator+ 라는 이름의 함수 => 객체끼리 더하기 위해서 만든 operator+ 함수!
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);	// 새로운 객체 pos 생성
		return pos;
	}
};

int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2;

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	return 0;
}
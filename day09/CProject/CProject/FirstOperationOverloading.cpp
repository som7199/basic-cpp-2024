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
	Point pos3 = pos1.operator+(pos2);		// pos1 객체의 멤버함수 operator+ 호출하면서 인자로 pos2 객체 전달!
											// 이 두 객체의 멤버 별 덧셈 결과로 새로운 Point 객체가 만들어지고 이것이 반환되어 pos3 초기화 => 이 과정에서 복사 생성자 호출됨!
	Point pos4 = pos2.operator+(pos3);

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();
	pos4.ShowPosition();
	return 0;
}
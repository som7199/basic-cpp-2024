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
	Point operator*(int times)					// 곱셈 연산자 오버로딩 => Point 객체와 정수간의 곱셈 가능해짐
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator*(int times, Point& ref);
};

Point operator*(int times, Point& ref)			// 교환법칙 성립 목적의 함수 추가 정의
{
	return ref * times;							// 14행이 실행됨! return ref.operator*(times)
}

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;			// 교환법칙 성립됨
	cpy.ShowPosition();

	cpy = 2 * pos * 3;
	cpy.ShowPosition();
	return 0;
}
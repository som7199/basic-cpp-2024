/*
객체를 더하는 add 멤버함수
*/
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		cout << "Operator" << endl;
	}
	Point add(const Point& other) {
		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		cout << '[' << x << ", " << y << ']' << endl;
	}
};

int main(void)
{
	Point p1(3, 4);
	Point p2(10, 20);
	Point p3 = p1.add(p2);

	p1.showPoint();
	p2.showPoint();
	p3.showPoint();
	return 0;
}
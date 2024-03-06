#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int X, int Y) : x(X), y(Y) {}
	Point operator+(const Point& p)
	{
		Point po(x + p.x, y + p.y);
		return po;
	}
	Point operator+(int num)
	{
		Point po(x + num, y + num);
		return po;
	}
	friend Point operator+(int num, const Point& p);
	friend ostream& operator<<(ostream&, const Point&);
};

Point operator+(int num, const Point& p)
{
	Point po(num + p.x, num + p.y);
	return po;
}

// cout 오버로딩 해주기
ostream& operator<<(ostream& os, const Point& p)
{
	os << '[' << p.x << ', ' << p.y << ']' << endl;
	return os;
}

int main(void) 
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	// cout에는 객체를 출력하는 기능이 없음! 오버로딩 해줘야함!!
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	return 0;
}
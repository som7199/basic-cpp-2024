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
	Point& operator++()							// ++ 연산자가 멤버함수의 형태로 오버로딩
	{
		xpos += 1;
		ypos += 1;
		return *this;							// this는 객체 자신의 포인터값을 의미함, *this 는 객체자신을 의미! => 객체 자신을 반환!
	}
	friend Point& operator--(Point& ref);		// friend 선언으로 전역함수 Point& operator--(Point& ref)가 클래스의 private에 접근 가능하도록 해줌
};

Point& operator--(Point& ref)					// -- 연산자가 전역함수의 형태로 오버로딩
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

int main(void)
{
	Point pos(1, 2);
	++pos;					// ++연산자는 멤버함수의 형태로 오버로딩 되었으므로 pos.operator++(); 로 해석됨
	pos.ShowPosition();
	--pos;					// --연산자는 전역함수의 형태로 오버로딩 되었으므로 operator--(pos); 로 해석됨
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();
	return 0;
}
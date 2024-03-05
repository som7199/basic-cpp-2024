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
};

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	// 멤버함수의 형태로 오버로딩이 되면, 멤버함수가 정의된 클래스의 객체가 오버로딩 된 연산자의 왼편에 와야한다!!!!
	cpy = pos * 3;			// pos.operator*(3) 으로 해석됨
	cpy.ShowPosition();

	cpy = pos * 3 * 2;		// 3을 곱했을 때 반환되는 객체를 대상으로 다시 2를 곱하는 연산을 한 후 cpy 객체에 저장
	cpy.ShowPosition();
	return 0;
}
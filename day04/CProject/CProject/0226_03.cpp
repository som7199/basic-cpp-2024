#include <iostream>
using namespace std;

class Point
{
public:
	// public으로 선언되어서 Point 클래스의 x, y는 어디서든 접근 가능!
	int x;		// x 좌표의 범위는 0 이상 100 이하
	int y;		// y 좌표의 범위는 0 이상 100 이하
};

class Rectangle
{
public:
	// 두 개의 Point 객체를 Rectangle 클래스의 멤버로 두었다!
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "좌 상단 : " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단 : " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl << endl;

	}
};

int main(void) 
{
	// 멤버 변수가 public으로 선언되면, 구조체 변수를 초기화하듯이 초기화 가능!!!!
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	Rectangle rec = { pos2, pos1 };	// 위에서 생성한 Point 객체를 이용해서 Rectangle 객체 생성 및 초기화~!~!~!
	rec.ShowRecInfo();
	return 0;
}
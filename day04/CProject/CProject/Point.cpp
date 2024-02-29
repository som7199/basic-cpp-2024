#include <iostream>
#include "Point.h"
/* 
정보 은닉
=> 멤버 변수를 private으로 선언하고, 해당 변수에 접근하는 함수를 별도로 정의하여 안전한 형태로 변수의 접근을 유도하는 것
*/

using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "벗어난 범위의 값 전달 " << xpos << " " << ypos << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

//함수를 const화 시키는 것!
// const int Point::GetX() 이렇게 하면 리턴하는 값을 상수화 시키겠다는 말
// 함수의 const화는 맨 뒤에 붙여야함!!
int Point::GetX() const		// const 함수! 
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (xpos < 0 || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달 " << xpos << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (ypos < 0 || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달 " << ypos << endl;
		return false;
	}

	y = ypos;
	return true;
}
#include <iostream>
#include "Point.h"
/* 
���� ����
=> ��� ������ private���� �����ϰ�, �ش� ������ �����ϴ� �Լ��� ������ �����Ͽ� ������ ���·� ������ ������ �����ϴ� ��
*/

using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "��� ������ �� ���� " << xpos << " " << ypos << endl;
		return false;
	}

	x = xpos;
	y = ypos;
	return true;
}

//�Լ��� constȭ ��Ű�� ��!
// const int Point::GetX() �̷��� �ϸ� �����ϴ� ���� ���ȭ ��Ű�ڴٴ� ��
// �Լ��� constȭ�� �� �ڿ� �ٿ�����!!
int Point::GetX() const		// const �Լ�! 
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
		cout << "��� ������ �� ���� " << xpos << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point::SetY(int ypos)
{
	if (ypos < 0 || ypos > 100)
	{
		cout << "��� ������ �� ���� " << ypos << endl;
		return false;
	}

	y = ypos;
	return true;
}
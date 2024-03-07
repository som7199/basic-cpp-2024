#include <iostream>
using namespace std;

class Point  //Point�� ���� Ŭ���� ����
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)  // �⺻���� ����Ͽ� xpos �� ypos�� �ʱ�ȭ�ϴ� ������
	{  }
	Point operator+(const Point& pos) const  // Point ��ü�� ���� �����ε�� �߰� ������(+)
	{
		return Point(xpos + pos.xpos, ypos + pos.ypos);
	}
	friend ostream& operator<<(ostream& os, const Point& pos);  // Point�� ���� ��� ��Ʈ�� �����ڸ� �����ε��ϴ� Friend �Լ�
};

ostream& operator<<(ostream& os, const Point& pos)  // Point�� ���� �����ε�� ��� ��Ʈ�� ������
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

class Adder  // Adder�� ���� Functor Ŭ���� ����
{
public:
	int operator()(const int& n1, const int& n2)  // ���� ������ ���� �����ε�� �Լ� ȣ�� ������()
	{
		return n1 + n2;
	}
	double operator()(const double& e1, const double& e2)  // ���� ������ ���� �����ε�� �Լ� ȣ�� ������()
	{
		return e1 + e2;
	}
	Point operator()(const Point& pos1, const Point& pos2)  // ����Ʈ �߰��� ���� �����ε�� �Լ� ȣ�� ������()
	{
		return pos1 + pos2;
	}
};

int main(void)
{
	Adder adder;  // Adder functor Ŭ������ ��ü�� ����
	cout << adder(1, 3) << endl;  // ���͸� ����Ͽ� ���� ����   
	cout << adder(1.5, 3.7) << endl; // ���͸� ����Ͽ� ���� ����
	cout << adder(Point(3, 4), Point(7, 9));  // ���͸� ����Ͽ� ����Ʈ �߰�
	return 0;
}

// 
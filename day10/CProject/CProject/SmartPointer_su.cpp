#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)	// 생성자
	{
		cout << "Point 객체 생성" << endl;
	}
	~Point()
	{
		cout<< "Point 객체 소멸" << endl;
	}
	void SetPos(int x, int y) // 멤버함수
	{
		xpos = x;
		ypos = y;
	}
	friend ostream& operator<<(ostream& os, const Point& pos); 
};
ostream& operator<<(ostream& os, const Point& pos) // 객체를 출력하기위해서 연산자 오버로딩
{
	os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
	return os;
}

class SmartPtr
{
private:
	Point* posptr; // 생성된 객체의 주소값 저장
public:
	SmartPtr(Point*ptr) : posptr(ptr)
	{ }

	Point& operator*() const // Point 타입의 객체를 리턴 
	{
		return *posptr;
	}
	Point* operator->() const // 객체 포인터를 리턴
	{
		return posptr;
	}
	~SmartPtr()
	{	
		printf("SmartPtr 객체소멸\n");
		delete posptr;
	}
};

int main(void)
{
	SmartPtr sptr1(new Point(1, 2)); // new 연산자를 통해 힙영역에 Point객체 생성
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	cout << *sptr1; 
	cout << *sptr2;
	cout << *sptr3;

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr3->SetPos(50, 60);
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;
	return 0;
}

// 스마트 포인터 -> 동적으로 할당받은 메모리를 자동으로 delete 연산이 이루어져 해제
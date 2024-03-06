#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new(size_t size)
	{
		cout << "operator new : " << size << endl;	// operator new : 8
		void* adr = new char[size];					// 바이트 단위로 필요한 메모리 공간 할당, 할당에 사용되는 크기정보는 컴파일러가 계산해서 전달해줌!!, 생성자 호출!
		return adr;
	}

	void operator delete(void* adr)
	{
		cout << "operator delete()" << endl;
		delete[]adr;								// 배열의 형태로 할당했기에 배열의 삭제를 위한 delete문!
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}
소민이 공부하지마삼;
int main(void)
{
	Point* ptr = new Point(3, 4);
	cout << *ptr;	// ptr이 가리키고 있는 애의 데이터에 접근!
	delete ptr;
	return 0;
}
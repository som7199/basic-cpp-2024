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
	Point& operator++()						// 전위증가 - 증가하고 던져준다. a = ++i
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int)				// 후위증가 - 던져주고 증가시킨다. a = i++
	{
		// 1. 현재의 객체를 복사하여 현재의 속성값을 유지시킨다.
		const Point retobj(xpos, ypos);		// const Point retobj(*this);, 반환에 사용될 복사본은 값이 변경되면 안되기 때문에 const 선언!
		// 2. 현재 객체의 속성값을 1씩 증가시킨다.
		xpos += 1;
		ypos += 1;
		//3. 증가 이전에 복사한 객체를 전달한다.
		return retobj;
	}
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)			// 전위감소
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int)	//	후위감소 , 반환할 복사본의 값이 변경되면 안되니까 const 선언! 
{
	const Point retobj(ref);			// const 객체, 함수 내에서 retobj의 변경을 막겠다!
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;						// 반환 시 이 객체를 복사한 임시 객체가 생성될 것, const 선언되어 있으니까 상수화되는 임시 객체가 만들어질 것!
										// const 함수 내에서는 const 함수의 호출만 허용하도록 제한함
										// 즉, const 객체를 대상으로는 값의 변경능력을 지니는, const로 선언되지 않은 함수의 호출을 허용하지 않음
}

int main(void)
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();
	return 0;
}
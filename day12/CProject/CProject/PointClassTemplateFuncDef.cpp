#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);						// 일반적인 클래스 정의와 마찬가지로 매개변수의 디폴트 값은 클래스 템플릿 내에만 표시
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}		// 일반적인 클래스 정의와 마찬가지로 생성자를 외부에 정의할 때는 클래스 템플릿의 외부에 정의된 생성자에만 이니셜라이저 삽입

template <typename T>
void Point<T>::ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F');		// 좌표정보를 문자로 표시하는 상황의 표현
	pos3.ShowPosition();

	return 0;
}
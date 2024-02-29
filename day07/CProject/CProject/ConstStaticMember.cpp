#include <iostream>
using namespace std;
// 상수와 참조자는 선언과 동시에 초기화 해줘야 함
// 클래스 내에 선언된 const 멤버변수(상수)의 초기화는 이니셜라이저를 통해야 함
// const static으로 선언되는 멤버변수(상수)는 아래와 같이 선언과 동시에 초기화 가능!!
class CountryArea
{
public:
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	// 9-12행에 정의된 상수에 접근하기 위해 굳이 객체를 생성할 필요없음!
	// 클래스의 이름을 통해 접근하는 것이 편하기도 하고, 접근하는 대상에 대한 정보를 쉽게 노출하는 방법이 되기도 함
	cout << "러시아 면적 : " << CountryArea::RUSSIA << "km²" << endl;
	cout << "캐나다 면적 : " << CountryArea::CANADA << "km²" << endl;
	cout << "중국 면적 : " << CountryArea::CHINA << "km²" << endl;
	cout << "한국 면적 : " << CountryArea::SOUTH_KOREA << "km²" << endl;
	return 0;
}
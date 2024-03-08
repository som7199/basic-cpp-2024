#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;			// 문자 비교(알파벳 순서)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;	// 문자열 대상 호출할 경우, 단순히 주소값의 비교 결과가 반환되므로 아무런 의미도 부여할 수 없다.. => 함수 템플릿의 특수화는 SpecialFuncionTemplate.cpp
	return 0;
}
#include <iostream>
#include <cstring>
/*
함수 템플릿의 특수화
*/
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

// 함수 템플릿 Max를 char* 형에 대해 특수화 - 문자열 길이 비교
template <>
char* Max(char* a, char* b)
{
	cout << "char* Max<char*>(char* a, char* b)" << endl;
	return strlen(a) > strlen(b) ? a : b;
}

// 함수 템플릿 Max를 const char* 형에 대해 특수화 - 사전 편찬 순서 비교
template <>
const char* Max(const char* a, const char* b)
{
	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
	return strcmp(a, b) > 0 ? a : b;
}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;			// 문자 비교(알파벳 순서)
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl;	// 문자열의 선언으로 인해 반환되는 주소 값의 포인터형은 const char* 이다! => const char* Max(const char* a, const char* b) 함수 호출됨!

	char str1[] = "Simple";					// str1, str2는 변수의 형태로 선언됨 => 포인터형은 char* 이다
	char str2[] = "Best";
	cout << Max(str1, str2) << endl;		// => char* Max(char* a, char* b) 함수가 호출됨!
	return 0;
}
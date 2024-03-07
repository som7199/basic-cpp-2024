#include <iostream>
using namespace std;

int main(void)
{
	/*
	C - Style 
	문자열은 마지막에 널문자가 붙는다!
	*/
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl;
	cout << "=================" << endl;
	char arr[6] = { 'a', 'b', 'c', 'd', 'e' };		// 문자열 타입의 배열 선언
	cout << arr << endl;
	printf("=================\n");
	char arr1[] = { 'a', 'b', 'c', '\0', 'e'};		// \0 => 널 문자 : 문자열의 끝을 알림! 출력은 abc 까지만 된다.
	cout << arr1 << endl;
	cout << sizeof(arr1) << endl;					// 전체 문자 크기 => 5 출력
	cout << strlen(arr1) << endl;					// null 문자 앞까지의 크기 => 3 출력
	printf("=================\n");
	char str[] = "string";							// 자동으로 널문자가 붙는다. @@@스택영역에 만들어짐
	cout << str << endl;
	cout << sizeof(str) << endl;					// 널문자가 포함된 크기가 리턴, 따라서 7 출력!
	cout << strlen(str) << endl;					// 6 출력
	str[0] = 'S';
	cout << str << endl;
	printf("=================\n");
	const char* pstr = "STRING";					// @@@read-only 영역에 만들어짐 -> 수정이 불가능
	cout << pstr << endl;
	cout << sizeof(pstr) << endl;					// 8, pstr 포인터의 크기
	cout << strlen(pstr) << endl;					// 6

	printf("=================\n");
	int a = 100;
	int* pa = &a;
	cout << sizeof(pa) << endl;
	cout << strlen(pstr) << endl;					// pstr 포인터의 크기
	//pstr[0] = 's';								// 문자열을 포인터로 사용하는 경우는 변경이 불가능하다!

	printf("=================\n");
	printf("=================\n");

	/*
	C++ - style : heap 영역에 저장한다.
	*/
	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;			// 40
	//cout << strlen(s) << endl;
	cout << s.size() << endl;			// 6
	printf("=================\n");

	string s1 = "HongGilDong";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;			// 40
	cout << s1.size() << endl;			// 11, size()라는 멤버함수 호출을 통해 문자열 크기 알아내기
	printf("=================\n");

	string s2 = "Hi";
	string s3 = "Bye";

	string s4 = s2 + s3;
	cout << s4 << endl;
	return 0;
}
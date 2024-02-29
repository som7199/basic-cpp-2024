//오버라이딩 : 재정의 => 상속 관계에서 발생
//오버로딩 : 다중 정의, 함수 이름은 동일하나 매개변수

#include <iostream>

using namespace std;

void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}
void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}
void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}
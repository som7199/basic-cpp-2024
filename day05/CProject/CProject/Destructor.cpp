#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)		// 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;			// strlen() : 문자열의 길이를 구하는 함수, 문자열의 맨 끝엔 null문자를 붙여줘야함! 그래서 문자열의 길이 + 1 해줌
		name = new char[len];					// new 연산자로 힙 영역에 메모리 공간을 할당 받고, name이라는 빈 배열을 만든 후, strcpy()로 myname에 들어있는 문자열을 복사해서 힙 영역에 있는 name에 저장!
		// 문자열을 힙 영역에 저장하려면 메모리 공간에 얼마정도의 크기를 할당 받아야하는지 알아야하니까 strlen() 해주고, 
		// 해당 크기만큼의 메모리 공간을 new 연산자를 통해 할당받은 후
		// 문자열을 복사해서 힙 영역에 새로 할당받은 곳에 저장, (배열의 이름은 배열의 시작 주소)
		cout << "char의 크기 : " << sizeof(char) << endl << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl << endl;
	}
	// 소멸자 : 클래스 이름 앞에 ~ 가 붙는 형태
	~Person() {
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
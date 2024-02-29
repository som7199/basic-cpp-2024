// MyInfo 객체를 생성한다.
// MyInfo객체.printMyInfo();를 호출한다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage) {
		//cout << "MyClass 생성자" << endl;
		strcpy(name, myname);
		age = myage;
	}
	string getMyName() {
		return name;
	}
	int getMyAge() {
		return age;
	}
};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* mypNumber) : Myclass(myname, myage) {
		//cout << "MyInfo 생성자" << endl;
		strcpy(pNumber, mypNumber);
	}
	void printMyInfo()
	{
		cout << "나의 이름은 " << getMyName() << "이고, 나이는 " << getMyAge() << "살이며, 전화번호는 " << pNumber << "입니다." << endl;
	}
};

int main(void)
{
	MyInfo m("김소민", 24, "010-2575-7199");
	m.printMyInfo();
	return 0;
}
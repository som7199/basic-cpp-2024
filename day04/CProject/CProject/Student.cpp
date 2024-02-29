#include <iostream>
#include <string.h>
/*
파일 속성 > 일반 > 전처리기 > 전처리기 정의 > 편집 > _CRT_SECURE_NO_WARNINGS 
*/
using namespace std;

class StudentClass
{
private:
	char name[20];	// 문자열 배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통해 초기화한다.
	const int ID;	// 학번을 상수화
	char major[20];
	int age;

public:
	// 문자열은 주소기 때문에 포인터 변수에 넣어서 사용한다. - 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜라이저는 객체 생성 시 초기화되지 않는 멤버들을 초기화할 때 사용한다. 즉, 객체 생성과 상관없이 미리 초기화가 되는 멤버들에 초기화
	StudentClass(const char* stdName, int stdID, const char* stdMajor, int stdAge) : ID(stdID)	// 멤버 이니셜라이저를 통한 멤버변수의 초기화
	{
		//ID = stdID;

		// 문자열 배열을 초기화하는 방법은 strcpy() 사용하기!
		// strcpy(빈 배열, 문자열 들어있는 배열) : 빈 배열에 문자열 복사하는 함수
		strcpy(name, stdName);
		
		strcpy(major, stdMajor);
		age = stdAge;
	}
	void showStudentInfo() const
	{
		cout << "학생 정보" << endl;
		cout << "이름 : " << name << endl;
		cout << "학번 : " << ID << endl;
		cout << "전공 : " << major << endl;
		cout << "나이 : " << age << endl;
	}
};

int main(void)
{
	StudentClass std1("김소민", 201845809, "IT응용공학과", 24);
	std1.showStudentInfo();
	return 0;
}
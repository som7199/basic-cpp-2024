#include <iostream>
using namespace std;

// 클래스 Data를 흉내낸 영역
typedef struct Data
{
	int data;
	void (*ShowData)(Data*);	// ShowData 멤버함수 선언, 이 포인터 변수는 void ShowData(Data* THIS) 함수의 주소 값을 저장하기 위함!
	void (*Add)(Data*, int);	// ADD 멤버함수 선언, void Add(Data* THIS, int num) 함수의 주소 값을 저장하기 위한 포인터 변수!
} Data;

void ShowData(Data* THIS) {		// ShowData 멤버함수 정의
	cout << "Data : " << THIS->data << endl; 
}
void Add(Data* THIS, int num) { // Add 멤버함수 정의
	THIS->data += num; 
}

// 적절히 변경된 main 함수
int main(void)
{
	// obj1, obj2 두 개의 구조체 변수(객체)는 ShowData 함수와 Add 함수를 공유하는 셈! 이 두 함수를 이용해서 멤버인 함수 포인터 변수를 초기화했으니까!
	Data obj1 = { 15, ShowData, Add };		// Data 구조체 변수 obj1 선언과 초기화
	Data obj2 = { 7, ShowData, Add };

	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);
	return 0;
}

/*
* C++의 객체와 멤버함수는 다음과 같은 관계를 가진다.
- 객체가 생성되면 멤버 변수는 객체 내에 존재하지만,
- 멤버함수는 메모리의 한 공간에 별도로 위치하고선, 이 함수가 정의된 클래스의 모든 객체가 이를 공유하는 형태를 취한다!!
*/
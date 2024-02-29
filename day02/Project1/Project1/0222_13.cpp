#include <iostream>
/*
잘못된 참조의 반환
*/
using namespace std;

int& RefRetFuncOne(int n)
{
	int num = 20;
	num += n;
	return num;		// num = 30,  num을 참조의 형태로 반환, 반환 후 지역변수 num 소멸!근데 int& ref = RefRetFuncOne(10);로 num이라는 변수에 참조를 한다..? 안돼!
	// 지역변수를 참조형으로 반환하면 안 됨!!!!!!!!!!
}

int main(void)
{
	int& ref = RefRetFuncOne(10);	// 곧 소멸될 num에 참조를.. 아직 소멸되진 않은(곧 소멸될) 찌꺼기 형태로 남아있는 데이터를 참조해서 정상적인 출력결과를 보이기도 하니까 조심하기!!
	cout << ref << endl;
	// 실행하면 실제로 경고 메시지 뜸
	// 경고	C4172 지역 변수 또는 임시 : num의 주소를 반환하고 있습니다.
	return 0;
}
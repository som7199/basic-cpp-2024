#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;
	// int cnt = 0;	// Counter 함수 호출이 끝나면 cnt 변수는 사라짐
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}
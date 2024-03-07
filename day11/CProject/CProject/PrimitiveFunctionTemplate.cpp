#include <iostream>
using namespace std;

template <class T1, class T2>		// 키워드 typename을 대신하여 키워드 class 사용도 가능!
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
}

int main(void)
{
	ShowData<char, int>(65);
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<short, double>(69.2);
	ShowData<short, double>(70.4);
	return 0;
}
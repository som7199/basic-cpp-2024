#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		printf("생성자 호출\n");
		arr = new int[len];
	}
	int& operator[] (int idx)
	{
		printf("[]연산자 함수 호출\n");
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray();
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{

		printf("소멸자 호출\n");
		delete[] arr;
	}
};

int main(void)
{
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;

	return 0;
}	
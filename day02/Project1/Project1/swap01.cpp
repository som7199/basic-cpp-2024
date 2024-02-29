#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int b = 20;
	cout << "바꾸기 전" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout << "바뀐 후" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}
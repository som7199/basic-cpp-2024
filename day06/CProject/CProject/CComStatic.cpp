#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;
	// int cnt = 0;	// Counter �Լ� ȣ���� ������ cnt ������ �����
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

/*
�Ӽ� > �Ϲ� > SDL �˻� > �ƴϿ� �� ����!
*/

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);		// C: heap ������ 20Byte ũ��� �޸� �Ҵ�
	char* str = new char[len];
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);		// ���� �Ҵ�� �޸� ���� �Ҹ�
	delete []str;
	return 0;
}
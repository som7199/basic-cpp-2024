#include <iostream>
#include <string.h>
#include < stdlib.h>
using namespace std;

/*
�Ӽ� > ��ó���� > ��ó���� ���� ���� > _CRT_SECURE_NO_WARNINGS
*/

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);		// C: heap ������ 20Byte ũ��� �޸� �Ҵ�
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);		// ���� �Ҵ�� �޸� ���� �Ҹ�
	return 0;
}
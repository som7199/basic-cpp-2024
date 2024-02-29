#include <iostream>
#include <string.h>
#include < stdlib.h>
using namespace std;

/*
속성 > 전처리기 > 전처리기 정의 편집 > _CRT_SECURE_NO_WARNINGS
*/

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);		// C: heap 영역에 20Byte 크기로 메모리 할당
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);		// 힙에 할당된 메모리 공간 소멸
	return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

/*
속성 > 일반 > SDL 검사 > 아니오 로 변경!
*/

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);		// C: heap 영역에 20Byte 크기로 메모리 할당
	char* str = new char[len];
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	//free(str);		// 힙에 할당된 메모리 공간 소멸
	delete []str;
	return 0;
}